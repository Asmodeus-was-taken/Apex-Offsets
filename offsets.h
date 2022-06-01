//lastes apex offsets
// discord.gg/pasted

namespace offsets
{
	uintptr_t client_render_targets = 0x1fdefa0;
	uintptr_t ibase_client_dll = 0x19e1830;
	uintptr_t iclient_entity_list = 0x1fde7b0;
	uintptr_t cprediction = 0x1fde7b8;
	uintptr_t iv_model_render = 0x128b080;
	uintptr_t vgui_system = 0x1f986e0;
	uintptr_t iv_render_view = 0x7519818;
	uintptr_t iv_debug_overlay = 0x75b49a0;
	uintptr_t iv_model_info_client = 0x7519828;
	uintptr_t iv_engine_client = 0x12799d8;
	uintptr_t iv_engine_trace = 0x7519830;
	uintptr_t inetwork_string_table = 0x7519840;
	uintptr_t cnetwork_u64_table = 0x7519848;
	uintptr_t cinput = 0x1d94f60;
	uintptr_t cengine = 0x1292410;
	uintptr_t iswapchain = 0xb911f98;
	uintptr_t cl_entitylist = 0x19fbcd8;
	uintptr_t local_entity_handle = 0x127d8bc;
	uintptr_t local_player = 0x1daca88;
	uintptr_t global_vars = 0x135c850;
	uintptr_t name_list = 0xb9f7f40;
	uintptr_t view_render = 0x1fe00b0;
	uintptr_t view_matrix = 0x602581;
	uintptr_t client_state = 0x135cbd0;
	uintptr_t sign_on_state = 0x135cc68;
	uintptr_t level_name = 0x135cd80;
	uintptr_t glow_enable = 0x3c8;
	uintptr_t glow_type = 0x2c0;
	uintptr_t glow_color = 0x1d0;
};


namespace classes
{
  namespace CVFogVolume
		{
			constexpr auto m_absorption = 0xa9c; // Vector
			constexpr auto m_scattering = 0xaa8; // Vector
			constexpr auto m_emission = 0xab4; // Vector
			constexpr auto m_phaseG = 0xac0; // Float
			constexpr auto m_edgeFade = 0xac4; // Float
			constexpr auto m_shapeType = 0xac8; // Integer
			constexpr auto m_sunIntensity = 0xacc; // Float
			constexpr auto m_ambientIntensity = 0xad0; // Float
			constexpr auto m_ambientProbeOffset = 0xad4; // Vector
			constexpr auto m_zNearFadeStart = 0xae0; // Float
			constexpr auto m_zNearFadeEnd = 0xae4; // Float
			constexpr auto m_zFarFadeStart = 0xae8; // Float
			constexpr auto m_zFarFadeEnd = 0xaec; // Float
			constexpr auto m_noiseVelocity_space = 0xaf0; // Vector
			constexpr auto m_noiseVelocity_time = 0xafc; // Float
			constexpr auto m_noiseScale = 0xb00; // Vector
			constexpr auto m_noiseAmplitude = 0xb0c; // Float
			constexpr auto m_noiseCenter = 0xb10; // Float
			constexpr auto m_enabled = 0xb14; // Integer
		}
    namespace CPointCamera
		{
			constexpr auto m_FOV = 0xac0; // Float
			constexpr auto m_bFogEnable = 0xae8; // Integer
			constexpr auto m_bActive = 0xae9; // Integer
		}

