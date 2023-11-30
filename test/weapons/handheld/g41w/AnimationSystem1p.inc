animationSystem.cameraSpring.use 1
animationSystem.cameraSpring.amplitude 0.04/0.02/0.2
animationSystem.cameraSpring.zoomdamping 7/1/1.5
animationSystem.cameraSpring.stiffness 4/5/27
animationSystem.cameraSpring.move 1/-1/-1
animationSystem.cameraSpring.look 0.5/0.5
animationSystem.cameraSpring.hit 2/2/10
animationSystem.cameraSpring.fire 0/0/1.5

rem *** Animations ***
animationSystem.createAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_deploy.baf
animationManager.looping 0
animationSystem.createAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_fire.baf
animationManager.looping 0
animationSystem.createAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_idle1.baf
animationManager.looping 0
animationManager.length 4.4
animationSystem.createAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_idle2.baf
animationManager.looping 0
animationManager.length 2.8
animationSystem.createAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_reload.baf
animationManager.looping 0
animationSystem.createAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_run.baf
animationManager.length 0.666667
animationSystem.createAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_crawl_rev.baf
animationManager.length 0.52
animationSystem.createAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_crawl.baf
animationManager.length 0.52
animationSystem.createAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_crawl_left.baf
animationManager.length 0.52
animationSystem.createAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_crawl_right.baf
animationManager.length 0.52
animationSystem.createAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_sprint.baf
animationManager.length 0.666667
animationSystem.createAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_stand.baf
animationSystem.createAnimation Objects/Weapons/Handheld/g41w/animations/1p/1p_g41w_tozoom.baf
animationManager.looping 0
animationManager.length 0.25
animationSystem.createAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_zoom_fire.baf
animationManager.looping 0
animationSystem.createAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_zoom_prone.baf
animationSystem.createAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_zoom_crouch.baf
animationSystem.createAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_zoom_run.baf
animationManager.length 1.35
animationSystem.createAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_zoom_crawl_rev.baf
animationManager.length 0.52
animationSystem.createAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_zoom_crawl.baf
animationManager.length 0.52
animationSystem.createAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_zoom_crawl_left.baf
animationManager.length 0.52
animationSystem.createAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_zoom_crawl_right.baf
animationManager.length 0.52
animationSystem.createAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_zoom_stand.baf

rem *** Bundles ***
animationSystem.createBundle deploy
animationBundle.isLooping 0
animationBundle.fadeInTime 0.001
animationBundle.fadeOutTime 0.3
animationBundle.addAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_deploy.baf

animationSystem.createBundle fire
animationBundle.isLooping 0
animationBundle.abruptPlayback 1
animationBundle.fadeInTime 0.001
animationBundle.addAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_fire.baf

animationSystem.createBundle idle1
animationBundle.isLooping 0
animationBundle.fadeOutTime 0.3
animationBundle.addAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_idle1.baf

animationSystem.createBundle idle2
animationBundle.isLooping 0
animationBundle.fadeOutTime 0.3
animationBundle.addAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_idle2.baf

animationSystem.createBundle reload
animationBundle.isLooping 0
animationBundle.fadeOutTime 0.3
animationBundle.addAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_reload.baf
animationBundle.addEvent effect:1
animationBundle.setEventStartTime effect:1 5
animationBundle.addEvent effect:2
animationBundle.setEventStartTime effect:2 8

animationSystem.createBundle run
animationBundle.fadeInTime 0.4
animationBundle.fadeOutTime 0.4
animationBundle.addAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_run.baf

animationSystem.createBundle run_prone
animationBundle.fadeInTime 0.4
animationBundle.fadeOutTime 0.3
animationBundle.addAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_crawl_left.baf
animationBundle.addAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_crawl_right.baf
animationBundle.addAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_crawl_rev.baf
animationBundle.addAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_crawl.baf

animationSystem.createBundle sprint
animationBundle.fadeInTime 0.4
animationBundle.fadeOutTime 0.4
animationBundle.addAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_sprint.baf

animationSystem.createBundle still
animationBundle.fadeInTime 0.4
animationBundle.fadeOutTime 0.4
animationBundle.addAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_stand.baf

animationSystem.createBundle zoom_fire
animationBundle.isLooping 0
animationBundle.abruptPlayback 1
animationBundle.fadeInTime 0.001
animationBundle.addAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_zoom_fire.baf

animationSystem.createBundle zoom_run
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_zoom_run.baf

animationSystem.createBundle zoom_run_prone
animationBundle.fadeInTime 0.6
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_zoom_crawl_left.baf
animationBundle.addAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_zoom_crawl_right.baf
animationBundle.addAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_zoom_crawl_rev.baf
animationBundle.addAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_zoom_crawl.baf

