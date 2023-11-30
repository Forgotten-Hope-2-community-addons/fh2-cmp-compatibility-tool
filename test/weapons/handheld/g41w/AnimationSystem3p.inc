
rem *** Animations ***
animationSystem.createAnimation Objects/Weapons/HandHeld/m1garand/Animations/3p/3p_m1garand_crouchForward.baf
animationSystem.createAnimation Objects/Weapons/HandHeld/m1garand/Animations/3p/3p_m1garand_proneBackward.baf
animationManager.length 1.16667
animationSystem.createAnimation Objects/Weapons/HandHeld/m1garand/Animations/3p/3p_m1garand_proneDeploy.baf
animationManager.looping 0
animationSystem.createAnimation Objects/Weapons/HandHeld/m1garand/Animations/3p/3p_m1garand_proneFire.baf
animationManager.looping 0
animationManager.ignoreMotherOrientation 12
animationManager.length 0.291667
animationSystem.createAnimation Objects/Weapons/HandHeld/m1garand/Animations/3p/3p_m1garand_proneForward.baf
animationManager.length 1.16667
animationSystem.createAnimation Objects/Weapons/Handheld/m1garand/Animations/3p/3p_m1garand_proneReload.baf
animationManager.looping 0
animationManager.ignoreMotherOrientation 12
animationSystem.createAnimation Objects/Weapons/HandHeld/m1garand/Animations/3p/3p_m1garand_proneStill.baf
animationSystem.createAnimation Objects/Weapons/Handheld/m1garand/Animations/3p/3p_m1garand_proneStrafeLeft.baf
animationSystem.createAnimation Objects/Weapons/Handheld/m1garand/Animations/3p/3p_m1garand_proneStrafeRight.baf
animationSystem.createAnimation Objects/Weapons/Handheld/bar18a2/Animations/3p/3p_bar18_reload.baf
animationManager.looping 0
animationManager.ignoreMotherOrientation 12
animationManager.length 4
animationSystem.createAnimation Objects/Weapons/HandHeld/m1garand/Animations/3p/3p_m1garand_runBackward.baf
animationSystem.createAnimation Objects/Weapons/HandHeld/m1garand/Animations/3p/3p_m1garand_runBackwardToProne.baf
animationManager.length 2.2
animationManager.looping 0
animationSystem.createAnimation Objects/Weapons/HandHeld/m1garand/Animations/3p/3p_m1garand_runForward.baf
animationSystem.createAnimation Objects/Weapons/HandHeld/m1garand/Animations/3p/3p_m1garand_runForwardToProne.baf
animationManager.length 2.2
animationManager.looping 0
animationSystem.createAnimation Objects/Weapons/Handheld/g41w/Animations/3p/3p_g41w_sprint.baf
animationSystem.createAnimation Objects/Weapons/HandHeld/m1garand/Animations/3p/3p_m1garand_stand.baf
animationManager.ignoreMotherOrientation 12
animationSystem.createAnimation Objects/Weapons/HandHeld/m1garand/Animations/3p/3p_m1garand_standDeploy.baf
animationManager.looping 0
animationManager.ignoreMotherOrientation 12
animationSystem.createAnimation Objects/Weapons/Handheld/m1garand/Animations/3p/3p_m1garand_standFire.baf
animationManager.looping 0
animationManager.ignoreMotherOrientation 12
animationManager.length 0.416667
animationSystem.createAnimation Objects/Weapons/HandHeld/m1garand/Animations/3p/3p_m1garand_standToProne.baf
animationManager.looping 0
animationSystem.createAnimation Objects/Weapons/HandHeld/m1garand/Animations/3p/3p_m1garand_strafeLeft.baf
animationSystem.createAnimation Objects/Weapons/HandHeld/m1garand/Animations/3p/3p_m1garand_strafeRight.baf
animationSystem.createAnimation Objects/Weapons/Handheld/m1garand/Animations/3p/3p_m1garand_walkBackward.baf
animationSystem.createAnimation Objects/Weapons/Handheld/m1garand/Animations/3p/3p_m1garand_walkForward.baf
animationSystem.createAnimation Objects/Weapons/Handheld/m1garand/Animations/3p/3p_m1garand_walkLeft.baf
animationSystem.createAnimation Objects/Weapons/Handheld/m1garand/Animations/3p/3p_m1garand_walkRight.baf
animationSystem.createAnimation Objects/Weapons/HandHeld/m1garand/Animations/3p/3p_m1garand_zoom.baf
animationManager.ignoreMotherOrientation 12
animationSystem.createAnimation Objects/Weapons/Handheld/m1garand/animations/3p/3p_m1garand_zoomfire.baf
animationManager.looping 0
animationManager.ignoreMotherOrientation 12

