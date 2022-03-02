#include <ultra64.h>

extern char* gTitleString;

extern s8 configFullscreen;
extern unsigned int configDefaultMonitor;
extern unsigned int configWindowWidth;
extern unsigned int configWindowHeight;
extern s8 configCustomFullscreenResolution;
extern unsigned int configFullscreenWidth;
extern unsigned int configFullscreenHeight;
#if defined(_WIN32) || defined(_WIN64)
extern s8 configCustomInternalResolution;
extern unsigned int configInternalResolutionWidth;
extern unsigned int configInternalResolutionHeight;
#endif
extern unsigned int configGraphicsBackend;

extern float configOverallVolume;
extern float configSeqVolume[];

extern unsigned int configFrameRate;
extern s8 configDisableDrawDistance;
extern float configDrawDistanceMultiplier;
extern unsigned int configLevelOfDetail;
extern unsigned int configTextureFiltering;
extern unsigned int configNoiseType;
extern s8 configForce4by3;

extern s8 configImprovedControls;
extern s8 configImprovedSwimming;
extern s8 configImprovedHanging;
extern s8 configEnemyBouncing;
extern s8 configDpadControls;
extern s8 configFullAirControl;

extern s8 configFixVariousBugs;
extern s8 configFixCollisionBugs;
extern s8 configSaveLives;
extern s8 configRespawnCertainItems;
extern s8 configRemoveAnnoyingWarps;
extern s8 configBetterPowerups;
extern s8 configBetterEnemies;
extern s8 configBetterBlastAwayTheWall;
extern s8 configTalkNPCs;
extern s8 configDisableFallDamage;
extern s8 configLeaveAnyTime;
extern s8 configVisibleSecrets;
extern s8 configFixExploits;

extern s8 configBowsersSub;
extern unsigned int configStayInCourse;
extern s8 configSkipMissionSelect;
extern s8 configSwitchToNextMission;
extern s8 configSkipCutscenes;

extern s8 configCenterCameraButton;
extern s8 gImprovedCamera;
extern s8 gVerticalCamera;
extern s8 gInvertedCamera;
extern s8 gInvertedVerticalCamera;
extern float gCameraSpeed;
extern float gAdditionalCameraDistance;
extern float gAdditionalFOV;

extern unsigned int configCustomCameraMode;
extern s8 configCustomCameraPan;
extern s8 configCustomCameraTilt;
extern s8 configCustomCameraRotation;
extern s8 configCustomCameraCollisions;
extern float configCustomCameraDistanceDefault;
extern float configCustomCameraDistanceZoomedOut;

extern s8 configQuitOption;
extern unsigned int configHudLayout;
extern s8 config4by3Hud;
extern s8 gHudStars;
extern s8 configAddZeroes;
extern s8 gShow100CoinStar;
extern s8 gAlwaysShowHealth;
extern s8 gHUDFiltering;
extern s8 gHideHud;

extern s8 gMouseCam;
extern float gMouseSensitivity;
extern unsigned int configMouseLeft;
extern unsigned int configMouseRight;
extern unsigned int configMouseMiddle;
extern unsigned int configMouseWheelUp;
extern unsigned int configMouseWheelDown;

extern s8 gWallSliding;
extern s8 gGroundPoundJump;
extern s8 gSunshineDive;
extern s8 gOdysseyDive;
extern s8 configRolling;
extern s8 gFlashbackPound;

extern s8 configUnusedPyramidCutscene;
extern s8 configRestoreUnusedSounds;
extern s8 gPenguinSadEyes;
extern s8 gTwirlTripleJump;
extern s8 configBetaLikeCamera;
extern s8 gSpawnSparkles;
extern s8 gReplaceKeysWithStars;

extern unsigned int gLifeMode;
extern unsigned int gEncoreMode;
extern unsigned int gGreenDemon;
extern s8 gNoHealingMode;
extern s8 gHardSave;
extern s8 gDaredevilSave;
extern s8 gHardcoreSave;
extern s8 gCasualMode;

extern s8 gDebugMovementMode;
extern s8 gDebugCapChanger;
extern unsigned int configMoonJump;
extern unsigned int configBLJEverywhere;
extern s8 configGodMode;
extern s8 configHyperspeedMode;
extern s8 gFlexibleCannons;
extern unsigned int configCoinStarCoins;

extern s8 gPaperMode;
extern s8 gFXMode;
#if defined(_WIN32) || defined(_WIN64)
extern s8 gWireframeMode;
#endif
extern s8 gDisableLighting;

extern unsigned int configColorPalette;

extern unsigned int configColorCap[2][3];
extern unsigned int configColorShirt[2][3];
extern unsigned int configColorOveralls[2][3];
extern unsigned int configColorGloves[2][3];
extern unsigned int configColorShoes[2][3];
extern unsigned int configColorSkin[2][3];
extern unsigned int configColorHair[2][3];

extern s8 configShowCapLogo;

extern unsigned int configFullscreenRefreshRate;

extern unsigned int configButtonA;
extern unsigned int configButtonB;
extern unsigned int configButtonX;
extern unsigned int configButtonY;
extern unsigned int configButtonStart;
extern unsigned int configButtonSelect;
extern unsigned int configButtonL;
extern unsigned int configButtonR;
extern unsigned int configButtonZL;
extern unsigned int configButtonZR;
extern unsigned int configButtonThumbLeft;
extern unsigned int configButtonThumbRight;
extern unsigned int gControllerLeftDeadzone;
extern unsigned int gControllerRightDeadzone;
extern float configRumbleStrength;

extern unsigned int configKeyA;
extern unsigned int configKeyB;
extern unsigned int configKeyStart;
extern unsigned int configKeyL;
extern unsigned int configKeyR;
extern unsigned int configKeyZ;
extern unsigned int configKeyCUp;
extern unsigned int configKeyCDown;
extern unsigned int configKeyCLeft;
extern unsigned int configKeyCRight;
extern unsigned int configKeyStickUp;
extern unsigned int configKeyStickDown;
extern unsigned int configKeyStickLeft;
extern unsigned int configKeyStickRight;
extern unsigned int configKeyWalk;

extern s16 gCollectedStar;
extern s8 stay_in_level();
extern s8 restart_level_after_star();