animationSystem.createBundle zoom_still
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0
animationBundle.addAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_zoom_stand.baf

animationSystem.createBundle zoom_crouch
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_zoom_crouch.baf

animationSystem.createBundle zoom_prone
animationBundle.fadeInTime 0.4
animationBundle.fadeOutTime 0.4
animationBundle.addAnimation Objects/Weapons/Handheld/g41w/Animations/1p/1p_g41w_zoom_prone.baf

animationSystem.createBundle zoomTransition
animationBundle.isLooping 0
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0
animationBundle.addAnimation Objects/Weapons/Handheld/g41w/animations/1p/1p_g41w_tozoom.baf


rem *** Triggers ***
animationSystem.createTrigger Trigger zoom_still_t
animationTrigger.addBundle zoom_still

animationSystem.createTrigger Trigger zoom_crouch_t
animationTrigger.addBundle zoom_crouch

animationSystem.createTrigger Trigger zoom_prone_t
animationTrigger.addBundle zoom_prone

animationSystem.createTrigger PoseTrigger zoom_still
animationTrigger.addChild zoom_still_t
animationTrigger.addChild zoom_crouch_t
animationTrigger.addChild zoom_prone_t

animationSystem.createTrigger MovementTrigger zoom_move_prone_t
animationTrigger.addBundle zoom_run_prone
animationTrigger.valueHolder 1p_move

animationSystem.createTrigger MovementTrigger zoom_move_crouch_t
animationTrigger.addBundle zoom_run
animationTrigger.valueHolder 1p_zoom_move

animationSystem.createTrigger MovementTrigger zoom_move_stand_t
animationTrigger.addBundle zoom_run
animationTrigger.valueHolder 1p_zoom_move

animationSystem.createTrigger PoseTrigger zoom_move
animationTrigger.addChild zoom_move_stand_t
animationTrigger.addChild zoom_move_crouch_t
animationTrigger.addChild zoom_move_prone_t

animationSystem.createTrigger MessageTrigger zoom_fire
animationTrigger.addBundle zoom_fire
animationTrigger.message 1

animationSystem.createTrigger Trigger zoom
animationTrigger.addChild zoom_still
animationTrigger.addChild zoom_move
animationTrigger.addChild zoom_fire

animationSystem.createTrigger RandomTrigger rnd_idle
animationTrigger.addBundle idle1
animationTrigger.addBundle idle2

animationSystem.createTrigger IdleTrigger idle
animationTrigger.addChild rnd_idle
animationTrigger.idleTime 25/30

animationSystem.createTrigger Trigger idledummy

animationSystem.createTrigger PoseTrigger idle_t
animationTrigger.addChild idle
animationTrigger.addChild idledummy
animationTrigger.addChild idledummy

animationSystem.createTrigger Trigger still
animationTrigger.addChild idle_t
animationTrigger.addBundle still

animationSystem.createTrigger MovementTrigger move_prone_t
animationTrigger.addBundle run_prone
animationTrigger.valueHolder 1p_move

animationSystem.createTrigger MovementTrigger move_crouch_t
animationTrigger.addBundle run
animationTrigger.valueHolder 1p_move

animationSystem.createTrigger MovementTrigger move_stand_t
animationTrigger.addBundle run
animationTrigger.valueHolder 1p_move

animationSystem.createTrigger PoseTrigger move
animationTrigger.addChild move_stand_t
animationTrigger.addChild move_crouch_t
animationTrigger.addChild move_prone_t

animationSystem.createTrigger MovementTrigger sprint
animationTrigger.addBundle sprint
animationTrigger.valueHolder 1p_sprint

animationSystem.createTrigger MessageTrigger fire
animationTrigger.addBundle fire
animationTrigger.message 1

animationSystem.createTrigger MessageTrigger reload
animationTrigger.addBundle reload
animationTrigger.message 2

animationSystem.createTrigger Trigger normal
animationTrigger.fadeInTime 0.2
animationTrigger.addChild still
animationTrigger.addChild move
animationTrigger.addChild sprint
animationTrigger.addChild fire
animationTrigger.addChild reload

animationSystem.createTrigger SwitchMessageTrigger root
animationTrigger.addChild zoom
animationTrigger.addChild normal
animationTrigger.addBundle zoomTransition
animationTrigger.message 4

animationSystem.createTrigger Trigger startup
animationTrigger.addBundle deploy

animationSystem.createTrigger Trigger completeTree
animationTrigger.addChild root
animationTrigger.addChild startup