rem *** Bundles ***
animationSystem.createBundle backwardToProne
animationBundle.isLooping 0
animationBundle.fadeInTime 0.1
animationBundle.addAnimation Objects/Weapons/HandHeld/m1garand/Animations/3p/3p_m1garand_runBackwardToProne.baf

animationSystem.createBundle crouch_move
animationBundle.fadeInTime 0.3
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/HandHeld/m1garand/Animations/3p/3p_m1garand_crouchForward.baf

animationSystem.createBundle forwardToProne
animationBundle.isLooping 0
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0.3
animationBundle.addAnimation Objects/Weapons/HandHeld/m1garand/Animations/3p/3p_m1garand_runForwardToProne.baf

animationSystem.createBundle hit
animationBundle.isLooping 0
animationBundle.fadeInTime 0.1

animationSystem.createBundle prone_fire
animationBundle.isLooping 0
animationBundle.abruptPlayback 1
animationBundle.fadeInTime 0.01
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/HandHeld/m1garand/Animations/3p/3p_m1garand_proneFire.baf

animationSystem.createBundle prone_move
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/m1garand/Animations/3p/3p_m1garand_proneStrafeLeft.baf
animationBundle.addAnimation Objects/Weapons/Handheld/m1garand/Animations/3p/3p_m1garand_proneStrafeRight.baf
animationBundle.addAnimation Objects/Weapons/HandHeld/m1garand/Animations/3p/3p_m1garand_proneBackward.baf
animationBundle.addAnimation Objects/Weapons/HandHeld/m1garand/Animations/3p/3p_m1garand_proneForward.baf

animationSystem.createBundle prone_reload
animationBundle.isLooping 0
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/m1garand/Animations/3p/3p_m1garand_proneReload.baf

animationSystem.createBundle prone_still
animationBundle.addAnimation Objects/Weapons/HandHeld/m1garand/Animations/3p/3p_m1garand_proneStill.baf

animationSystem.createBundle prone_turnLeft
animationBundle.playBackward 1
animationBundle.fadeInTime 0.1
animationBundle.addAnimation Objects/Weapons/Handheld/m1garand/Animations/3p/3p_m1garand_proneStrafeLeft.baf

animationSystem.createBundle prone_turnRight
animationBundle.fadeInTime 0.1
animationBundle.addAnimation Objects/Weapons/Handheld/m1garand/Animations/3p/3p_m1garand_proneStrafeRight.baf

animationSystem.createBundle proneDeploy
animationBundle.isLooping 0
animationBundle.fadeInTime 0.1
animationBundle.addAnimation Objects/Weapons/HandHeld/m1garand/Animations/3p/3p_m1garand_proneDeploy.baf

animationSystem.createBundle proneToStill
animationBundle.isLooping 0
animationBundle.playBackward 1
animationBundle.fadeInTime 0.1
animationBundle.addAnimation Objects/Weapons/HandHeld/m1garand/Animations/3p/3p_m1garand_standToProne.baf

animationSystem.createBundle stand_fire
animationBundle.isLooping 0
animationBundle.abruptPlayback 1
animationBundle.fadeInTime 0.05
animationBundle.fadeOutTime 0.5
animationBundle.addAnimation Objects/Weapons/Handheld/m1garand/Animations/3p/3p_m1garand_standFire.baf

animationSystem.createBundle stand_fire_default
animationBundle.isLooping 0
animationBundle.abruptPlayback 1
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/m1garand/Animations/3p/3p_m1garand_standFire.baf

animationSystem.createBundle stand_fire_zoom
animationBundle.isLooping 0
animationBundle.abruptPlayback 1
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/m1garand/animations/3p/3p_m1garand_zoomfire.baf

animationSystem.createBundle stand_reload
animationBundle.isLooping 0
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/bar18a2/Animations/3p/3p_bar18_reload.baf