		namespace CPlayer
		{
			constexpr auto m_passives = 0x0; // Array
			constexpr auto m_vecAbsOrigin = 0x4; // Vector
			constexpr auto m_fFlags = 0x98; // Integer
			constexpr auto m_hGroundEntity = 0x434; // Integer
			constexpr auto m_iHealth = 0x438; // Integer
			constexpr auto m_flMaxspeed = 0x43c; // Float
			constexpr auto m_iMaxHealth = 0x578; // Integer
			constexpr auto m_lifeState = 0x798; // Integer
			constexpr auto m_decalIndex = 0xeb8; // Integer
			constexpr auto m_titanSoul = 0x1b48; // Integer
			constexpr auto m_bZooming = 0x1c51; // Integer
			constexpr auto m_zoomBaseFrac = 0x1c58; // Float
			constexpr auto m_flHullHeight = 0x210c; // Float
			constexpr auto m_angEyeAnglesx = 0x2110; // Float
			constexpr auto m_angEyeAnglesy = 0x2114; // Float
			constexpr auto m_traversalAnimProgress = 0x211c; // Float
			constexpr auto m_sprintTiltFrac = 0x2120; // Float
			constexpr auto m_ammoPoolCapacity = 0x259c; // Integer
			constexpr auto m_hasBadReputation = 0x25a0; // Integer
			constexpr auto m_hardware = 0x25a8; // Integer
			constexpr auto m_unspoofedHardware = 0x25a9; // Integer
			constexpr auto m_platformUserId = 0x25b0; // Integer64
			constexpr auto m_unSpoofedPlatformUserId = 0x25b8; // Integer64
			constexpr auto m_EadpUserId = 0x25c0; // Integer64
			constexpr auto m_crossPlayChat = 0x25c8; // Integer
			constexpr auto m_crossPlayChatFriends = 0x25c9; // Integer
			constexpr auto m_classModsActive = 0x25d0; // Integer64
			constexpr auto m_passives0 = 0x2708; // Integer64
			constexpr auto m_bleedoutState = 0x2728; // Integer
			constexpr auto m_bleedoutStartTime = 0x272c; // Float
			constexpr auto m_damageComboStartHealth = 0x28d8; // Integer
			constexpr auto m_gestureAutoKillBitfield = 0x299c; // Integer
			constexpr auto m_autoSprintForced = 0x29e0; // Integer
			constexpr auto m_fIsSprinting = 0x29e4; // Integer
			constexpr auto m_playerSettingForStickySprintForward = 0x29f2; // Integer
			constexpr auto m_playerVehicleCount = 0x2a28; // Integer
			constexpr auto m_playerVehicleDriven = 0x2a2c; // Integer
			constexpr auto m_duckState = 0x2a34; // Integer
			constexpr auto m_leanState = 0x2a38; // Integer
			constexpr auto m_canStand = 0x2a3d; // Integer
			constexpr auto m_StandHullMin = 0x2a40; // Vector
			constexpr auto m_StandHullMax = 0x2a4c; // Vector
			constexpr auto m_DuckHullMin = 0x2a58; // Vector
			constexpr auto m_DuckHullMax = 0x2a64; // Vector
			constexpr auto m_entitySyncingWithMe = 0x2a70; // Integer
			constexpr auto m_upDir = 0x2a74; // Vector
			constexpr auto m_traversalState = 0x2afc; // Integer
			constexpr auto m_traversalType = 0x2b00; // Integer
			constexpr auto m_traversalForwardDir = 0x2b2c; // Vector
			constexpr auto m_traversalRefPos = 0x2b38; // Vector
			constexpr auto m_traversalYawDelta = 0x2b64; // Float
			constexpr auto m_traversalYawPoseParameter = 0x2b68; // Integer
			constexpr auto m_wallClimbSetUp = 0x2b80; // Integer
			constexpr auto m_wallHanging = 0x2b81; // Integer
			constexpr auto m_grapplePoints = 0x2c70; // Array
			constexpr auto m_grappleVel = 0x2c78; // Vector
			constexpr auto m_grapplePoints0 = 0x2c84; // Vector
			constexpr auto m_grapplePointCount = 0x2cb4; // Integer
			constexpr auto m_grappleAttached = 0x2cb8; // Integer
			constexpr auto m_grapplePulling = 0x2cb9; // Integer
			constexpr auto m_grappleSwinging = 0x2cba; // Integer
			constexpr auto m_grappleRetracting = 0x2cbb; // Integer
			constexpr auto m_grappleForcedRetracting = 0x2cbc; // Integer
			constexpr auto m_grappleGracePeriodFinished = 0x2cbd; // Integer
			constexpr auto m_grappleUsedPower = 0x2cc0; // Float
			constexpr auto m_grappleMeleeTarget = 0x2cd4; // Integer
			constexpr auto m_grappleAutoAimTarget = 0x2cd8; // Integer
			constexpr auto m_grappleHasGoodVelocity = 0x2cdc; // Integer
			constexpr auto m_grappleSwingDetachLowSpeed = 0x2ce4; // Float
			constexpr auto m_grappleActive = 0x2d00; // Integer
			constexpr auto m_turret = 0x2d48; // Integer
			constexpr auto m_activeZipline = 0x2eac; // Integer
			constexpr auto m_ziplineValid3pWeaponLayerAnim = 0x2eb8; // Integer
			constexpr auto m_ziplineState = 0x2ebc; // Integer
			constexpr auto m_ziplineGrenadeBeginStationEntity = 0x2f54; // Integer
			constexpr auto m_ziplineGrenadeBeginStationAttachmentIndex = 0x2f58; // Integer
			constexpr auto m_isPerformingBoostAction = 0x2f99; // Integer
			constexpr auto m_lastJumpPadTouched = 0x3090; // Integer
			constexpr auto m_launchCount = 0x3098; // Integer
			constexpr auto m_useCredit = 0x3200; // Integer
			constexpr auto m_playerFlags = 0x3210; // Integer
			constexpr auto m_hasMic = 0x3218; // Integer
			constexpr auto m_inPartyChat = 0x3219; // Integer
			constexpr auto m_communicationsAutoBlocked = 0x321a; // Integer
			constexpr auto m_playerMoveSpeedScale = 0x321c; // Float
			constexpr auto m_bShouldDrawPlayerWhileUsingViewEntity = 0x3458; // Integer
			constexpr auto m_iSpawnParity = 0x34c4; // Integer
			constexpr auto m_grappleHook = 0x3668; // Integer
			constexpr auto m_petTitan = 0x366c; // Integer
			constexpr auto m_xp = 0x3694; // Integer
			constexpr auto m_skill_mu = 0x369c; // Float
			constexpr auto m_bHasMatchAdminRole = 0x36a0; // Integer
			constexpr auto m_ubEFNoInterpParity = 0x3fc8; // Integer
			constexpr auto m_hColorCorrectionCtrl = 0x3fcc; // Integer
			constexpr auto m_title = 0x3ff0; // String
			constexpr auto m_nPlayerCond = 0x4328; // Integer
			constexpr auto m_pilotClassIndex = 0x4374; // Integer
			constexpr auto m_pilotClassActivityModifier = 0x4378; // Integer
			constexpr auto m_playerScriptNetDataGlobal = 0x4600; // Integer
			constexpr auto m_helmetType = 0x4608; // Integer
			constexpr auto m_armorType = 0x460c; // Integer
			constexpr auto m_controllerModeActive = 0x4614; // Integer
			constexpr auto m_skydiveForwardPoseValueTarget = 0x4630; // Float
			constexpr auto m_skydiveSidePoseValueTarget = 0x463c; // Float
			constexpr auto m_skydiveState = 0x4664; // Integer
			constexpr auto m_skydiveDiveAngle = 0x467c; // Float
			constexpr auto m_skydiveIsDiving = 0x4680; // Integer
			constexpr auto m_skydiveSpeed = 0x4684; // Float
			constexpr auto m_skydiveStrafeAngle = 0x4688; // Float
			constexpr auto m_skydivePlayerPitch = 0x469c; // Float
			constexpr auto m_skydivePlayerYaw = 0x46a0; // Float
			constexpr auto m_skydiveFromSkywardLaunch = 0x46dd; // Integer
			constexpr auto m_skywardLaunchState = 0x46e0; // Integer
			constexpr auto m_skywardLaunchSlowStartTime = 0x46f4; // Float
			constexpr auto m_skywardLaunchSlowEndTime = 0x46f8; // Float
			constexpr auto m_skywardLaunchFastEndTime = 0x46fc; // Float
			constexpr auto m_skywardLaunchEndTime = 0x4704; // Float
			constexpr auto m_skywardLaunchSlowSpeed = 0x470c; // Float
			constexpr auto m_skywardLaunchFastSpeed = 0x4710; // Float
			constexpr auto m_skywardOffset = 0x4714; // Vector
			constexpr auto m_skywardLaunchInterrupted = 0x4724; // Integer
			constexpr auto m_skywardLaunchFollowing = 0x4725; // Integer
			constexpr auto m_armoredLeapAirPos = 0x472c; // Vector
			constexpr auto m_armoredLeapEndPos = 0x4738; // Vector
			constexpr auto m_armoredLeapType = 0x4744; // Integer
			constexpr auto m_armoredLeapPhase = 0x4748; // Integer
			constexpr auto m_dragReviveState = 0x47b8; // Integer
			constexpr auto m_dragReviveOutroStartTime = 0x47bc; // Float
			constexpr auto m_reviveTarget = 0x47c0; // Integer
		}
    
