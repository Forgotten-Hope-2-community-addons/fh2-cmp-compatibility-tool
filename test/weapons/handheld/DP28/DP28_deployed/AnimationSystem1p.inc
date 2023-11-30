animationSystem.cameraSpring.use 1
animationSystem.cameraSpring.amplitude 0.1/0.05/0.2
animationSystem.cameraSpring.zoomDamping 7/5/5
animationSystem.cameraSpring.stiffness 4/8/10
animationSystem.cameraSpring.move 2/-0.1/-0.5
animationSystem.cameraSpring.look 0.5/0.5
animationSystem.cameraSpring.fire 0/0/0.15

rem *** Animations ***
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_crouch.baf
animationManager.length 4
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_deploy.baf
animationManager.looping 0
animationManager.length 2.2
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_fire_crouch.baf
animationManager.looping 0
animationManager.length 0.33
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_fire_prone.baf
animationManager.looping 0
animationManager.length 0.33
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_fire_stand.baf
animationManager.looping 0
animationManager.length 0.33
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_prone.baf
animationManager.length 4
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_reload.baf
animationManager.looping 0
animationManager.length 5.3
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_reload_prone.baf
animationManager.looping 0
animationManager.length 5.3
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_run_crouch.baf
animationManager.length 0.875
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_crawl_rev.baf
animationManager.length 0.52
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_crawl.baf
animationManager.length 0.52
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_crawl_left.baf
animationManager.length 0.52
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_crawl_right.baf
animationManager.length 0.52
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_run_stand.baf
animationManager.length 1
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_sprint.baf
animationManager.length 0.6667
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_stand.baf
animationManager.length 4
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_tozoom.baf
animationManager.looping 0
animationManager.length 0.55
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_zoom_fire.baf
animationManager.looping 0
animationManager.noiceFreq 1
animationManager.noiceAmplitude 0.002
animationManager.length 0.33
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_zoom_run.baf
animationManager.length 0.875
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_zoom_crawl_rev.baf
animationManager.length 0.52
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_zoom_crawl.baf
animationManager.length 0.52
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_zoom_crawl_left.baf
animationManager.length 0.52
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_zoom_crawl_right.baf
animationManager.length 0.52
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_zoom_stand.baf
animationManager.length 4
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_toprone.baf
animationManager.looping 0
animationSystem.createAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_fromprone.baf
animationManager.looping 0

rem *** Bundles ***
animationSystem.createBundle deploy
animationBundle.isLooping 0
animationBundle.fadeInTime 0.001
animationBundle.fadeOutTime 0.3
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_deploy.baf

animationSystem.createBundle fire_crouch
animationBundle.isLooping 0
animationBundle.abruptPlayback 1
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_fire_crouch.baf

animationSystem.createBundle fire_prone
animationBundle.isLooping 0
animationBundle.abruptPlayback 1
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_fire_prone.baf

animationSystem.createBundle fire_stand
animationBundle.isLooping 0
animationBundle.abruptPlayback 1
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_fire_stand.baf

animationSystem.createBundle run_crouch
animationBundle.fadeInTime 0.4
animationBundle.fadeOutTime 0.4
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_run_crouch.baf

animationSystem.createBundle run_prone
animationBundle.fadeInTime 0.4
animationBundle.fadeOutTime 0.3
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_crawl_left.baf
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_crawl_right.baf
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_crawl_rev.baf
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_crawl.baf

animationSystem.createBundle run_stand
animationBundle.fadeInTime 0.4
animationBundle.fadeOutTime 0.4
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_run_stand.baf

animationSystem.createBundle reload_crouch
animationBundle.isLooping 0
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_reload.baf

animationSystem.createBundle reload_prone
animationBundle.isLooping 0
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_reload_prone.baf

animationSystem.createBundle reload_stand
animationBundle.isLooping 0
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_reload.baf

animationSystem.createBundle sprint
animationBundle.fadeInTime 0.4
animationBundle.fadeOutTime 0.4
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_sprint.baf

animationSystem.createBundle still_crouch
animationBundle.fadeInTime 0.4
animationBundle.fadeOutTime 0.4
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_crouch.baf

animationSystem.createBundle still_prone
animationBundle.fadeInTime 0.4
animationBundle.fadeOutTime 0.4
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_prone.baf

animationSystem.createBundle still_stand
animationBundle.fadeInTime 0.4
animationBundle.fadeOutTime 0.4
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_stand.baf

animationSystem.createBundle zoom_fire
animationBundle.isLooping 0
animationBundle.abruptPlayback 1
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_zoom_fire.baf

animationSystem.createBundle zoom_run
animationBundle.fadeInTime 0.6
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_zoom_crawl_left.baf
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_zoom_crawl_right.baf
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_zoom_crawl_rev.baf
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_zoom_crawl.baf