animationSystem.createBundle stand_run
animationBundle.fadeInTime 0.4
animationBundle.fadeOutTime 0.25
animationBundle.addAnimation Objects/Weapons/HandHeld/m1garand/Animations/3p/3p_m1garand_strafeLeft.baf
animationBundle.addAnimation Objects/Weapons/HandHeld/m1garand/Animations/3p/3p_m1garand_strafeRight.baf
animationBundle.addAnimation Objects/Weapons/HandHeld/m1garand/Animations/3p/3p_m1garand_runBackward.baf
animationBundle.addAnimation Objects/Weapons/HandHeld/m1garand/Animations/3p/3p_m1garand_runForward.baf

animationSystem.createBundle stand_sprint
animationBundle.fadeInTime 0.35
animationBundle.fadeOutTime 0.25
animationBundle.addAnimation Objects/Weapons/Handheld/g41w/Animations/3p/3p_g41w_sprint.baf

animationSystem.createBundle stand_still
animationBundle.addAnimation Objects/Weapons/HandHeld/m1garand/Animations/3p/3p_m1garand_stand.baf

animationSystem.createBundle stand_walk
animationBundle.fadeInTime 0.4
animationBundle.fadeOutTime 0.2
animationBundle.addAnimation Objects/Weapons/Handheld/m1garand/Animations/3p/3p_m1garand_walkLeft.baf
animationBundle.addAnimation Objects/Weapons/Handheld/m1garand/Animations/3p/3p_m1garand_walkRight.baf
animationBundle.addAnimation Objects/Weapons/Handheld/m1garand/Animations/3p/3p_m1garand_walkBackward.baf
animationBundle.addAnimation Objects/Weapons/Handheld/m1garand/Animations/3p/3p_m1garand_walkForward.baf

animationSystem.createBundle stand_zoom
animationBundle.fadeInTime 0.3
animationBundle.fadeOutTime 0.3
animationBundle.addAnimation Objects/Weapons/HandHeld/m1garand/Animations/3p/3p_m1garand_zoom.baf

animationSystem.createBundle standDeploy
animationBundle.isLooping 0
animationBundle.fadeInTime 0.1
animationBundle.addAnimation Objects/Weapons/HandHeld/m1garand/Animations/3p/3p_m1garand_standDeploy.baf

animationSystem.createBundle stillToProne
animationBundle.isLooping 0
animationBundle.fadeInTime 0
animationBundle.fadeOutTime 0.3
animationBundle.addAnimation Objects/Weapons/HandHeld/m1garand/Animations/3p/3p_m1garand_standToProne.baf


rem *** Triggers ***
animationSystem.createTrigger MovementTrigger stand_still
animationTrigger.addBundle stand_still
animationTrigger.valueHolder 3p_still

animationSystem.createTrigger MovementTrigger stand_walk
animationTrigger.addBundle stand_walk
animationTrigger.valueHolder 3p_stand_walk

animationSystem.createTrigger MovementTrigger stand_run
animationTrigger.addBundle stand_run
animationTrigger.valueHolder 3p_stand_run

animationSystem.createTrigger MessageTrigger stand_zoom
animationTrigger.addBundle stand_zoom
animationTrigger.message 4

animationSystem.createTrigger ForwardTrigger stand_sprint
animationTrigger.addBundle stand_sprint
animationTrigger.valueHolder 3p_sprint

animationSystem.createTrigger MessageTrigger stand_reload
animationTrigger.addBundle stand_reload
animationTrigger.message 2

animationSystem.createTrigger MessageTrigger stand_fire_zoom
animationTrigger.addBundle stand_fire_zoom
animationTrigger.message 1

animationSystem.createTrigger MessageTrigger stand_fire_default
animationTrigger.addBundle stand_fire_default
animationTrigger.message 1

animationSystem.createTrigger SwitchMessageTrigger stand_fire
animationTrigger.addChild stand_fire_zoom
animationTrigger.addChild stand_fire_default
animationTrigger.message 4

animationSystem.createTrigger Trigger stand
animationTrigger.fadeInTime 0.3
animationTrigger.addChild stand_still
animationTrigger.addChild stand_walk
animationTrigger.addChild stand_run
animationTrigger.addChild stand_zoom
animationTrigger.addChild stand_sprint
animationTrigger.addChild stand_reload
animationTrigger.addChild stand_fire

