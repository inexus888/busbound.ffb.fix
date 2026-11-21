#define NUM_EXPORTS 845
static const char* export_names[NUM_EXPORTS]={
"SDL_AddEventWatch",
"SDL_AddHintCallback",
"SDL_AddTimer",
"SDL_AllocFormat",
"SDL_AllocPalette",
"SDL_AllocRW",
"SDL_AtomicAdd",
"SDL_AtomicCAS",
"SDL_AtomicCASPtr",
"SDL_AtomicGet",
"SDL_AtomicGetPtr",
"SDL_AtomicLock",
"SDL_AtomicSet",
"SDL_AtomicSetPtr",
"SDL_AtomicTryLock",
"SDL_AtomicUnlock",
"SDL_AudioInit",
"SDL_AudioQuit",
"SDL_AudioStreamAvailable",
"SDL_AudioStreamClear",
"SDL_AudioStreamFlush",
"SDL_AudioStreamGet",
"SDL_AudioStreamPut",
"SDL_BuildAudioCVT",
"SDL_CalculateGammaRamp",
"SDL_CaptureMouse",
"SDL_ClearComposition",
"SDL_ClearError",
"SDL_ClearHints",
"SDL_ClearQueuedAudio",
"SDL_CloseAudio",
"SDL_CloseAudioDevice",
"SDL_ComposeCustomBlendMode",
"SDL_CondBroadcast",
"SDL_CondSignal",
"SDL_CondWait",
"SDL_CondWaitTimeout",
"SDL_ConvertAudio",
"SDL_ConvertPixels",
"SDL_ConvertSurface",
"SDL_ConvertSurfaceFormat",
"SDL_CreateColorCursor",
"SDL_CreateCond",
"SDL_CreateCursor",
"SDL_CreateMutex",
"SDL_CreateRGBSurface",
"SDL_CreateRGBSurfaceFrom",
"SDL_CreateRGBSurfaceWithFormat",
"SDL_CreateRGBSurfaceWithFormatFrom",
"SDL_CreateRenderer",
"SDL_CreateSemaphore",
"SDL_CreateShapedWindow",
"SDL_CreateSoftwareRenderer",
"SDL_CreateSystemCursor",
"SDL_CreateTexture",
"SDL_CreateTextureFromSurface",
"SDL_CreateThread",
"SDL_CreateThreadWithStackSize",
"SDL_CreateWindow",
"SDL_CreateWindowAndRenderer",
"SDL_CreateWindowFrom",
"SDL_DXGIGetOutputInfo",
"SDL_DYNAPI_entry",
"SDL_DelEventWatch",
"SDL_DelHintCallback",
"SDL_Delay",
"SDL_DequeueAudio",
"SDL_DestroyCond",
"SDL_DestroyMutex",
"SDL_DestroyRenderer",
"SDL_DestroySemaphore",
"SDL_DestroyTexture",
"SDL_DestroyWindow",
"SDL_DestroyWindowSurface",
"SDL_DetachThread",
"SDL_Direct3D9GetAdapterIndex",
"SDL_DisableScreenSaver",
"SDL_DuplicateSurface",
"SDL_EnableScreenSaver",
"SDL_EncloseFPoints",
"SDL_EnclosePoints",
"SDL_Error",
"SDL_EventState",
"SDL_FillRect",
"SDL_FillRects",
"SDL_FilterEvents",
"SDL_FlashWindow",
"SDL_FlushEvent",
"SDL_FlushEvents",
"SDL_FreeAudioStream",
"SDL_FreeCursor",
"SDL_FreeFormat",
"SDL_FreePalette",
"SDL_FreeRW",
"SDL_FreeSurface",
"SDL_FreeWAV",
"SDL_GL_BindTexture",
"SDL_GL_CreateContext",
"SDL_GL_DeleteContext",
"SDL_GL_ExtensionSupported",
"SDL_GL_GetAttribute",
"SDL_GL_GetCurrentContext",
"SDL_GL_GetCurrentWindow",
"SDL_GL_GetDrawableSize",
"SDL_GL_GetProcAddress",
"SDL_GL_GetSwapInterval",
"SDL_GL_LoadLibrary",
"SDL_GL_MakeCurrent",
"SDL_GL_ResetAttributes",
"SDL_GL_SetAttribute",
"SDL_GL_SetSwapInterval",
"SDL_GL_SwapWindow",
"SDL_GL_UnbindTexture",
"SDL_GL_UnloadLibrary",
"SDL_GUIDFromString",
"SDL_GUIDToString",
"SDL_GameControllerAddMapping",
"SDL_GameControllerAddMappingsFromRW",
"SDL_GameControllerClose",
"SDL_GameControllerEventState",
"SDL_GameControllerFromInstanceID",
"SDL_GameControllerFromPlayerIndex",
"SDL_GameControllerGetAppleSFSymbolsNameForAxis",
"SDL_GameControllerGetAppleSFSymbolsNameForButton",
"SDL_GameControllerGetAttached",
"SDL_GameControllerGetAxis",
"SDL_GameControllerGetAxisFromString",
"SDL_GameControllerGetBindForAxis",
"SDL_GameControllerGetBindForButton",
"SDL_GameControllerGetButton",
"SDL_GameControllerGetButtonFromString",
"SDL_GameControllerGetFirmwareVersion",
"SDL_GameControllerGetJoystick",
"SDL_GameControllerGetNumTouchpadFingers",
"SDL_GameControllerGetNumTouchpads",
"SDL_GameControllerGetPlayerIndex",
"SDL_GameControllerGetProduct",
"SDL_GameControllerGetProductVersion",
"SDL_GameControllerGetSensorData",
"SDL_GameControllerGetSensorDataRate",
"SDL_GameControllerGetSensorDataWithTimestamp",
"SDL_GameControllerGetSerial",
"SDL_GameControllerGetSteamHandle",
"SDL_GameControllerGetStringForAxis",
"SDL_GameControllerGetStringForButton",
"SDL_GameControllerGetTouchpadFinger",
"SDL_GameControllerGetType",
"SDL_GameControllerGetVendor",
"SDL_GameControllerHasAxis",
"SDL_GameControllerHasButton",
"SDL_GameControllerHasLED",
"SDL_GameControllerHasRumble",
"SDL_GameControllerHasRumbleTriggers",
"SDL_GameControllerHasSensor",
"SDL_GameControllerIsSensorEnabled",
"SDL_GameControllerMapping",
"SDL_GameControllerMappingForDeviceIndex",
"SDL_GameControllerMappingForGUID",
"SDL_GameControllerMappingForIndex",
"SDL_GameControllerName",
"SDL_GameControllerNameForIndex",
"SDL_GameControllerNumMappings",
"SDL_GameControllerOpen",
"SDL_GameControllerPath",
"SDL_GameControllerPathForIndex",
"SDL_GameControllerRumble",
"SDL_GameControllerRumbleTriggers",
"SDL_GameControllerSendEffect",
"SDL_GameControllerSetLED",
"SDL_GameControllerSetPlayerIndex",
"SDL_GameControllerSetSensorEnabled",
"SDL_GameControllerTypeForIndex",
"SDL_GameControllerUpdate",
"SDL_GetAssertionHandler",
"SDL_GetAssertionReport",
"SDL_GetAudioDeviceName",
"SDL_GetAudioDeviceSpec",
"SDL_GetAudioDeviceStatus",
"SDL_GetAudioDriver",
"SDL_GetAudioStatus",
"SDL_GetBasePath",
"SDL_GetCPUCacheLineSize",
"SDL_GetCPUCount",
"SDL_GetClipRect",
"SDL_GetClipboardText",
"SDL_GetClosestDisplayMode",
"SDL_GetColorKey",
"SDL_GetCurrentAudioDriver",
"SDL_GetCurrentDisplayMode",
"SDL_GetCurrentVideoDriver",
"SDL_GetCursor",
"SDL_GetDefaultAssertionHandler",
"SDL_GetDefaultAudioInfo",
"SDL_GetDefaultCursor",
"SDL_GetDesktopDisplayMode",
"SDL_GetDisplayBounds",
"SDL_GetDisplayDPI",
"SDL_GetDisplayMode",
"SDL_GetDisplayName",
"SDL_GetDisplayOrientation",
"SDL_GetDisplayUsableBounds",
"SDL_GetError",
"SDL_GetErrorMsg",
"SDL_GetEventFilter",
"SDL_GetGlobalMouseState",
"SDL_GetGrabbedWindow",
"SDL_GetHint",
"SDL_GetHintBoolean",
"SDL_GetJoystickGUIDInfo",
"SDL_GetKeyFromName",
"SDL_GetKeyFromScancode",
"SDL_GetKeyName",
"SDL_GetKeyboardFocus",
"SDL_GetKeyboardState",
"SDL_GetMemoryFunctions",
"SDL_GetModState",
"SDL_GetMouseFocus",
"SDL_GetMouseState",
"SDL_GetNumAllocations",
"SDL_GetNumAudioDevices",
"SDL_GetNumAudioDrivers",
"SDL_GetNumDisplayModes",
"SDL_GetNumRenderDrivers",
"SDL_GetNumTouchDevices",
"SDL_GetNumTouchFingers",
"SDL_GetNumVideoDisplays",
"SDL_GetNumVideoDrivers",
"SDL_GetOriginalMemoryFunctions",
"SDL_GetPerformanceCounter",
"SDL_GetPerformanceFrequency",
"SDL_GetPixelFormatName",
"SDL_GetPlatform",
"SDL_GetPointDisplayIndex",
"SDL_GetPowerInfo",
"SDL_GetPrefPath",
"SDL_GetPreferredLocales",
"SDL_GetPrimarySelectionText",
"SDL_GetQueuedAudioSize",
"SDL_GetRGB",
"SDL_GetRGBA",
"SDL_GetRectDisplayIndex",
"SDL_GetRelativeMouseMode",
"SDL_GetRelativeMouseState",
"SDL_GetRenderDrawBlendMode",
"SDL_GetRenderDrawColor",
"SDL_GetRenderDriverInfo",
"SDL_GetRenderTarget",
"SDL_GetRenderer",
"SDL_GetRendererInfo",
"SDL_GetRendererOutputSize",
"SDL_GetRevision",
"SDL_GetRevisionNumber",
"SDL_GetScancodeFromKey",
"SDL_GetScancodeFromName",
"SDL_GetScancodeName",
"SDL_GetShapedWindowMode",
"SDL_GetSurfaceAlphaMod",
"SDL_GetSurfaceBlendMode",
"SDL_GetSurfaceColorMod",
"SDL_GetSystemRAM",
"SDL_GetTextureAlphaMod",
"SDL_GetTextureBlendMode",
"SDL_GetTextureColorMod",
"SDL_GetTextureScaleMode",
"SDL_GetTextureUserData",
"SDL_GetThreadID",
"SDL_GetThreadName",
"SDL_GetTicks",
"SDL_GetTicks64",
"SDL_GetTouchDevice",
"SDL_GetTouchDeviceType",
"SDL_GetTouchFinger",
"SDL_GetTouchName",
"SDL_GetVersion",
"SDL_GetVideoDriver",
"SDL_GetWindowBordersSize",
"SDL_GetWindowBrightness",
"SDL_GetWindowData",
"SDL_GetWindowDisplayIndex",
"SDL_GetWindowDisplayMode",
"SDL_GetWindowFlags",
"SDL_GetWindowFromID",
"SDL_GetWindowGammaRamp",
"SDL_GetWindowGrab",
"SDL_GetWindowICCProfile",
"SDL_GetWindowID",
"SDL_GetWindowKeyboardGrab",
"SDL_GetWindowMaximumSize",
"SDL_GetWindowMinimumSize",
"SDL_GetWindowMouseGrab",
"SDL_GetWindowMouseRect",
"SDL_GetWindowOpacity",
"SDL_GetWindowPixelFormat",
"SDL_GetWindowPosition",
"SDL_GetWindowSize",
"SDL_GetWindowSizeInPixels",
"SDL_GetWindowSurface",
"SDL_GetWindowTitle",
"SDL_GetWindowWMInfo",
"SDL_GetYUVConversionMode",
"SDL_GetYUVConversionModeForResolution",
"SDL_HapticClose",
"SDL_HapticDestroyEffect",
"SDL_HapticEffectSupported",
"SDL_HapticGetEffectStatus",
"SDL_HapticIndex",
"SDL_HapticName",
"SDL_HapticNewEffect",
"SDL_HapticNumAxes",
"SDL_HapticNumEffects",
"SDL_HapticNumEffectsPlaying",
"SDL_HapticOpen",
"SDL_HapticOpenFromJoystick",
"SDL_HapticOpenFromMouse",
"SDL_HapticOpened",
"SDL_HapticPause",
"SDL_HapticQuery",
"SDL_HapticRumbleInit",
"SDL_HapticRumblePlay",
"SDL_HapticRumbleStop",
"SDL_HapticRumbleSupported",
"SDL_HapticRunEffect",
"SDL_HapticSetAutocenter",
"SDL_HapticSetGain",
"SDL_HapticStopAll",
"SDL_HapticStopEffect",
"SDL_HapticUnpause",
"SDL_HapticUpdateEffect",
"SDL_Has3DNow",
"SDL_HasARMSIMD",
"SDL_HasAVX",
"SDL_HasAVX2",
"SDL_HasAVX512F",
"SDL_HasAltiVec",
"SDL_HasClipboardText",
"SDL_HasColorKey",
"SDL_HasEvent",
"SDL_HasEvents",
"SDL_HasIntersection",
"SDL_HasIntersectionF",
"SDL_HasLASX",
"SDL_HasLSX",
"SDL_HasMMX",
"SDL_HasNEON",
"SDL_HasPrimarySelectionText",
"SDL_HasRDTSC",
"SDL_HasSSE",
"SDL_HasSSE2",
"SDL_HasSSE3",
"SDL_HasSSE41",
"SDL_HasSSE42",
"SDL_HasScreenKeyboardSupport",
"SDL_HasSurfaceRLE",
"SDL_HasWindowSurface",
"SDL_HideWindow",
"SDL_Init",
"SDL_InitSubSystem",
"SDL_IntersectFRect",
"SDL_IntersectFRectAndLine",
"SDL_IntersectRect",
"SDL_IntersectRectAndLine",
"SDL_IsGameController",
"SDL_IsScreenKeyboardShown",
"SDL_IsScreenSaverEnabled",
"SDL_IsShapedWindow",
"SDL_IsTablet",
"SDL_IsTextInputActive",
"SDL_IsTextInputShown",
"SDL_JoystickAttachVirtual",
"SDL_JoystickAttachVirtualEx",
"SDL_JoystickClose",
"SDL_JoystickCurrentPowerLevel",
"SDL_JoystickDetachVirtual",
"SDL_JoystickEventState",
"SDL_JoystickFromInstanceID",
"SDL_JoystickFromPlayerIndex",
"SDL_JoystickGetAttached",
"SDL_JoystickGetAxis",
"SDL_JoystickGetAxisInitialState",
"SDL_JoystickGetBall",
"SDL_JoystickGetButton",
"SDL_JoystickGetDeviceGUID",
"SDL_JoystickGetDeviceInstanceID",
"SDL_JoystickGetDevicePlayerIndex",
"SDL_JoystickGetDeviceProduct",
"SDL_JoystickGetDeviceProductVersion",
"SDL_JoystickGetDeviceType",
"SDL_JoystickGetDeviceVendor",
"SDL_JoystickGetFirmwareVersion",
"SDL_JoystickGetGUID",
"SDL_JoystickGetGUIDFromString",
"SDL_JoystickGetGUIDString",
"SDL_JoystickGetHat",
"SDL_JoystickGetPlayerIndex",
"SDL_JoystickGetProduct",
"SDL_JoystickGetProductVersion",
"SDL_JoystickGetSerial",
"SDL_JoystickGetType",
"SDL_JoystickGetVendor",
"SDL_JoystickHasLED",
"SDL_JoystickHasRumble",
"SDL_JoystickHasRumbleTriggers",
"SDL_JoystickInstanceID",
"SDL_JoystickIsHaptic",
"SDL_JoystickIsVirtual",
"SDL_JoystickName",
"SDL_JoystickNameForIndex",
"SDL_JoystickNumAxes",
"SDL_JoystickNumBalls",
"SDL_JoystickNumButtons",
"SDL_JoystickNumHats",
"SDL_JoystickOpen",
"SDL_JoystickPath",
"SDL_JoystickPathForIndex",
"SDL_JoystickRumble",
"SDL_JoystickRumbleTriggers",
"SDL_JoystickSendEffect",
"SDL_JoystickSetLED",
"SDL_JoystickSetPlayerIndex",
"SDL_JoystickSetVirtualAxis",
"SDL_JoystickSetVirtualButton",
"SDL_JoystickSetVirtualHat",
"SDL_JoystickUpdate",
"SDL_LoadBMP_RW",
"SDL_LoadDollarTemplates",
"SDL_LoadFile",
"SDL_LoadFile_RW",
"SDL_LoadFunction",
"SDL_LoadObject",
"SDL_LoadWAV_RW",
"SDL_LockAudio",
"SDL_LockAudioDevice",
"SDL_LockJoysticks",
"SDL_LockMutex",
"SDL_LockSensors",
"SDL_LockSurface",
"SDL_LockTexture",
"SDL_LockTextureToSurface",
"SDL_Log",
"SDL_LogCritical",
"SDL_LogDebug",
"SDL_LogError",
"SDL_LogGetOutputFunction",
"SDL_LogGetPriority",
"SDL_LogInfo",
"SDL_LogMessage",
"SDL_LogMessageV",
"SDL_LogResetPriorities",
"SDL_LogSetAllPriority",
"SDL_LogSetOutputFunction",
"SDL_LogSetPriority",
"SDL_LogVerbose",
"SDL_LogWarn",
"SDL_LowerBlit",
"SDL_LowerBlitScaled",
"SDL_MapRGB",
"SDL_MapRGBA",
"SDL_MasksToPixelFormatEnum",
"SDL_MaximizeWindow",
"SDL_MemoryBarrierAcquireFunction",
"SDL_MemoryBarrierReleaseFunction",
"SDL_Metal_CreateView",
"SDL_Metal_DestroyView",
"SDL_Metal_GetDrawableSize",
"SDL_Metal_GetLayer",
"SDL_MinimizeWindow",
"SDL_MixAudio",
"SDL_MixAudioFormat",
"SDL_MouseIsHaptic",
"SDL_NewAudioStream",
"SDL_NumHaptics",
"SDL_NumJoysticks",
"SDL_NumSensors",
"SDL_OnApplicationDidBecomeActive",
"SDL_OnApplicationDidEnterBackground",
"SDL_OnApplicationDidReceiveMemoryWarning",
"SDL_OnApplicationWillEnterForeground",
"SDL_OnApplicationWillResignActive",
"SDL_OnApplicationWillTerminate",
"SDL_OpenAudio",
"SDL_OpenAudioDevice",
"SDL_OpenURL",
"SDL_PauseAudio",
"SDL_PauseAudioDevice",
"SDL_PeepEvents",
"SDL_PixelFormatEnumToMasks",
"SDL_PollEvent",
"SDL_PremultiplyAlpha",
"SDL_PumpEvents",
"SDL_PushEvent",
"SDL_QueryTexture",
"SDL_QueueAudio",
"SDL_Quit",
"SDL_QuitSubSystem",
"SDL_RWFromConstMem",
"SDL_RWFromFP",
"SDL_RWFromFile",
"SDL_RWFromMem",
"SDL_RWclose",
"SDL_RWread",
"SDL_RWseek",
"SDL_RWsize",
"SDL_RWtell",
"SDL_RWwrite",
"SDL_RaiseWindow",
"SDL_ReadBE16",
"SDL_ReadBE32",
"SDL_ReadBE64",
"SDL_ReadLE16",
"SDL_ReadLE32",
"SDL_ReadLE64",
"SDL_ReadU8",
"SDL_RecordGesture",
"SDL_RegisterApp",
"SDL_RegisterEvents",
"SDL_RemoveTimer",
"SDL_RenderClear",
"SDL_RenderCopy",
"SDL_RenderCopyEx",
"SDL_RenderCopyExF",
"SDL_RenderCopyF",
"SDL_RenderDrawLine",
"SDL_RenderDrawLineF",
"SDL_RenderDrawLines",
"SDL_RenderDrawLinesF",
"SDL_RenderDrawPoint",
"SDL_RenderDrawPointF",
"SDL_RenderDrawPoints",
"SDL_RenderDrawPointsF",
"SDL_RenderDrawRect",
"SDL_RenderDrawRectF",
"SDL_RenderDrawRects",
"SDL_RenderDrawRectsF",
"SDL_RenderFillRect",
"SDL_RenderFillRectF",
"SDL_RenderFillRects",
"SDL_RenderFillRectsF",
"SDL_RenderFlush",
"SDL_RenderGeometry",
"SDL_RenderGeometryRaw",
"SDL_RenderGetClipRect",
"SDL_RenderGetD3D11Device",
"SDL_RenderGetD3D12Device",
"SDL_RenderGetD3D9Device",
"SDL_RenderGetIntegerScale",
"SDL_RenderGetLogicalSize",
"SDL_RenderGetMetalCommandEncoder",
"SDL_RenderGetMetalLayer",
"SDL_RenderGetScale",
"SDL_RenderGetViewport",
"SDL_RenderGetWindow",
"SDL_RenderIsClipEnabled",
"SDL_RenderLogicalToWindow",
"SDL_RenderPresent",
"SDL_RenderReadPixels",
"SDL_RenderSetClipRect",
"SDL_RenderSetIntegerScale",
"SDL_RenderSetLogicalSize",
"SDL_RenderSetScale",
"SDL_RenderSetVSync",
"SDL_RenderSetViewport",
"SDL_RenderTargetSupported",
"SDL_RenderWindowToLogical",
"SDL_ReportAssertion",
"SDL_ResetAssertionReport",
"SDL_ResetHint",
"SDL_ResetHints",
"SDL_ResetKeyboard",
"SDL_RestoreWindow",
"SDL_SIMDAlloc",
"SDL_SIMDFree",
"SDL_SIMDGetAlignment",
"SDL_SIMDRealloc",
"SDL_SaveAllDollarTemplates",
"SDL_SaveBMP_RW",
"SDL_SaveDollarTemplate",
"SDL_SemPost",
"SDL_SemTryWait",
"SDL_SemValue",
"SDL_SemWait",
"SDL_SemWaitTimeout",
"SDL_SensorClose",
"SDL_SensorFromInstanceID",
"SDL_SensorGetData",
"SDL_SensorGetDataWithTimestamp",
"SDL_SensorGetDeviceInstanceID",
"SDL_SensorGetDeviceName",
"SDL_SensorGetDeviceNonPortableType",
"SDL_SensorGetDeviceType",
"SDL_SensorGetInstanceID",
"SDL_SensorGetName",
"SDL_SensorGetNonPortableType",
"SDL_SensorGetType",
"SDL_SensorOpen",
"SDL_SensorUpdate",
"SDL_SetAssertionHandler",
"SDL_SetClipRect",
"SDL_SetClipboardText",
"SDL_SetColorKey",
"SDL_SetCursor",
"SDL_SetError",
"SDL_SetEventFilter",
"SDL_SetHint",
"SDL_SetHintWithPriority",
"SDL_SetMainReady",
"SDL_SetMemoryFunctions",
"SDL_SetModState",
"SDL_SetPaletteColors",
"SDL_SetPixelFormatPalette",
"SDL_SetPrimarySelectionText",
"SDL_SetRelativeMouseMode",
"SDL_SetRenderDrawBlendMode",
"SDL_SetRenderDrawColor",
"SDL_SetRenderTarget",
"SDL_SetSurfaceAlphaMod",
"SDL_SetSurfaceBlendMode",
"SDL_SetSurfaceColorMod",
"SDL_SetSurfacePalette",
"SDL_SetSurfaceRLE",
"SDL_SetTextInputRect",
"SDL_SetTextureAlphaMod",
"SDL_SetTextureBlendMode",
"SDL_SetTextureColorMod",
"SDL_SetTextureScaleMode",
"SDL_SetTextureUserData",
"SDL_SetThreadPriority",
"SDL_SetWindowAlwaysOnTop",
"SDL_SetWindowBordered",
"SDL_SetWindowBrightness",
"SDL_SetWindowData",
"SDL_SetWindowDisplayMode",
"SDL_SetWindowFullscreen",
"SDL_SetWindowGammaRamp",
"SDL_SetWindowGrab",
"SDL_SetWindowHitTest",
"SDL_SetWindowIcon",
"SDL_SetWindowInputFocus",
"SDL_SetWindowKeyboardGrab",
"SDL_SetWindowMaximumSize",
"SDL_SetWindowMinimumSize",
"SDL_SetWindowModalFor",
"SDL_SetWindowMouseGrab",
"SDL_SetWindowMouseRect",
"SDL_SetWindowOpacity",
"SDL_SetWindowPosition",
"SDL_SetWindowResizable",
"SDL_SetWindowShape",
"SDL_SetWindowSize",
"SDL_SetWindowTitle",
"SDL_SetWindowsMessageHook",
"SDL_SetYUVConversionMode",
"SDL_ShowCursor",
"SDL_ShowMessageBox",
"SDL_ShowSimpleMessageBox",
"SDL_ShowWindow",
"SDL_SoftStretch",
"SDL_SoftStretchLinear",
"SDL_StartTextInput",
"SDL_StopTextInput",
"SDL_TLSCleanup",
"SDL_TLSCreate",
"SDL_TLSGet",
"SDL_TLSSet",
"SDL_ThreadID",
"SDL_TryLockMutex",
"SDL_UnionFRect",
"SDL_UnionRect",
"SDL_UnloadObject",
"SDL_UnlockAudio",
"SDL_UnlockAudioDevice",
"SDL_UnlockJoysticks",
"SDL_UnlockMutex",
"SDL_UnlockSensors",
"SDL_UnlockSurface",
"SDL_UnlockTexture",
"SDL_UnregisterApp",
"SDL_UpdateNVTexture",
"SDL_UpdateTexture",
"SDL_UpdateWindowSurface",
"SDL_UpdateWindowSurfaceRects",
"SDL_UpdateYUVTexture",
"SDL_UpperBlit",
"SDL_UpperBlitScaled",
"SDL_VideoInit",
"SDL_VideoQuit",
"SDL_Vulkan_CreateSurface",
"SDL_Vulkan_GetDrawableSize",
"SDL_Vulkan_GetInstanceExtensions",
"SDL_Vulkan_GetVkGetInstanceProcAddr",
"SDL_Vulkan_LoadLibrary",
"SDL_Vulkan_UnloadLibrary",
"SDL_WaitEvent",
"SDL_WaitEventTimeout",
"SDL_WaitThread",
"SDL_WarpMouseGlobal",
"SDL_WarpMouseInWindow",
"SDL_WasInit",
"SDL_WriteBE16",
"SDL_WriteBE32",
"SDL_WriteBE64",
"SDL_WriteLE16",
"SDL_WriteLE32",
"SDL_WriteLE64",
"SDL_WriteU8",
"SDL_abs",
"SDL_acos",
"SDL_acosf",
"SDL_asin",
"SDL_asinf",
"SDL_asprintf",
"SDL_atan",
"SDL_atan2",
"SDL_atan2f",
"SDL_atanf",
"SDL_atof",
"SDL_atoi",
"SDL_bsearch",
"SDL_calloc",
"SDL_ceil",
"SDL_ceilf",
"SDL_copysign",
"SDL_copysignf",
"SDL_cos",
"SDL_cosf",
"SDL_crc16",
"SDL_crc32",
"SDL_exp",
"SDL_expf",
"SDL_fabs",
"SDL_fabsf",
"SDL_floor",
"SDL_floorf",
"SDL_fmod",
"SDL_fmodf",
"SDL_free",
"SDL_getenv",
"SDL_hid_ble_scan",
"SDL_hid_close",
"SDL_hid_device_change_count",
"SDL_hid_enumerate",
"SDL_hid_exit",
"SDL_hid_free_enumeration",
"SDL_hid_get_feature_report",
"SDL_hid_get_indexed_string",
"SDL_hid_get_manufacturer_string",
"SDL_hid_get_product_string",
"SDL_hid_get_serial_number_string",
"SDL_hid_init",
"SDL_hid_open",
"SDL_hid_open_path",
"SDL_hid_read",
"SDL_hid_read_timeout",
"SDL_hid_send_feature_report",
"SDL_hid_set_nonblocking",
"SDL_hid_write",
"SDL_iconv",
"SDL_iconv_close",
"SDL_iconv_open",
"SDL_iconv_string",
"SDL_isalnum",
"SDL_isalpha",
"SDL_isblank",
"SDL_iscntrl",
"SDL_isdigit",
"SDL_isgraph",
"SDL_islower",
"SDL_isprint",
"SDL_ispunct",
"SDL_isspace",
"SDL_isupper",
"SDL_isxdigit",
"SDL_itoa",
"SDL_lltoa",
"SDL_log",
"SDL_log10",
"SDL_log10f",
"SDL_logf",
"SDL_lround",
"SDL_lroundf",
"SDL_ltoa",
"SDL_malloc",
"SDL_memcmp",
"SDL_memcpy",
"SDL_memmove",
"SDL_memset",
"SDL_pow",
"SDL_powf",
"SDL_qsort",
"SDL_realloc",
"SDL_round",
"SDL_roundf",
"SDL_scalbn",
"SDL_scalbnf",
"SDL_setenv",
"SDL_sin",
"SDL_sinf",
"SDL_snprintf",
"SDL_sqrt",
"SDL_sqrtf",
"SDL_sscanf",
"SDL_strcasecmp",
"SDL_strcasestr",
"SDL_strchr",
"SDL_strcmp",
"SDL_strdup",
"SDL_strlcat",
"SDL_strlcpy",
"SDL_strlen",
"SDL_strlwr",
"SDL_strncasecmp",
"SDL_strncmp",
"SDL_strrchr",
"SDL_strrev",
"SDL_strstr",
"SDL_strtod",
"SDL_strtokr",
"SDL_strtol",
"SDL_strtoll",
"SDL_strtoul",
"SDL_strtoull",
"SDL_strupr",
"SDL_tan",
"SDL_tanf",
"SDL_tolower",
"SDL_toupper",
"SDL_trunc",
"SDL_truncf",
"SDL_uitoa",
"SDL_ulltoa",
"SDL_ultoa",
"SDL_utf8strlcpy",
"SDL_utf8strlen",
"SDL_utf8strnlen",
"SDL_vasprintf",
"SDL_vsnprintf",
"SDL_vsscanf",
"SDL_wcscasecmp",
"SDL_wcscmp",
"SDL_wcsdup",
"SDL_wcslcat",
"SDL_wcslcpy",
"SDL_wcslen",
"SDL_wcsncasecmp",
"SDL_wcsncmp",
"SDL_wcsstr"};
#define IDX_SDL_AddEventWatch 0
#define IDX_SDL_AddHintCallback 1
#define IDX_SDL_AddTimer 2
#define IDX_SDL_AllocFormat 3
#define IDX_SDL_AllocPalette 4
#define IDX_SDL_AllocRW 5
#define IDX_SDL_AtomicAdd 6
#define IDX_SDL_AtomicCAS 7
#define IDX_SDL_AtomicCASPtr 8
#define IDX_SDL_AtomicGet 9
#define IDX_SDL_AtomicGetPtr 10
#define IDX_SDL_AtomicLock 11
#define IDX_SDL_AtomicSet 12
#define IDX_SDL_AtomicSetPtr 13
#define IDX_SDL_AtomicTryLock 14
#define IDX_SDL_AtomicUnlock 15
#define IDX_SDL_AudioInit 16
#define IDX_SDL_AudioQuit 17
#define IDX_SDL_AudioStreamAvailable 18
#define IDX_SDL_AudioStreamClear 19
#define IDX_SDL_AudioStreamFlush 20
#define IDX_SDL_AudioStreamGet 21
#define IDX_SDL_AudioStreamPut 22
#define IDX_SDL_BuildAudioCVT 23
#define IDX_SDL_CalculateGammaRamp 24
#define IDX_SDL_CaptureMouse 25
#define IDX_SDL_ClearComposition 26
#define IDX_SDL_ClearError 27
#define IDX_SDL_ClearHints 28
#define IDX_SDL_ClearQueuedAudio 29
#define IDX_SDL_CloseAudio 30
#define IDX_SDL_CloseAudioDevice 31
#define IDX_SDL_ComposeCustomBlendMode 32
#define IDX_SDL_CondBroadcast 33
#define IDX_SDL_CondSignal 34
#define IDX_SDL_CondWait 35
#define IDX_SDL_CondWaitTimeout 36
#define IDX_SDL_ConvertAudio 37
#define IDX_SDL_ConvertPixels 38
#define IDX_SDL_ConvertSurface 39
#define IDX_SDL_ConvertSurfaceFormat 40
#define IDX_SDL_CreateColorCursor 41
#define IDX_SDL_CreateCond 42
#define IDX_SDL_CreateCursor 43
#define IDX_SDL_CreateMutex 44
#define IDX_SDL_CreateRGBSurface 45
#define IDX_SDL_CreateRGBSurfaceFrom 46
#define IDX_SDL_CreateRGBSurfaceWithFormat 47
#define IDX_SDL_CreateRGBSurfaceWithFormatFrom 48
#define IDX_SDL_CreateRenderer 49
#define IDX_SDL_CreateSemaphore 50
#define IDX_SDL_CreateShapedWindow 51
#define IDX_SDL_CreateSoftwareRenderer 52
#define IDX_SDL_CreateSystemCursor 53
#define IDX_SDL_CreateTexture 54
#define IDX_SDL_CreateTextureFromSurface 55
#define IDX_SDL_CreateThread 56
#define IDX_SDL_CreateThreadWithStackSize 57
#define IDX_SDL_CreateWindow 58
#define IDX_SDL_CreateWindowAndRenderer 59
#define IDX_SDL_CreateWindowFrom 60
#define IDX_SDL_DXGIGetOutputInfo 61
#define IDX_SDL_DYNAPI_entry 62
#define IDX_SDL_DelEventWatch 63
#define IDX_SDL_DelHintCallback 64
#define IDX_SDL_Delay 65
#define IDX_SDL_DequeueAudio 66
#define IDX_SDL_DestroyCond 67
#define IDX_SDL_DestroyMutex 68
#define IDX_SDL_DestroyRenderer 69
#define IDX_SDL_DestroySemaphore 70
#define IDX_SDL_DestroyTexture 71
#define IDX_SDL_DestroyWindow 72
#define IDX_SDL_DestroyWindowSurface 73
#define IDX_SDL_DetachThread 74
#define IDX_SDL_Direct3D9GetAdapterIndex 75
#define IDX_SDL_DisableScreenSaver 76
#define IDX_SDL_DuplicateSurface 77
#define IDX_SDL_EnableScreenSaver 78
#define IDX_SDL_EncloseFPoints 79
#define IDX_SDL_EnclosePoints 80
#define IDX_SDL_Error 81
#define IDX_SDL_EventState 82
#define IDX_SDL_FillRect 83
#define IDX_SDL_FillRects 84
#define IDX_SDL_FilterEvents 85
#define IDX_SDL_FlashWindow 86
#define IDX_SDL_FlushEvent 87
#define IDX_SDL_FlushEvents 88
#define IDX_SDL_FreeAudioStream 89
#define IDX_SDL_FreeCursor 90
#define IDX_SDL_FreeFormat 91
#define IDX_SDL_FreePalette 92
#define IDX_SDL_FreeRW 93
#define IDX_SDL_FreeSurface 94
#define IDX_SDL_FreeWAV 95
#define IDX_SDL_GL_BindTexture 96
#define IDX_SDL_GL_CreateContext 97
#define IDX_SDL_GL_DeleteContext 98
#define IDX_SDL_GL_ExtensionSupported 99
#define IDX_SDL_GL_GetAttribute 100
#define IDX_SDL_GL_GetCurrentContext 101
#define IDX_SDL_GL_GetCurrentWindow 102
#define IDX_SDL_GL_GetDrawableSize 103
#define IDX_SDL_GL_GetProcAddress 104
#define IDX_SDL_GL_GetSwapInterval 105
#define IDX_SDL_GL_LoadLibrary 106
#define IDX_SDL_GL_MakeCurrent 107
#define IDX_SDL_GL_ResetAttributes 108
#define IDX_SDL_GL_SetAttribute 109
#define IDX_SDL_GL_SetSwapInterval 110
#define IDX_SDL_GL_SwapWindow 111
#define IDX_SDL_GL_UnbindTexture 112
#define IDX_SDL_GL_UnloadLibrary 113
#define IDX_SDL_GUIDFromString 114
#define IDX_SDL_GUIDToString 115
#define IDX_SDL_GameControllerAddMapping 116
#define IDX_SDL_GameControllerAddMappingsFromRW 117
#define IDX_SDL_GameControllerClose 118
#define IDX_SDL_GameControllerEventState 119
#define IDX_SDL_GameControllerFromInstanceID 120
#define IDX_SDL_GameControllerFromPlayerIndex 121
#define IDX_SDL_GameControllerGetAppleSFSymbolsNameForAxis 122
#define IDX_SDL_GameControllerGetAppleSFSymbolsNameForButton 123
#define IDX_SDL_GameControllerGetAttached 124
#define IDX_SDL_GameControllerGetAxis 125
#define IDX_SDL_GameControllerGetAxisFromString 126
#define IDX_SDL_GameControllerGetBindForAxis 127
#define IDX_SDL_GameControllerGetBindForButton 128
#define IDX_SDL_GameControllerGetButton 129
#define IDX_SDL_GameControllerGetButtonFromString 130
#define IDX_SDL_GameControllerGetFirmwareVersion 131
#define IDX_SDL_GameControllerGetJoystick 132
#define IDX_SDL_GameControllerGetNumTouchpadFingers 133
#define IDX_SDL_GameControllerGetNumTouchpads 134
#define IDX_SDL_GameControllerGetPlayerIndex 135
#define IDX_SDL_GameControllerGetProduct 136
#define IDX_SDL_GameControllerGetProductVersion 137
#define IDX_SDL_GameControllerGetSensorData 138
#define IDX_SDL_GameControllerGetSensorDataRate 139
#define IDX_SDL_GameControllerGetSensorDataWithTimestamp 140
#define IDX_SDL_GameControllerGetSerial 141
#define IDX_SDL_GameControllerGetSteamHandle 142
#define IDX_SDL_GameControllerGetStringForAxis 143
#define IDX_SDL_GameControllerGetStringForButton 144
#define IDX_SDL_GameControllerGetTouchpadFinger 145
#define IDX_SDL_GameControllerGetType 146
#define IDX_SDL_GameControllerGetVendor 147
#define IDX_SDL_GameControllerHasAxis 148
#define IDX_SDL_GameControllerHasButton 149
#define IDX_SDL_GameControllerHasLED 150
#define IDX_SDL_GameControllerHasRumble 151
#define IDX_SDL_GameControllerHasRumbleTriggers 152
#define IDX_SDL_GameControllerHasSensor 153
#define IDX_SDL_GameControllerIsSensorEnabled 154
#define IDX_SDL_GameControllerMapping 155
#define IDX_SDL_GameControllerMappingForDeviceIndex 156
#define IDX_SDL_GameControllerMappingForGUID 157
#define IDX_SDL_GameControllerMappingForIndex 158
#define IDX_SDL_GameControllerName 159
#define IDX_SDL_GameControllerNameForIndex 160
#define IDX_SDL_GameControllerNumMappings 161
#define IDX_SDL_GameControllerOpen 162
#define IDX_SDL_GameControllerPath 163
#define IDX_SDL_GameControllerPathForIndex 164
#define IDX_SDL_GameControllerRumble 165
#define IDX_SDL_GameControllerRumbleTriggers 166
#define IDX_SDL_GameControllerSendEffect 167
#define IDX_SDL_GameControllerSetLED 168
#define IDX_SDL_GameControllerSetPlayerIndex 169
#define IDX_SDL_GameControllerSetSensorEnabled 170
#define IDX_SDL_GameControllerTypeForIndex 171
#define IDX_SDL_GameControllerUpdate 172
#define IDX_SDL_GetAssertionHandler 173
#define IDX_SDL_GetAssertionReport 174
#define IDX_SDL_GetAudioDeviceName 175
#define IDX_SDL_GetAudioDeviceSpec 176
#define IDX_SDL_GetAudioDeviceStatus 177
#define IDX_SDL_GetAudioDriver 178
#define IDX_SDL_GetAudioStatus 179
#define IDX_SDL_GetBasePath 180
#define IDX_SDL_GetCPUCacheLineSize 181
#define IDX_SDL_GetCPUCount 182
#define IDX_SDL_GetClipRect 183
#define IDX_SDL_GetClipboardText 184
#define IDX_SDL_GetClosestDisplayMode 185
#define IDX_SDL_GetColorKey 186
#define IDX_SDL_GetCurrentAudioDriver 187
#define IDX_SDL_GetCurrentDisplayMode 188
#define IDX_SDL_GetCurrentVideoDriver 189
#define IDX_SDL_GetCursor 190
#define IDX_SDL_GetDefaultAssertionHandler 191
#define IDX_SDL_GetDefaultAudioInfo 192
#define IDX_SDL_GetDefaultCursor 193
#define IDX_SDL_GetDesktopDisplayMode 194
#define IDX_SDL_GetDisplayBounds 195
#define IDX_SDL_GetDisplayDPI 196
#define IDX_SDL_GetDisplayMode 197
#define IDX_SDL_GetDisplayName 198
#define IDX_SDL_GetDisplayOrientation 199
#define IDX_SDL_GetDisplayUsableBounds 200
#define IDX_SDL_GetError 201
#define IDX_SDL_GetErrorMsg 202
#define IDX_SDL_GetEventFilter 203
#define IDX_SDL_GetGlobalMouseState 204
#define IDX_SDL_GetGrabbedWindow 205
#define IDX_SDL_GetHint 206
#define IDX_SDL_GetHintBoolean 207
#define IDX_SDL_GetJoystickGUIDInfo 208
#define IDX_SDL_GetKeyFromName 209
#define IDX_SDL_GetKeyFromScancode 210
#define IDX_SDL_GetKeyName 211
#define IDX_SDL_GetKeyboardFocus 212
#define IDX_SDL_GetKeyboardState 213
#define IDX_SDL_GetMemoryFunctions 214
#define IDX_SDL_GetModState 215
#define IDX_SDL_GetMouseFocus 216
#define IDX_SDL_GetMouseState 217
#define IDX_SDL_GetNumAllocations 218
#define IDX_SDL_GetNumAudioDevices 219
#define IDX_SDL_GetNumAudioDrivers 220
#define IDX_SDL_GetNumDisplayModes 221
#define IDX_SDL_GetNumRenderDrivers 222
#define IDX_SDL_GetNumTouchDevices 223
#define IDX_SDL_GetNumTouchFingers 224
#define IDX_SDL_GetNumVideoDisplays 225
#define IDX_SDL_GetNumVideoDrivers 226
#define IDX_SDL_GetOriginalMemoryFunctions 227
#define IDX_SDL_GetPerformanceCounter 228
#define IDX_SDL_GetPerformanceFrequency 229
#define IDX_SDL_GetPixelFormatName 230
#define IDX_SDL_GetPlatform 231
#define IDX_SDL_GetPointDisplayIndex 232
#define IDX_SDL_GetPowerInfo 233
#define IDX_SDL_GetPrefPath 234
#define IDX_SDL_GetPreferredLocales 235
#define IDX_SDL_GetPrimarySelectionText 236
#define IDX_SDL_GetQueuedAudioSize 237
#define IDX_SDL_GetRGB 238
#define IDX_SDL_GetRGBA 239
#define IDX_SDL_GetRectDisplayIndex 240
#define IDX_SDL_GetRelativeMouseMode 241
#define IDX_SDL_GetRelativeMouseState 242
#define IDX_SDL_GetRenderDrawBlendMode 243
#define IDX_SDL_GetRenderDrawColor 244
#define IDX_SDL_GetRenderDriverInfo 245
#define IDX_SDL_GetRenderTarget 246
#define IDX_SDL_GetRenderer 247
#define IDX_SDL_GetRendererInfo 248
#define IDX_SDL_GetRendererOutputSize 249
#define IDX_SDL_GetRevision 250
#define IDX_SDL_GetRevisionNumber 251
#define IDX_SDL_GetScancodeFromKey 252
#define IDX_SDL_GetScancodeFromName 253
#define IDX_SDL_GetScancodeName 254
#define IDX_SDL_GetShapedWindowMode 255
#define IDX_SDL_GetSurfaceAlphaMod 256
#define IDX_SDL_GetSurfaceBlendMode 257
#define IDX_SDL_GetSurfaceColorMod 258
#define IDX_SDL_GetSystemRAM 259
#define IDX_SDL_GetTextureAlphaMod 260
#define IDX_SDL_GetTextureBlendMode 261
#define IDX_SDL_GetTextureColorMod 262
#define IDX_SDL_GetTextureScaleMode 263
#define IDX_SDL_GetTextureUserData 264
#define IDX_SDL_GetThreadID 265
#define IDX_SDL_GetThreadName 266
#define IDX_SDL_GetTicks 267
#define IDX_SDL_GetTicks64 268
#define IDX_SDL_GetTouchDevice 269
#define IDX_SDL_GetTouchDeviceType 270
#define IDX_SDL_GetTouchFinger 271
#define IDX_SDL_GetTouchName 272
#define IDX_SDL_GetVersion 273
#define IDX_SDL_GetVideoDriver 274
#define IDX_SDL_GetWindowBordersSize 275
#define IDX_SDL_GetWindowBrightness 276
#define IDX_SDL_GetWindowData 277
#define IDX_SDL_GetWindowDisplayIndex 278
#define IDX_SDL_GetWindowDisplayMode 279
#define IDX_SDL_GetWindowFlags 280
#define IDX_SDL_GetWindowFromID 281
#define IDX_SDL_GetWindowGammaRamp 282
#define IDX_SDL_GetWindowGrab 283
#define IDX_SDL_GetWindowICCProfile 284
#define IDX_SDL_GetWindowID 285
#define IDX_SDL_GetWindowKeyboardGrab 286
#define IDX_SDL_GetWindowMaximumSize 287
#define IDX_SDL_GetWindowMinimumSize 288
#define IDX_SDL_GetWindowMouseGrab 289
#define IDX_SDL_GetWindowMouseRect 290
#define IDX_SDL_GetWindowOpacity 291
#define IDX_SDL_GetWindowPixelFormat 292
#define IDX_SDL_GetWindowPosition 293
#define IDX_SDL_GetWindowSize 294
#define IDX_SDL_GetWindowSizeInPixels 295
#define IDX_SDL_GetWindowSurface 296
#define IDX_SDL_GetWindowTitle 297
#define IDX_SDL_GetWindowWMInfo 298
#define IDX_SDL_GetYUVConversionMode 299
#define IDX_SDL_GetYUVConversionModeForResolution 300
#define IDX_SDL_HapticClose 301
#define IDX_SDL_HapticDestroyEffect 302
#define IDX_SDL_HapticEffectSupported 303
#define IDX_SDL_HapticGetEffectStatus 304
#define IDX_SDL_HapticIndex 305
#define IDX_SDL_HapticName 306
#define IDX_SDL_HapticNewEffect 307
#define IDX_SDL_HapticNumAxes 308
#define IDX_SDL_HapticNumEffects 309
#define IDX_SDL_HapticNumEffectsPlaying 310
#define IDX_SDL_HapticOpen 311
#define IDX_SDL_HapticOpenFromJoystick 312
#define IDX_SDL_HapticOpenFromMouse 313
#define IDX_SDL_HapticOpened 314
#define IDX_SDL_HapticPause 315
#define IDX_SDL_HapticQuery 316
#define IDX_SDL_HapticRumbleInit 317
#define IDX_SDL_HapticRumblePlay 318
#define IDX_SDL_HapticRumbleStop 319
#define IDX_SDL_HapticRumbleSupported 320
#define IDX_SDL_HapticRunEffect 321
#define IDX_SDL_HapticSetAutocenter 322
#define IDX_SDL_HapticSetGain 323
#define IDX_SDL_HapticStopAll 324
#define IDX_SDL_HapticStopEffect 325
#define IDX_SDL_HapticUnpause 326
#define IDX_SDL_HapticUpdateEffect 327
#define IDX_SDL_Has3DNow 328
#define IDX_SDL_HasARMSIMD 329
#define IDX_SDL_HasAVX 330
#define IDX_SDL_HasAVX2 331
#define IDX_SDL_HasAVX512F 332
#define IDX_SDL_HasAltiVec 333
#define IDX_SDL_HasClipboardText 334
#define IDX_SDL_HasColorKey 335
#define IDX_SDL_HasEvent 336
#define IDX_SDL_HasEvents 337
#define IDX_SDL_HasIntersection 338
#define IDX_SDL_HasIntersectionF 339
#define IDX_SDL_HasLASX 340
#define IDX_SDL_HasLSX 341
#define IDX_SDL_HasMMX 342
#define IDX_SDL_HasNEON 343
#define IDX_SDL_HasPrimarySelectionText 344
#define IDX_SDL_HasRDTSC 345
#define IDX_SDL_HasSSE 346
#define IDX_SDL_HasSSE2 347
#define IDX_SDL_HasSSE3 348
#define IDX_SDL_HasSSE41 349
#define IDX_SDL_HasSSE42 350
#define IDX_SDL_HasScreenKeyboardSupport 351
#define IDX_SDL_HasSurfaceRLE 352
#define IDX_SDL_HasWindowSurface 353
#define IDX_SDL_HideWindow 354
#define IDX_SDL_Init 355
#define IDX_SDL_InitSubSystem 356
#define IDX_SDL_IntersectFRect 357
#define IDX_SDL_IntersectFRectAndLine 358
#define IDX_SDL_IntersectRect 359
#define IDX_SDL_IntersectRectAndLine 360
#define IDX_SDL_IsGameController 361
#define IDX_SDL_IsScreenKeyboardShown 362
#define IDX_SDL_IsScreenSaverEnabled 363
#define IDX_SDL_IsShapedWindow 364
#define IDX_SDL_IsTablet 365
#define IDX_SDL_IsTextInputActive 366
#define IDX_SDL_IsTextInputShown 367
#define IDX_SDL_JoystickAttachVirtual 368
#define IDX_SDL_JoystickAttachVirtualEx 369
#define IDX_SDL_JoystickClose 370
#define IDX_SDL_JoystickCurrentPowerLevel 371
#define IDX_SDL_JoystickDetachVirtual 372
#define IDX_SDL_JoystickEventState 373
#define IDX_SDL_JoystickFromInstanceID 374
#define IDX_SDL_JoystickFromPlayerIndex 375
#define IDX_SDL_JoystickGetAttached 376
#define IDX_SDL_JoystickGetAxis 377
#define IDX_SDL_JoystickGetAxisInitialState 378
#define IDX_SDL_JoystickGetBall 379
#define IDX_SDL_JoystickGetButton 380
#define IDX_SDL_JoystickGetDeviceGUID 381
#define IDX_SDL_JoystickGetDeviceInstanceID 382
#define IDX_SDL_JoystickGetDevicePlayerIndex 383
#define IDX_SDL_JoystickGetDeviceProduct 384
#define IDX_SDL_JoystickGetDeviceProductVersion 385
#define IDX_SDL_JoystickGetDeviceType 386
#define IDX_SDL_JoystickGetDeviceVendor 387
#define IDX_SDL_JoystickGetFirmwareVersion 388
#define IDX_SDL_JoystickGetGUID 389
#define IDX_SDL_JoystickGetGUIDFromString 390
#define IDX_SDL_JoystickGetGUIDString 391
#define IDX_SDL_JoystickGetHat 392
#define IDX_SDL_JoystickGetPlayerIndex 393
#define IDX_SDL_JoystickGetProduct 394
#define IDX_SDL_JoystickGetProductVersion 395
#define IDX_SDL_JoystickGetSerial 396
#define IDX_SDL_JoystickGetType 397
#define IDX_SDL_JoystickGetVendor 398
#define IDX_SDL_JoystickHasLED 399
#define IDX_SDL_JoystickHasRumble 400
#define IDX_SDL_JoystickHasRumbleTriggers 401
#define IDX_SDL_JoystickInstanceID 402
#define IDX_SDL_JoystickIsHaptic 403
#define IDX_SDL_JoystickIsVirtual 404
#define IDX_SDL_JoystickName 405
#define IDX_SDL_JoystickNameForIndex 406
#define IDX_SDL_JoystickNumAxes 407
#define IDX_SDL_JoystickNumBalls 408
#define IDX_SDL_JoystickNumButtons 409
#define IDX_SDL_JoystickNumHats 410
#define IDX_SDL_JoystickOpen 411
#define IDX_SDL_JoystickPath 412
#define IDX_SDL_JoystickPathForIndex 413
#define IDX_SDL_JoystickRumble 414
#define IDX_SDL_JoystickRumbleTriggers 415
#define IDX_SDL_JoystickSendEffect 416
#define IDX_SDL_JoystickSetLED 417
#define IDX_SDL_JoystickSetPlayerIndex 418
#define IDX_SDL_JoystickSetVirtualAxis 419
#define IDX_SDL_JoystickSetVirtualButton 420
#define IDX_SDL_JoystickSetVirtualHat 421
#define IDX_SDL_JoystickUpdate 422
#define IDX_SDL_LoadBMP_RW 423
#define IDX_SDL_LoadDollarTemplates 424
#define IDX_SDL_LoadFile 425
#define IDX_SDL_LoadFile_RW 426
#define IDX_SDL_LoadFunction 427
#define IDX_SDL_LoadObject 428
#define IDX_SDL_LoadWAV_RW 429
#define IDX_SDL_LockAudio 430
#define IDX_SDL_LockAudioDevice 431
#define IDX_SDL_LockJoysticks 432
#define IDX_SDL_LockMutex 433
#define IDX_SDL_LockSensors 434
#define IDX_SDL_LockSurface 435
#define IDX_SDL_LockTexture 436
#define IDX_SDL_LockTextureToSurface 437
#define IDX_SDL_Log 438
#define IDX_SDL_LogCritical 439
#define IDX_SDL_LogDebug 440
#define IDX_SDL_LogError 441
#define IDX_SDL_LogGetOutputFunction 442
#define IDX_SDL_LogGetPriority 443
#define IDX_SDL_LogInfo 444
#define IDX_SDL_LogMessage 445
#define IDX_SDL_LogMessageV 446
#define IDX_SDL_LogResetPriorities 447
#define IDX_SDL_LogSetAllPriority 448
#define IDX_SDL_LogSetOutputFunction 449
#define IDX_SDL_LogSetPriority 450
#define IDX_SDL_LogVerbose 451
#define IDX_SDL_LogWarn 452
#define IDX_SDL_LowerBlit 453
#define IDX_SDL_LowerBlitScaled 454
#define IDX_SDL_MapRGB 455
#define IDX_SDL_MapRGBA 456
#define IDX_SDL_MasksToPixelFormatEnum 457
#define IDX_SDL_MaximizeWindow 458
#define IDX_SDL_MemoryBarrierAcquireFunction 459
#define IDX_SDL_MemoryBarrierReleaseFunction 460
#define IDX_SDL_Metal_CreateView 461
#define IDX_SDL_Metal_DestroyView 462
#define IDX_SDL_Metal_GetDrawableSize 463
#define IDX_SDL_Metal_GetLayer 464
#define IDX_SDL_MinimizeWindow 465
#define IDX_SDL_MixAudio 466
#define IDX_SDL_MixAudioFormat 467
#define IDX_SDL_MouseIsHaptic 468
#define IDX_SDL_NewAudioStream 469
#define IDX_SDL_NumHaptics 470
#define IDX_SDL_NumJoysticks 471
#define IDX_SDL_NumSensors 472
#define IDX_SDL_OnApplicationDidBecomeActive 473
#define IDX_SDL_OnApplicationDidEnterBackground 474
#define IDX_SDL_OnApplicationDidReceiveMemoryWarning 475
#define IDX_SDL_OnApplicationWillEnterForeground 476
#define IDX_SDL_OnApplicationWillResignActive 477
#define IDX_SDL_OnApplicationWillTerminate 478
#define IDX_SDL_OpenAudio 479
#define IDX_SDL_OpenAudioDevice 480
#define IDX_SDL_OpenURL 481
#define IDX_SDL_PauseAudio 482
#define IDX_SDL_PauseAudioDevice 483
#define IDX_SDL_PeepEvents 484
#define IDX_SDL_PixelFormatEnumToMasks 485
#define IDX_SDL_PollEvent 486
#define IDX_SDL_PremultiplyAlpha 487
#define IDX_SDL_PumpEvents 488
#define IDX_SDL_PushEvent 489
#define IDX_SDL_QueryTexture 490
#define IDX_SDL_QueueAudio 491
#define IDX_SDL_Quit 492
#define IDX_SDL_QuitSubSystem 493
#define IDX_SDL_RWFromConstMem 494
#define IDX_SDL_RWFromFP 495
#define IDX_SDL_RWFromFile 496
#define IDX_SDL_RWFromMem 497
#define IDX_SDL_RWclose 498
#define IDX_SDL_RWread 499
#define IDX_SDL_RWseek 500
#define IDX_SDL_RWsize 501
#define IDX_SDL_RWtell 502
#define IDX_SDL_RWwrite 503
#define IDX_SDL_RaiseWindow 504
#define IDX_SDL_ReadBE16 505
#define IDX_SDL_ReadBE32 506
#define IDX_SDL_ReadBE64 507
#define IDX_SDL_ReadLE16 508
#define IDX_SDL_ReadLE32 509
#define IDX_SDL_ReadLE64 510
#define IDX_SDL_ReadU8 511
#define IDX_SDL_RecordGesture 512
#define IDX_SDL_RegisterApp 513
#define IDX_SDL_RegisterEvents 514
#define IDX_SDL_RemoveTimer 515
#define IDX_SDL_RenderClear 516
#define IDX_SDL_RenderCopy 517
#define IDX_SDL_RenderCopyEx 518
#define IDX_SDL_RenderCopyExF 519
#define IDX_SDL_RenderCopyF 520
#define IDX_SDL_RenderDrawLine 521
#define IDX_SDL_RenderDrawLineF 522
#define IDX_SDL_RenderDrawLines 523
#define IDX_SDL_RenderDrawLinesF 524
#define IDX_SDL_RenderDrawPoint 525
#define IDX_SDL_RenderDrawPointF 526
#define IDX_SDL_RenderDrawPoints 527
#define IDX_SDL_RenderDrawPointsF 528
#define IDX_SDL_RenderDrawRect 529
#define IDX_SDL_RenderDrawRectF 530
#define IDX_SDL_RenderDrawRects 531
#define IDX_SDL_RenderDrawRectsF 532
#define IDX_SDL_RenderFillRect 533
#define IDX_SDL_RenderFillRectF 534
#define IDX_SDL_RenderFillRects 535
#define IDX_SDL_RenderFillRectsF 536
#define IDX_SDL_RenderFlush 537
#define IDX_SDL_RenderGeometry 538
#define IDX_SDL_RenderGeometryRaw 539
#define IDX_SDL_RenderGetClipRect 540
#define IDX_SDL_RenderGetD3D11Device 541
#define IDX_SDL_RenderGetD3D12Device 542
#define IDX_SDL_RenderGetD3D9Device 543
#define IDX_SDL_RenderGetIntegerScale 544
#define IDX_SDL_RenderGetLogicalSize 545
#define IDX_SDL_RenderGetMetalCommandEncoder 546
#define IDX_SDL_RenderGetMetalLayer 547
#define IDX_SDL_RenderGetScale 548
#define IDX_SDL_RenderGetViewport 549
#define IDX_SDL_RenderGetWindow 550
#define IDX_SDL_RenderIsClipEnabled 551
#define IDX_SDL_RenderLogicalToWindow 552
#define IDX_SDL_RenderPresent 553
#define IDX_SDL_RenderReadPixels 554
#define IDX_SDL_RenderSetClipRect 555
#define IDX_SDL_RenderSetIntegerScale 556
#define IDX_SDL_RenderSetLogicalSize 557
#define IDX_SDL_RenderSetScale 558
#define IDX_SDL_RenderSetVSync 559
#define IDX_SDL_RenderSetViewport 560
#define IDX_SDL_RenderTargetSupported 561
#define IDX_SDL_RenderWindowToLogical 562
#define IDX_SDL_ReportAssertion 563
#define IDX_SDL_ResetAssertionReport 564
#define IDX_SDL_ResetHint 565
#define IDX_SDL_ResetHints 566
#define IDX_SDL_ResetKeyboard 567
#define IDX_SDL_RestoreWindow 568
#define IDX_SDL_SIMDAlloc 569
#define IDX_SDL_SIMDFree 570
#define IDX_SDL_SIMDGetAlignment 571
#define IDX_SDL_SIMDRealloc 572
#define IDX_SDL_SaveAllDollarTemplates 573
#define IDX_SDL_SaveBMP_RW 574
#define IDX_SDL_SaveDollarTemplate 575
#define IDX_SDL_SemPost 576
#define IDX_SDL_SemTryWait 577
#define IDX_SDL_SemValue 578
#define IDX_SDL_SemWait 579
#define IDX_SDL_SemWaitTimeout 580
#define IDX_SDL_SensorClose 581
#define IDX_SDL_SensorFromInstanceID 582
#define IDX_SDL_SensorGetData 583
#define IDX_SDL_SensorGetDataWithTimestamp 584
#define IDX_SDL_SensorGetDeviceInstanceID 585
#define IDX_SDL_SensorGetDeviceName 586
#define IDX_SDL_SensorGetDeviceNonPortableType 587
#define IDX_SDL_SensorGetDeviceType 588
#define IDX_SDL_SensorGetInstanceID 589
#define IDX_SDL_SensorGetName 590
#define IDX_SDL_SensorGetNonPortableType 591
#define IDX_SDL_SensorGetType 592
#define IDX_SDL_SensorOpen 593
#define IDX_SDL_SensorUpdate 594
#define IDX_SDL_SetAssertionHandler 595
#define IDX_SDL_SetClipRect 596
#define IDX_SDL_SetClipboardText 597
#define IDX_SDL_SetColorKey 598
#define IDX_SDL_SetCursor 599
#define IDX_SDL_SetError 600
#define IDX_SDL_SetEventFilter 601
#define IDX_SDL_SetHint 602
#define IDX_SDL_SetHintWithPriority 603
#define IDX_SDL_SetMainReady 604
#define IDX_SDL_SetMemoryFunctions 605
#define IDX_SDL_SetModState 606
#define IDX_SDL_SetPaletteColors 607
#define IDX_SDL_SetPixelFormatPalette 608
#define IDX_SDL_SetPrimarySelectionText 609
#define IDX_SDL_SetRelativeMouseMode 610
#define IDX_SDL_SetRenderDrawBlendMode 611
#define IDX_SDL_SetRenderDrawColor 612
#define IDX_SDL_SetRenderTarget 613
#define IDX_SDL_SetSurfaceAlphaMod 614
#define IDX_SDL_SetSurfaceBlendMode 615
#define IDX_SDL_SetSurfaceColorMod 616
#define IDX_SDL_SetSurfacePalette 617
#define IDX_SDL_SetSurfaceRLE 618
#define IDX_SDL_SetTextInputRect 619
#define IDX_SDL_SetTextureAlphaMod 620
#define IDX_SDL_SetTextureBlendMode 621
#define IDX_SDL_SetTextureColorMod 622
#define IDX_SDL_SetTextureScaleMode 623
#define IDX_SDL_SetTextureUserData 624
#define IDX_SDL_SetThreadPriority 625
#define IDX_SDL_SetWindowAlwaysOnTop 626
#define IDX_SDL_SetWindowBordered 627
#define IDX_SDL_SetWindowBrightness 628
#define IDX_SDL_SetWindowData 629
#define IDX_SDL_SetWindowDisplayMode 630
#define IDX_SDL_SetWindowFullscreen 631
#define IDX_SDL_SetWindowGammaRamp 632
#define IDX_SDL_SetWindowGrab 633
#define IDX_SDL_SetWindowHitTest 634
#define IDX_SDL_SetWindowIcon 635
#define IDX_SDL_SetWindowInputFocus 636
#define IDX_SDL_SetWindowKeyboardGrab 637
#define IDX_SDL_SetWindowMaximumSize 638
#define IDX_SDL_SetWindowMinimumSize 639
#define IDX_SDL_SetWindowModalFor 640
#define IDX_SDL_SetWindowMouseGrab 641
#define IDX_SDL_SetWindowMouseRect 642
#define IDX_SDL_SetWindowOpacity 643
#define IDX_SDL_SetWindowPosition 644
#define IDX_SDL_SetWindowResizable 645
#define IDX_SDL_SetWindowShape 646
#define IDX_SDL_SetWindowSize 647
#define IDX_SDL_SetWindowTitle 648
#define IDX_SDL_SetWindowsMessageHook 649
#define IDX_SDL_SetYUVConversionMode 650
#define IDX_SDL_ShowCursor 651
#define IDX_SDL_ShowMessageBox 652
#define IDX_SDL_ShowSimpleMessageBox 653
#define IDX_SDL_ShowWindow 654
#define IDX_SDL_SoftStretch 655
#define IDX_SDL_SoftStretchLinear 656
#define IDX_SDL_StartTextInput 657
#define IDX_SDL_StopTextInput 658
#define IDX_SDL_TLSCleanup 659
#define IDX_SDL_TLSCreate 660
#define IDX_SDL_TLSGet 661
#define IDX_SDL_TLSSet 662
#define IDX_SDL_ThreadID 663
#define IDX_SDL_TryLockMutex 664
#define IDX_SDL_UnionFRect 665
#define IDX_SDL_UnionRect 666
#define IDX_SDL_UnloadObject 667
#define IDX_SDL_UnlockAudio 668
#define IDX_SDL_UnlockAudioDevice 669
#define IDX_SDL_UnlockJoysticks 670
#define IDX_SDL_UnlockMutex 671
#define IDX_SDL_UnlockSensors 672
#define IDX_SDL_UnlockSurface 673
#define IDX_SDL_UnlockTexture 674
#define IDX_SDL_UnregisterApp 675
#define IDX_SDL_UpdateNVTexture 676
#define IDX_SDL_UpdateTexture 677
#define IDX_SDL_UpdateWindowSurface 678
#define IDX_SDL_UpdateWindowSurfaceRects 679
#define IDX_SDL_UpdateYUVTexture 680
#define IDX_SDL_UpperBlit 681
#define IDX_SDL_UpperBlitScaled 682
#define IDX_SDL_VideoInit 683
#define IDX_SDL_VideoQuit 684
#define IDX_SDL_Vulkan_CreateSurface 685
#define IDX_SDL_Vulkan_GetDrawableSize 686
#define IDX_SDL_Vulkan_GetInstanceExtensions 687
#define IDX_SDL_Vulkan_GetVkGetInstanceProcAddr 688
#define IDX_SDL_Vulkan_LoadLibrary 689
#define IDX_SDL_Vulkan_UnloadLibrary 690
#define IDX_SDL_WaitEvent 691
#define IDX_SDL_WaitEventTimeout 692
#define IDX_SDL_WaitThread 693
#define IDX_SDL_WarpMouseGlobal 694
#define IDX_SDL_WarpMouseInWindow 695
#define IDX_SDL_WasInit 696
#define IDX_SDL_WriteBE16 697
#define IDX_SDL_WriteBE32 698
#define IDX_SDL_WriteBE64 699
#define IDX_SDL_WriteLE16 700
#define IDX_SDL_WriteLE32 701
#define IDX_SDL_WriteLE64 702
#define IDX_SDL_WriteU8 703
#define IDX_SDL_abs 704
#define IDX_SDL_acos 705
#define IDX_SDL_acosf 706
#define IDX_SDL_asin 707
#define IDX_SDL_asinf 708
#define IDX_SDL_asprintf 709
#define IDX_SDL_atan 710
#define IDX_SDL_atan2 711
#define IDX_SDL_atan2f 712
#define IDX_SDL_atanf 713
#define IDX_SDL_atof 714
#define IDX_SDL_atoi 715
#define IDX_SDL_bsearch 716
#define IDX_SDL_calloc 717
#define IDX_SDL_ceil 718
#define IDX_SDL_ceilf 719
#define IDX_SDL_copysign 720
#define IDX_SDL_copysignf 721
#define IDX_SDL_cos 722
#define IDX_SDL_cosf 723
#define IDX_SDL_crc16 724
#define IDX_SDL_crc32 725
#define IDX_SDL_exp 726
#define IDX_SDL_expf 727
#define IDX_SDL_fabs 728
#define IDX_SDL_fabsf 729
#define IDX_SDL_floor 730
#define IDX_SDL_floorf 731
#define IDX_SDL_fmod 732
#define IDX_SDL_fmodf 733
#define IDX_SDL_free 734
#define IDX_SDL_getenv 735
#define IDX_SDL_hid_ble_scan 736
#define IDX_SDL_hid_close 737
#define IDX_SDL_hid_device_change_count 738
#define IDX_SDL_hid_enumerate 739
#define IDX_SDL_hid_exit 740
#define IDX_SDL_hid_free_enumeration 741
#define IDX_SDL_hid_get_feature_report 742
#define IDX_SDL_hid_get_indexed_string 743
#define IDX_SDL_hid_get_manufacturer_string 744
#define IDX_SDL_hid_get_product_string 745
#define IDX_SDL_hid_get_serial_number_string 746
#define IDX_SDL_hid_init 747
#define IDX_SDL_hid_open 748
#define IDX_SDL_hid_open_path 749
#define IDX_SDL_hid_read 750
#define IDX_SDL_hid_read_timeout 751
#define IDX_SDL_hid_send_feature_report 752
#define IDX_SDL_hid_set_nonblocking 753
#define IDX_SDL_hid_write 754
#define IDX_SDL_iconv 755
#define IDX_SDL_iconv_close 756
#define IDX_SDL_iconv_open 757
#define IDX_SDL_iconv_string 758
#define IDX_SDL_isalnum 759
#define IDX_SDL_isalpha 760
#define IDX_SDL_isblank 761
#define IDX_SDL_iscntrl 762
#define IDX_SDL_isdigit 763
#define IDX_SDL_isgraph 764
#define IDX_SDL_islower 765
#define IDX_SDL_isprint 766
#define IDX_SDL_ispunct 767
#define IDX_SDL_isspace 768
#define IDX_SDL_isupper 769
#define IDX_SDL_isxdigit 770
#define IDX_SDL_itoa 771
#define IDX_SDL_lltoa 772
#define IDX_SDL_log 773
#define IDX_SDL_log10 774
#define IDX_SDL_log10f 775
#define IDX_SDL_logf 776
#define IDX_SDL_lround 777
#define IDX_SDL_lroundf 778
#define IDX_SDL_ltoa 779
#define IDX_SDL_malloc 780
#define IDX_SDL_memcmp 781
#define IDX_SDL_memcpy 782
#define IDX_SDL_memmove 783
#define IDX_SDL_memset 784
#define IDX_SDL_pow 785
#define IDX_SDL_powf 786
#define IDX_SDL_qsort 787
#define IDX_SDL_realloc 788
#define IDX_SDL_round 789
#define IDX_SDL_roundf 790
#define IDX_SDL_scalbn 791
#define IDX_SDL_scalbnf 792
#define IDX_SDL_setenv 793
#define IDX_SDL_sin 794
#define IDX_SDL_sinf 795
#define IDX_SDL_snprintf 796
#define IDX_SDL_sqrt 797
#define IDX_SDL_sqrtf 798
#define IDX_SDL_sscanf 799
#define IDX_SDL_strcasecmp 800
#define IDX_SDL_strcasestr 801
#define IDX_SDL_strchr 802
#define IDX_SDL_strcmp 803
#define IDX_SDL_strdup 804
#define IDX_SDL_strlcat 805
#define IDX_SDL_strlcpy 806
#define IDX_SDL_strlen 807
#define IDX_SDL_strlwr 808
#define IDX_SDL_strncasecmp 809
#define IDX_SDL_strncmp 810
#define IDX_SDL_strrchr 811
#define IDX_SDL_strrev 812
#define IDX_SDL_strstr 813
#define IDX_SDL_strtod 814
#define IDX_SDL_strtokr 815
#define IDX_SDL_strtol 816
#define IDX_SDL_strtoll 817
#define IDX_SDL_strtoul 818
#define IDX_SDL_strtoull 819
#define IDX_SDL_strupr 820
#define IDX_SDL_tan 821
#define IDX_SDL_tanf 822
#define IDX_SDL_tolower 823
#define IDX_SDL_toupper 824
#define IDX_SDL_trunc 825
#define IDX_SDL_truncf 826
#define IDX_SDL_uitoa 827
#define IDX_SDL_ulltoa 828
#define IDX_SDL_ultoa 829
#define IDX_SDL_utf8strlcpy 830
#define IDX_SDL_utf8strlen 831
#define IDX_SDL_utf8strnlen 832
#define IDX_SDL_vasprintf 833
#define IDX_SDL_vsnprintf 834
#define IDX_SDL_vsscanf 835
#define IDX_SDL_wcscasecmp 836
#define IDX_SDL_wcscmp 837
#define IDX_SDL_wcsdup 838
#define IDX_SDL_wcslcat 839
#define IDX_SDL_wcslcpy 840
#define IDX_SDL_wcslen 841
#define IDX_SDL_wcsncasecmp 842
#define IDX_SDL_wcsncmp 843
#define IDX_SDL_wcsstr 844
