
import json
import subprocess
import os
import argparse

templates = {
    'consumers': [
        'ObjectTemplate.activeSafe %_s %s',
        'ObjectTemplate.addTemplate %s',
        'ObjectTemplate.geometry %s',
        'ObjectTemplate.rotateAsAnimatedUVObject %s',
        'ObjectTemplate.projectileTemplate %s',
        'ObjectTemplate.aiTemplate %s',
        'ObjectTemplate.animationSystem1P %p',
        'ObjectTemplate.animationSystem3P %p',
        'ObjectTemplate.vehicleHud.miniMapIcon %p',
        'ObjectTemplate.vehicleHud.vehicleIcon %p',
        'ObjectTemplate.vehicleHud.spottedIcon %p',
        'ObjectTemplate.setCollisionMesh %s',
        'ObjectTemplate.seatAnimationSystem %p',
        'ObjectTemplate.soundFilename %p',
        'ObjectTemplate.collisionMesh %s',
        'animationBundle.addAnimation %p',
        'animationTrigger.addBundle %s',
        'animationTrigger.addChild %s',
    ],
    'producers': [
        'ObjectTemplate.create %_s %s',
        'CollisionManager.createTemplate %s',
        'GeometryTemplate.create %s',
        'animationSystem.createAnimation %p',
        'animationSystem.createBundle %s',
        'animationSystem.createTrigger %s',
    ],
    # TODO read as script parameters and join with default lists
    'extra_consumers': [],
    'extra_producers': []
}


def convert_to_regex_pattern(template):
    '''
    '''
    # Remove underscores
    pattern = template.replace('_', '')
    # Escape dots
    pattern = pattern.replace('.', '\.')
    # Replace %p with a regex pattern
    pattern = pattern.replace('%p', '\w+')
    # Replace %s with a regex pattern
    pattern = pattern.replace('%s', '\w+')
    # Escape whitespaces
    pattern = pattern.replace(' ', '\s+')
    return pattern


def scan(regex_commands) -> dict:
    '''
    '''
    try:
        # files = {}
        nodes = {
            'paths': {},
            'templates': {}
        }

        for command in regex_commands:
            print(f'Running command: {" ".join(command)}')
            result = subprocess.run(command, stdout=subprocess.PIPE, text=True)
            output = result.stdout
            print('Matching lines:')
            print(output)

            lines = output.splitlines()
            for line in lines:
                # print(line)
                filepath, codeline = line.split(':')
                # print(filepath, '  <>  ', codeline)
                filename = filepath.split('/')[-1]
                template = codeline.split(' ')[-1]
                # print(filename, '  <>  ', template)

                if template.lower().startswith('objects/'):
                    # TODO check the file exists, for now store it separately
                    if template in nodes['paths']:
                        if filename not in nodes['paths'][template]:
                            nodes['paths'][template].append(filename)
                    else:
                        nodes['paths'][template] = [filename]
                else:
                    if template in nodes['templates']:
                        if filename not in nodes['templates'][template]:
                            nodes['templates'][template].append(filename)
                    else:
                        nodes['templates'][template] = [filename]
    except subprocess.CalledProcessError as e:
        print(f'No results for command: {" ".join(command)}')
    except KeyError as e:
        print(e)
        print(f'Processing {template} in {filename}')
        print('Current tree:')
        print(json.dumps(nodes, indent=4))
        exit(-1)

    return nodes


def create_output_dir(path="out"):
    '''
    Create output dir
    '''
    if not os.path.isdir(path):
        os.makedirs(path)

    return path


def save(consumed, produced):
    '''
    '''
    path = create_output_dir()

    with open(f'{path}/templates.txt', 'w') as f:
        f.write('=======================:\n')
        f.write('Consumed templates:\n')
        f.write('=======================:\n')
        for item in consumed['templates']:
            f.write('%s\n' % item)

        f.write('\n\n')
        
        f.write('=======================:\n')
        f.write('Consumed paths:\n')
        f.write('=======================:\n')
        for item in consumed['paths']:
            f.write('%s\n' % item)

        f.write('\n\n')

        f.write('=======================:\n')
        f.write('Produced templates:\n')
        f.write('=======================:\n')
        for item in produced['templates']:
            f.write('%s\n' % item)

        f.write('=======================:\n')
        f.write('Produced paths:\n')
        f.write('=======================:\n')
        for item in produced['paths']:
            f.write('%s\n' % item)

        f.write('\n\n')

    with open(f'{path}/tree.csv', 'w') as f:
        for key, value in consumed:
            f.write(f'{key}, {value}')



def generate_search_commands(templates: list, path: str):
    '''
    '''
    # Convert each item in the list to a regex pattern
    regex_patterns = [convert_to_regex_pattern(template) for template in templates]

    # Build the command
    grep_commands = [['grep', '-E', '-r', regex, path] for regex in regex_patterns]

    return grep_commands


def main(paths: dict):
    '''
    '''
    include_paths=(
        'soldiers',
        'kits',
        'vehicles',
        'weapons',
    )
    # TODO handle sensitive case

    for mod, path in paths.items():
        dirs = os.listdir(path)
        for folder in include_paths:
            if folder in dirs:
                # print(os.path.join(path, folder))
                print(f'Scanning {mod} mod from {path}')
                ## Consumers
                grep_commands = generate_search_commands(templates['consumers'], path)
                consumed = scan(grep_commands)

                ## Producers
                grep_commands = generate_search_commands(templates['producers'], path)
                produced = scan(grep_commands)

                outdir = create_output_dir()
                with open(f'{outdir}/{mod}_{folder}.json', 'w') as f:
                    nodes = {
                        'consumed': consumed,
                        'produced': produced
                    }
                    f.write(json.dumps(nodes, indent=4))

        # Save to file
        # save(consumed, produced)


if __name__ == '__main__':   
    parser = argparse.ArgumentParser(
        prog='main.py',
        description='This programs runs a compatibility test...'
    )
    parser.add_argument('-b', '--beta', 
        help='Path to unzipped beta mod folder',
        nargs='?',
        required=True
    )
    parser.add_argument('-c', '--cmp', 
        help='Path to unzipped cmp mod folder',
        nargs='?',
        required=True
    )
    args = parser.parse_args()  
    paths = dict(beta=args.beta, cmp=args.cmp)
    main(paths)