animationSystem.cameraSpring.use 1
animationSystem.cameraSpring.amplitude 0.04/0.02/0.2
animationSystem.cameraSpring.zoomdamping 10/10/10
animationSystem.cameraSpring.stiffness 6/4/10
animationSystem.cameraSpring.move 1/-1/-1
animationSystem.cameraSpring.look 0.5/0.5
animationSystem.cameraSpring.fire 0/0/1.5

rem *** Animations ***
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_deploy.baf
animationManager.looping 0
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_fire.baf
animationManager.looping 0
animationManager.noiceFreq 3
animationManager.noiceAmplitude 0.002
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_idle1.baf
animationManager.looping 0
animationManager.length 2.9583
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_idle2.baf
animationManager.looping 0
animationManager.length 2.33333
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_reload.baf
animationManager.looping 0
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_run.baf
animationManager.length 0.666667
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_crawl_rev.baf
animationManager.length 0.52
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_crawl.baf
animationManager.length 0.52
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_crawl_left.baf
animationManager.length 0.52
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_crawl_right.baf
animationManager.length 0.52
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_sprint.baf
animationManager.length 0.666667
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_stand.baf
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_tozoom.baf
animationManager.looping 0
animationManager.length 0.55
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_zoom_fire.baf
animationManager.looping 0
animationManager.noiceFreq 1
animationManager.noiceAmplitude 0.002
animationManager.length 0.33
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_zoom_run.baf
animationManager.length 1.3
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_zoom_crawl_rev.baf
animationManager.length 0.52
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_zoom_crawl.baf
animationManager.length 0.52
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_zoom_crawl_left.baf
animationManager.length 0.52
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_zoom_crawl_right.baf
animationManager.length 0.52
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_zoom_stand.baf
animationManager.length 6
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_zoom_crouch.baf
animationManager.length 7
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_zoom_prone.baf

animationSystem.createBundle deploy
animationBundle.isLooping 0
animationBundle.fadeInTime 0.001
animationBundle.fadeOutTime 0.3
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_deploy.baf

animationSystem.createBundle fire
animationBundle.isLooping 0
animationBundle.abruptPlayback 1
animationBundle.fadeInTime 0.0
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_fire.baf

animationSystem.createBundle idle1
animationBundle.isLooping 0
animationBundle.fadeInTime 0.1
animationBundle.fadeOutTime 0.3
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_idle1.baf

animationSystem.createBundle idle2
animationBundle.isLooping 0
animationBundle.fadeOutTime 0.3
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_idle2.baf

animationSystem.createBundle reload
animationBundle.isLooping 0
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_reload.baf

animationSystem.createBundle run
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_run.baf

animationSystem.createBundle run_prone
animationBundle.fadeInTime 0.4
animationBundle.fadeOutTime 0.3
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_crawl_left.baf
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_crawl_right.baf
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_crawl_rev.baf
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_crawl.baf

animationSystem.createBundle sprint
animationBundle.fadeInTime 0.3
animationBundle.fadeOutTime 0.3
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_sprint.baf

animationSystem.createBundle still
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_stand.baf

animationSystem.createBundle zoom_fire
animationBundle.isLooping 0
animationBundle.abruptPlayback 1
animationBundle.fadeInTime 0.0
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_zoom_fire.baf

animationSystem.createBundle zoom_run
animationBundle.fadeInTime 0.1
animationBundle.fadeOutTime 0.1
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_zoom_run.baf

animationSystem.createBundle zoom_run_prone
animationBundle.fadeInTime 0.6
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_zoom_crawl_left.baf
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_zoom_crawl_right.baf
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_zoom_crawl_rev.baf
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_zoom_crawl.baf

animationSystem.createBundle zoom_still
animationBundle.fadeInTime 0.3
animationBundle.fadeOutTime 0.3
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_zoom_stand.baf

animationSystem.createBundle zoom_crouch
animationBundle.fadeInTime 0.3
animationBundle.fadeOutTime 0.3
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_zoom_crouch.baf

animationSystem.createBundle zoom_prone
animationBundle.fadeInTime 0.4
animationBundle.fadeOutTime 0.4
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_zoom_prone.baf

animationSystem.createBundle zoomTransition
animationBundle.isLooping 0
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/Animations/1p/1p_dp28_tozoom.baf


rem *** Triggers ***
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

