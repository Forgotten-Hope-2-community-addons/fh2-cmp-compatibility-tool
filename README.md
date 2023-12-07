
# CMP minimod compatibility test tool

## Usage

```console
python3 -m venv env
source env/bin/activate

python main.py -b <beta_objects_path>  -c <cmp_objects_path>
```

Example:

```console
python main.py -b /media/ForgottenHope2/mods/fh2beta/objects  -c /media/ForgottenHope2/mods/cmp/objects
```

Results store separately in `./out/(beta|cmp).json`.

## Criteria

This tool tests the compatibility of the CMP minimod (or any other minimod of FH2) by 
comparing the interfaces of the assets. Every object either consumes or produces templates,
which are the interfaces. Testing the compatiblity, at least, programatically, is a matter
of comparing the interfaces exported (produced) with the interfaces imported (consumed) by
the objects.

For that, first we need to defined who are these consumers and producers, and how to 
identify them. This can be achieved by defining a set of rules (regular expressions)
that match within the `.tweak` and `.con` code files. The use of simple Linux commands as
`find` and `grep` should be enough to generate a first filter pass to extract the lines
that match the regular expressions we want, effectively identifying the exporter 
(the file) and the exportee (the object template).

Although this principle could also be extended to map files and statics, the tool 
responsibility is limited to **soldiers**, **vehicles**, **kits** and **weapons**.

## Legend

* `%s` - string.
* `%p` - path to file. Relative to `objects/`.
* `_` - to be skipped. Not a field of interest for this use case.

## Producers

```lua
ObjectTemplate.create %_s %s
CollisionManager.createTemplate %s
GeometryTemplate.create %s
animationSystem.createAnimation %p
animationSystem.createBundle %s
animationSystem.createTrigger %s
```


* `.con` files

        ```lua
        ObjectTemplate.create %_s %s
        CollisionManager.createTemplate %s
        GeometryTemplate.create %s
        ```

* `.tweak` files

        ```lua
        ObjectTemplate.create %_s %s
        ```

* `.inc` files

        ```lua
        animationSystem.createAnimation %p
        animationSystem.createBundle %s
        animationSystem.createTrigger %s
        ```

## Consumers

```lua
ObjectTemplate.activeSafe %_s %s
ObjectTemplate.addTemplate %s
ObjectTemplate.geometry %s
ObjectTemplate.rotateAsAnimatedUVObject %s
ObjectTemplate.projectileTemplate %s
ObjectTemplate.aiTemplate %s
ObjectTemplate.animationSystem1P %p
ObjectTemplate.animationSystem3P %p
ObjectTemplate.vehicleHud.miniMapIcon %p
ObjectTemplate.vehicleHud.vehicleIcon %p
ObjectTemplate.vehicleHud.spottedIcon %p
ObjectTemplate.setCollisionMesh %s
ObjectTemplate.seatAnimationSystem %p
ObjectTemplate.soundFilename %p
ObjectTemplate.collisionMesh %s
animationBundle.addAnimation %p
animationTrigger.addBundle %s
animationTrigger.addChild %s
```

More precisely:

* `.con` files

        ```lua
        ObjectTemplate.activeSafe %_s %s
        ObjectTemplate.addTemplate %s
        ObjectTemplate.soundFilename %p
        ObjectTemplate.collisionMesh %s
        ObjectTemplate.skeleton1P %p
        ObjectTemplate.skeleton3P %p
        ```


* `.tweak` files

        ```lua
        ObjectTemplate.activeSafe %_s %s
        ObjectTemplate.addTemplate %s
        ObjectTemplate.geometry %s
        ObjectTemplate.rotateAsAnimatedUVObject %s
        ObjectTemplate.projectileTemplate %s
        ObjectTemplate.aiTemplate %s
        ObjectTemplate.animationSystem1P %p
        ObjectTemplate.animationSystem3P %p
        ObjectTemplate.vehicleHud.miniMapIcon %p
        ObjectTemplate.vehicleHud.vehicleIcon %p
        ObjectTemplate.vehicleHud.spottedIcon %p
        ObjectTemplate.setCollisionMesh %s
        ObjectTemplate.seatAnimationSystem %p
        ObjectTemplate.skeleton1P %p
        ObjectTemplate.skeleton3P %p
        ```


* `.inc` files

        ```lua
        animationBundle.addAnimation %p
        animationTrigger.addBundle %s
        animationTrigger.addChild %s
        ObjectTemplate.vehicleHud.miniMapIcon %p
        ObjectTemplate.vehicleHud.vehicleIcon %p
        ObjectTemplate.vehicleHud.spottedIcon %p
        ```