animationSystem.createTrigger MovementTrigger crouch_still
animationTrigger.addBundle stand_still
animationTrigger.valueHolder 3p_still

animationSystem.createTrigger MovementTrigger crouch_move
animationTrigger.addBundle crouch_move
animationTrigger.valueHolder 3p_crouch_move

animationSystem.createTrigger MessageTrigger crouch_zoom
animationTrigger.addBundle stand_zoom
animationTrigger.message 4

animationSystem.createTrigger SwitchMessageTrigger crouch_fire
animationTrigger.addChild stand_fire_zoom
animationTrigger.addChild stand_fire_default
animationTrigger.message 4

animationSystem.createTrigger MessageTrigger crouch_reload
animationTrigger.addBundle stand_reload
animationTrigger.message 2

animationSystem.createTrigger Trigger crouch
animationTrigger.fadeInTime 0.3
animationTrigger.addChild crouch_still
animationTrigger.addChild crouch_move
animationTrigger.addChild crouch_zoom
animationTrigger.addChild crouch_fire
animationTrigger.addChild crouch_reload

animationSystem.createTrigger TurnTrigger prone_turnLeft
animationTrigger.addBundle prone_turnLeft
animationTrigger.valueHolder 3p_prone_turnLeft

animationSystem.createTrigger TurnTrigger prone_turnRight
animationTrigger.addBundle prone_turnRight
animationTrigger.valueHolder 3p_prone_turnRight

animationSystem.createTrigger TurnTrigger prone_turn
animationTrigger.addChild prone_turnLeft
animationTrigger.addChild prone_turnRight

animationSystem.createTrigger MovementTrigger prone_still
animationTrigger.addChild prone_turn
animationTrigger.addBundle prone_still
animationTrigger.valueHolder 3p_still

animationSystem.createTrigger MovementTrigger prone_move
animationTrigger.addBundle prone_move
animationTrigger.valueHolder 3p_prone_move

animationSystem.createTrigger MessageTrigger prone_fire
animationTrigger.addBundle prone_fire
animationTrigger.message 1

animationSystem.createTrigger MessageTrigger prone_reload
animationTrigger.addBundle prone_reload
animationTrigger.message 2

animationSystem.createTrigger Trigger prone
animationTrigger.fadeInTime 0.3
animationTrigger.addChild prone_still
animationTrigger.addChild prone_move
animationTrigger.addChild prone_fire
animationTrigger.addChild prone_reload

animationSystem.createTrigger PoseTrigger root
animationTrigger.addChild stand
animationTrigger.addChild crouch
animationTrigger.addChild prone

animationSystem.createTrigger Trigger fromProne
animationTrigger.addBundle proneToStill

animationSystem.createTrigger Trigger stillToProne
animationTrigger.addBundle stillToProne

animationSystem.createTrigger Trigger forwardToProne
animationTrigger.addBundle forwardToProne

animationSystem.createTrigger Trigger backwardToProne
animationTrigger.addBundle backwardToProne

animationSystem.createTrigger Trigger leftToProne
animationTrigger.addBundle forwardToProne

animationSystem.createTrigger Trigger rightToProne
animationTrigger.addBundle forwardToProne

animationSystem.createTrigger Trigger specialMoves
animationTrigger.addChild fromProne
animationTrigger.addChild stillToProne
animationTrigger.addChild forwardToProne
animationTrigger.addChild backwardToProne
animationTrigger.addChild leftToProne
animationTrigger.addChild rightToProne

animationSystem.createTrigger Trigger hit
animationTrigger.addBundle hit

animationSystem.createTrigger Trigger standDeploy
animationTrigger.addBundle standDeploy

animationSystem.createTrigger Trigger crouchDeploy
animationTrigger.addBundle standDeploy

animationSystem.createTrigger Trigger proneDeploy
animationTrigger.addBundle proneDeploy

animationSystem.createTrigger PoseTrigger startup
animationTrigger.addChild standDeploy
animationTrigger.addChild crouchDeploy
animationTrigger.addChild proneDeploy

animationSystem.createTrigger Trigger completeTree
animationTrigger.addChild root
animationTrigger.addChild specialMoves
animationTrigger.addChild hit
animationTrigger.addChild startup