    namespace CBaseEntity
		{
			constexpr auto m_parentAttachmentIndex = 0x24; // Integer
			constexpr auto m_fEffects = 0x44; // Integer
			constexpr auto m_usableType = 0x48; // Integer
			constexpr auto m_cellX = 0x4c; // Integer
			constexpr auto m_cellY = 0x50; // Integer
			constexpr auto m_clrRender = 0x50; // Integer
			constexpr auto m_clIntensity = 0x54; // Integer
			constexpr auto m_cellZ = 0x54; // Integer
			constexpr auto m_localOrigin = 0x58; // Vector
			constexpr auto m_nModelIndex = 0x64; // Integer
			constexpr auto m_bossPlayer = 0x124; // Integer
			constexpr auto m_shieldHealth = 0x170; // Integer
			constexpr auto m_shieldHealthMax = 0x174; // Integer
			constexpr auto m_networkedFlags = 0x3ec; // Integer
			constexpr auto m_visibilityFlags = 0x440; // Integer
			constexpr auto m_iTeamNum = 0x448; // Integer
			constexpr auto m_teamMemberIndex = 0x450; // Integer
			constexpr auto m_squadID = 0x454; // Integer
			constexpr auto m_grade = 0x458; // Integer
			constexpr auto m_ignorePredictedTriggerFlags = 0x45c; // Integer
			constexpr auto m_passThroughFlags = 0x464; // Integer
			constexpr auto m_passThroughThickness = 0x468; // Integer
			constexpr auto m_passThroughDirection = 0x46c; // Float
			constexpr auto m_bIsSoundCodeControllerValueSet = 0x47c; // Integer
			constexpr auto m_flSoundCodeControllerValue = 0x480; // Float
			constexpr auto m_localAngles = 0x490; // Vector
			constexpr auto m_hOwnerEntity = 0x4a4; // Integer
			constexpr auto m_bRenderWithViewModels = 0x4a8; // Integer
			constexpr auto m_nRenderFX = 0x4a9; // Integer
			constexpr auto m_nRenderMode = 0x4b9; // Integer
			constexpr auto m_vecMins = 0x4d0; // Vector
			constexpr auto m_vecMaxs = 0x4dc; // Vector
			constexpr auto m_usSolidFlags = 0x4e8; // Integer
			constexpr auto m_nSolidType = 0x4ec; // Integer
			constexpr auto m_triggerBloat = 0x4ed; // Integer
			constexpr auto m_collisionDetailLevel = 0x4ee; // Integer
			constexpr auto m_nSurroundType = 0x4fc; // Integer
			constexpr auto m_vecSpecifiedSurroundingMins = 0x508; // Vector
			constexpr auto m_vecSpecifiedSurroundingMaxs = 0x514; // Vector
			constexpr auto m_CollisionGroup = 0x540; // Integer
			constexpr auto m_contents = 0x544; // Integer
			constexpr auto m_collideWithOwner = 0x548; // Integer
			constexpr auto m_iSignifierName = 0x580; // String
			constexpr auto m_iName = 0x589; // String
			constexpr auto m_scriptNameIndex = 0x690; // Integer
			constexpr auto m_instanceNameIndex = 0x694; // Integer
			constexpr auto m_holdUsePrompt = 0x718; // String
			constexpr auto m_pressUsePrompt = 0x720; // String
			constexpr auto m_phaseShiftFlags = 0x7b8; // Integer
			constexpr auto m_baseTakeDamage = 0x7bc; // Integer
			constexpr auto m_invulnerableToDamageCount = 0x7c0; // Integer
			constexpr auto m_attachmentLerpStartOrigin = 0x83c; // Vector
			constexpr auto m_attachmentLerpStartAngles = 0x848; // Vector
			constexpr auto m_parentAttachmentModel = 0x860; // Integer
			constexpr auto m_fadeDist = 0x86c; // Float
			constexpr auto m_dissolveEffectEntityHandle = 0x918; // Integer
			constexpr auto m_usablePriority = 0x928; // Integer
			constexpr auto m_usableDistanceOverride = 0x92c; // Float
			constexpr auto m_usableFOV = 0x930; // Float
			constexpr auto m_usePromptSize = 0x934; // Float
			constexpr auto m_firstChildEntityLink = 0xa40; // Integer
			constexpr auto m_firstParentEntityLink = 0xa44; // Integer
			constexpr auto m_realmsBitMask = 0xa48; // Integer64
		}
	

}