animationSystem.createBundle zoom_still
animationBundle.fadeInTime 0.4
animationBundle.fadeOutTime 0.4
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_zoom_stand.baf

animationSystem.createBundle zoomTransition
animationBundle.isLooping 0
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_tozoom.baf

animationSystem.createBundle toProne
animationBundle.isLooping 0
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0.1
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_toprone.baf

animationSystem.createBundle FromProne
animationBundle.isLooping 0
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0.1
animationBundle.addAnimation Objects/Weapons/Handheld/dp28/dp28_deployed/animations/1p/1p_dp28d_fromprone.baf

rem *** Triggers ***
animationSystem.createTrigger Trigger zoom_still_t
animationTrigger.addBundle zoom_still

animationSystem.createTrigger MovementTrigger zoom_move_t
animationTrigger.addBundle zoom_run
animationTrigger.valueHolder 1p_zoom_move_prone

animationSystem.createTrigger MessageTrigger zoom_fire_t
animationTrigger.addBundle zoom_fire
animationTrigger.message 1

animationSystem.createTrigger Trigger zoom
animationTrigger.addChild zoom_still_t
animationTrigger.addChild zoom_move_t
animationTrigger.addChild zoom_fire_t

animationSystem.createTrigger Trigger still_stand_t
animationTrigger.addBundle still_stand

animationSystem.createTrigger Trigger still_crouch_t
animationTrigger.addBundle still_crouch

animationSystem.createTrigger Trigger still_prone_t
animationTrigger.addBundle still_prone

animationSystem.createTrigger PoseTrigger still
animationTrigger.addChild still_stand_t
animationTrigger.addChild still_crouch_t
animationTrigger.addChild still_prone_t

animationSystem.createTrigger MovementTrigger run_stand_t
animationTrigger.addBundle run_stand
animationTrigger.valueHolder 1p_move

animationSystem.createTrigger MovementTrigger run_crouch_t
animationTrigger.addBundle run_crouch
animationTrigger.valueHolder 1p_move

animationSystem.createTrigger MovementTrigger run_prone_t
animationTrigger.addBundle run_prone
animationTrigger.valueHolder 1p_move

animationSystem.createTrigger PoseTrigger move
animationTrigger.addChild run_stand_t
animationTrigger.addChild run_crouch_t
animationTrigger.addChild run_prone_t

animationSystem.createTrigger MovementTrigger sprint
animationTrigger.addBundle sprint
animationTrigger.valueHolder 1p_sprint

animationSystem.createTrigger Trigger fire_stand_t
animationTrigger.addBundle fire_stand

animationSystem.createTrigger Trigger fire_crouch_t
animationTrigger.addBundle fire_crouch

animationSystem.createTrigger Trigger fire_prone_t
animationTrigger.addBundle fire_prone

animationSystem.createTrigger PoseTrigger fire_pose
animationTrigger.addChild fire_stand_t
animationTrigger.addChild fire_crouch_t
animationTrigger.addChild fire_prone_t

animationSystem.createTrigger MessageTrigger fire
animationTrigger.addChild fire_pose
animationTrigger.message 1

animationSystem.createTrigger Trigger reload_stand_t
animationTrigger.addBundle reload_stand

animationSystem.createTrigger Trigger reload_crouch_t
animationTrigger.addBundle reload_crouch

animationSystem.createTrigger Trigger reload_prone_t
animationTrigger.addBundle reload_prone

animationSystem.createTrigger PoseTrigger reload_pose
animationTrigger.addChild reload_stand_t
animationTrigger.addChild reload_crouch_t
animationTrigger.addChild reload_prone_t

animationSystem.createTrigger MessageTrigger reload
animationTrigger.addChild reload_pose
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

animationSystem.createTrigger Trigger fromProne
animationTrigger.addBundle FromProne
animationTrigger.message 4

animationSystem.createTrigger Trigger stillToProne
animationTrigger.addBundle toProne
animationTrigger.message 4

animationSystem.createTrigger Trigger forwardToProne
animationTrigger.addBundle toProne
animationTrigger.message 4

animationSystem.createTrigger Trigger backwardToProne
animationTrigger.addBundle toProne
animationTrigger.message 4

animationSystem.createTrigger Trigger leftToProne
animationTrigger.addBundle toProne
animationTrigger.message 4

animationSystem.createTrigger Trigger rightToProne
animationTrigger.addBundle toProne
animationTrigger.message 4

animationSystem.createTrigger Trigger specialMoves
animationTrigger.addChild fromProne
animationTrigger.addChild stillToProne
animationTrigger.addChild forwardToProne
animationTrigger.addChild backwardToProne
animationTrigger.addChild leftToProne
animationTrigger.addChild rightToProne

animationSystem.createTrigger Trigger completeTree
animationTrigger.addChild root
animationTrigger.addChild specialMoves
animationTrigger.addChild startup

