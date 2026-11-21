.text
.globl SDL_AddEventWatch
SDL_AddEventWatch:
  jmp *real_ptrs+0(%rip)
.globl SDL_AddHintCallback
SDL_AddHintCallback:
  jmp *real_ptrs+8(%rip)
.globl SDL_AddTimer
SDL_AddTimer:
  jmp *real_ptrs+16(%rip)
.globl SDL_AllocFormat
SDL_AllocFormat:
  jmp *real_ptrs+24(%rip)
.globl SDL_AllocPalette
SDL_AllocPalette:
  jmp *real_ptrs+32(%rip)
.globl SDL_AllocRW
SDL_AllocRW:
  jmp *real_ptrs+40(%rip)
.globl SDL_AtomicAdd
SDL_AtomicAdd:
  jmp *real_ptrs+48(%rip)
.globl SDL_AtomicCAS
SDL_AtomicCAS:
  jmp *real_ptrs+56(%rip)
.globl SDL_AtomicCASPtr
SDL_AtomicCASPtr:
  jmp *real_ptrs+64(%rip)
.globl SDL_AtomicGet
SDL_AtomicGet:
  jmp *real_ptrs+72(%rip)
.globl SDL_AtomicGetPtr
SDL_AtomicGetPtr:
  jmp *real_ptrs+80(%rip)
.globl SDL_AtomicLock
SDL_AtomicLock:
  jmp *real_ptrs+88(%rip)
.globl SDL_AtomicSet
SDL_AtomicSet:
  jmp *real_ptrs+96(%rip)
.globl SDL_AtomicSetPtr
SDL_AtomicSetPtr:
  jmp *real_ptrs+104(%rip)
.globl SDL_AtomicTryLock
SDL_AtomicTryLock:
  jmp *real_ptrs+112(%rip)
.globl SDL_AtomicUnlock
SDL_AtomicUnlock:
  jmp *real_ptrs+120(%rip)
.globl SDL_AudioInit
SDL_AudioInit:
  jmp *real_ptrs+128(%rip)
.globl SDL_AudioQuit
SDL_AudioQuit:
  jmp *real_ptrs+136(%rip)
.globl SDL_AudioStreamAvailable
SDL_AudioStreamAvailable:
  jmp *real_ptrs+144(%rip)
.globl SDL_AudioStreamClear
SDL_AudioStreamClear:
  jmp *real_ptrs+152(%rip)
.globl SDL_AudioStreamFlush
SDL_AudioStreamFlush:
  jmp *real_ptrs+160(%rip)
.globl SDL_AudioStreamGet
SDL_AudioStreamGet:
  jmp *real_ptrs+168(%rip)
.globl SDL_AudioStreamPut
SDL_AudioStreamPut:
  jmp *real_ptrs+176(%rip)
.globl SDL_BuildAudioCVT
SDL_BuildAudioCVT:
  jmp *real_ptrs+184(%rip)
.globl SDL_CalculateGammaRamp
SDL_CalculateGammaRamp:
  jmp *real_ptrs+192(%rip)
.globl SDL_CaptureMouse
SDL_CaptureMouse:
  jmp *real_ptrs+200(%rip)
.globl SDL_ClearComposition
SDL_ClearComposition:
  jmp *real_ptrs+208(%rip)
.globl SDL_ClearError
SDL_ClearError:
  jmp *real_ptrs+216(%rip)
.globl SDL_ClearHints
SDL_ClearHints:
  jmp *real_ptrs+224(%rip)
.globl SDL_ClearQueuedAudio
SDL_ClearQueuedAudio:
  jmp *real_ptrs+232(%rip)
.globl SDL_CloseAudio
SDL_CloseAudio:
  jmp *real_ptrs+240(%rip)
.globl SDL_CloseAudioDevice
SDL_CloseAudioDevice:
  jmp *real_ptrs+248(%rip)
.globl SDL_ComposeCustomBlendMode
SDL_ComposeCustomBlendMode:
  jmp *real_ptrs+256(%rip)
.globl SDL_CondBroadcast
SDL_CondBroadcast:
  jmp *real_ptrs+264(%rip)
.globl SDL_CondSignal
SDL_CondSignal:
  jmp *real_ptrs+272(%rip)
.globl SDL_CondWait
SDL_CondWait:
  jmp *real_ptrs+280(%rip)
.globl SDL_CondWaitTimeout
SDL_CondWaitTimeout:
  jmp *real_ptrs+288(%rip)
.globl SDL_ConvertAudio
SDL_ConvertAudio:
  jmp *real_ptrs+296(%rip)
.globl SDL_ConvertPixels
SDL_ConvertPixels:
  jmp *real_ptrs+304(%rip)
.globl SDL_ConvertSurface
SDL_ConvertSurface:
  jmp *real_ptrs+312(%rip)
.globl SDL_ConvertSurfaceFormat
SDL_ConvertSurfaceFormat:
  jmp *real_ptrs+320(%rip)
.globl SDL_CreateColorCursor
SDL_CreateColorCursor:
  jmp *real_ptrs+328(%rip)
.globl SDL_CreateCond
SDL_CreateCond:
  jmp *real_ptrs+336(%rip)
.globl SDL_CreateCursor
SDL_CreateCursor:
  jmp *real_ptrs+344(%rip)
.globl SDL_CreateMutex
SDL_CreateMutex:
  jmp *real_ptrs+352(%rip)
.globl SDL_CreateRGBSurface
SDL_CreateRGBSurface:
  jmp *real_ptrs+360(%rip)
.globl SDL_CreateRGBSurfaceFrom
SDL_CreateRGBSurfaceFrom:
  jmp *real_ptrs+368(%rip)
.globl SDL_CreateRGBSurfaceWithFormat
SDL_CreateRGBSurfaceWithFormat:
  jmp *real_ptrs+376(%rip)
.globl SDL_CreateRGBSurfaceWithFormatFrom
SDL_CreateRGBSurfaceWithFormatFrom:
  jmp *real_ptrs+384(%rip)
.globl SDL_CreateRenderer
SDL_CreateRenderer:
  jmp *real_ptrs+392(%rip)
.globl SDL_CreateSemaphore
SDL_CreateSemaphore:
  jmp *real_ptrs+400(%rip)
.globl SDL_CreateShapedWindow
SDL_CreateShapedWindow:
  jmp *real_ptrs+408(%rip)
.globl SDL_CreateSoftwareRenderer
SDL_CreateSoftwareRenderer:
  jmp *real_ptrs+416(%rip)
.globl SDL_CreateSystemCursor
SDL_CreateSystemCursor:
  jmp *real_ptrs+424(%rip)
.globl SDL_CreateTexture
SDL_CreateTexture:
  jmp *real_ptrs+432(%rip)
.globl SDL_CreateTextureFromSurface
SDL_CreateTextureFromSurface:
  jmp *real_ptrs+440(%rip)
.globl SDL_CreateThread
SDL_CreateThread:
  jmp *real_ptrs+448(%rip)
.globl SDL_CreateThreadWithStackSize
SDL_CreateThreadWithStackSize:
  jmp *real_ptrs+456(%rip)
.globl SDL_CreateWindow
SDL_CreateWindow:
  jmp *real_ptrs+464(%rip)
.globl SDL_CreateWindowAndRenderer
SDL_CreateWindowAndRenderer:
  jmp *real_ptrs+472(%rip)
.globl SDL_CreateWindowFrom
SDL_CreateWindowFrom:
  jmp *real_ptrs+480(%rip)
.globl SDL_DXGIGetOutputInfo
SDL_DXGIGetOutputInfo:
  jmp *real_ptrs+488(%rip)
.globl SDL_DYNAPI_entry
SDL_DYNAPI_entry:
  jmp *real_ptrs+496(%rip)
.globl SDL_DelEventWatch
SDL_DelEventWatch:
  jmp *real_ptrs+504(%rip)
.globl SDL_DelHintCallback
SDL_DelHintCallback:
  jmp *real_ptrs+512(%rip)
.globl SDL_Delay
SDL_Delay:
  jmp *real_ptrs+520(%rip)
.globl SDL_DequeueAudio
SDL_DequeueAudio:
  jmp *real_ptrs+528(%rip)
.globl SDL_DestroyCond
SDL_DestroyCond:
  jmp *real_ptrs+536(%rip)
.globl SDL_DestroyMutex
SDL_DestroyMutex:
  jmp *real_ptrs+544(%rip)
.globl SDL_DestroyRenderer
SDL_DestroyRenderer:
  jmp *real_ptrs+552(%rip)
.globl SDL_DestroySemaphore
SDL_DestroySemaphore:
  jmp *real_ptrs+560(%rip)
.globl SDL_DestroyTexture
SDL_DestroyTexture:
  jmp *real_ptrs+568(%rip)
.globl SDL_DestroyWindow
SDL_DestroyWindow:
  jmp *real_ptrs+576(%rip)
.globl SDL_DestroyWindowSurface
SDL_DestroyWindowSurface:
  jmp *real_ptrs+584(%rip)
.globl SDL_DetachThread
SDL_DetachThread:
  jmp *real_ptrs+592(%rip)
.globl SDL_Direct3D9GetAdapterIndex
SDL_Direct3D9GetAdapterIndex:
  jmp *real_ptrs+600(%rip)
.globl SDL_DisableScreenSaver
SDL_DisableScreenSaver:
  jmp *real_ptrs+608(%rip)
.globl SDL_DuplicateSurface
SDL_DuplicateSurface:
  jmp *real_ptrs+616(%rip)
.globl SDL_EnableScreenSaver
SDL_EnableScreenSaver:
  jmp *real_ptrs+624(%rip)
.globl SDL_EncloseFPoints
SDL_EncloseFPoints:
  jmp *real_ptrs+632(%rip)
.globl SDL_EnclosePoints
SDL_EnclosePoints:
  jmp *real_ptrs+640(%rip)
.globl SDL_Error
SDL_Error:
  jmp *real_ptrs+648(%rip)
.globl SDL_EventState
SDL_EventState:
  jmp *real_ptrs+656(%rip)
.globl SDL_FillRect
SDL_FillRect:
  jmp *real_ptrs+664(%rip)
.globl SDL_FillRects
SDL_FillRects:
  jmp *real_ptrs+672(%rip)
.globl SDL_FilterEvents
SDL_FilterEvents:
  jmp *real_ptrs+680(%rip)
.globl SDL_FlashWindow
SDL_FlashWindow:
  jmp *real_ptrs+688(%rip)
.globl SDL_FlushEvent
SDL_FlushEvent:
  jmp *real_ptrs+696(%rip)
.globl SDL_FlushEvents
SDL_FlushEvents:
  jmp *real_ptrs+704(%rip)
.globl SDL_FreeAudioStream
SDL_FreeAudioStream:
  jmp *real_ptrs+712(%rip)
.globl SDL_FreeCursor
SDL_FreeCursor:
  jmp *real_ptrs+720(%rip)
.globl SDL_FreeFormat
SDL_FreeFormat:
  jmp *real_ptrs+728(%rip)
.globl SDL_FreePalette
SDL_FreePalette:
  jmp *real_ptrs+736(%rip)
.globl SDL_FreeRW
SDL_FreeRW:
  jmp *real_ptrs+744(%rip)
.globl SDL_FreeSurface
SDL_FreeSurface:
  jmp *real_ptrs+752(%rip)
.globl SDL_FreeWAV
SDL_FreeWAV:
  jmp *real_ptrs+760(%rip)
.globl SDL_GL_BindTexture
SDL_GL_BindTexture:
  jmp *real_ptrs+768(%rip)
.globl SDL_GL_CreateContext
SDL_GL_CreateContext:
  jmp *real_ptrs+776(%rip)
.globl SDL_GL_DeleteContext
SDL_GL_DeleteContext:
  jmp *real_ptrs+784(%rip)
.globl SDL_GL_ExtensionSupported
SDL_GL_ExtensionSupported:
  jmp *real_ptrs+792(%rip)
.globl SDL_GL_GetAttribute
SDL_GL_GetAttribute:
  jmp *real_ptrs+800(%rip)
.globl SDL_GL_GetCurrentContext
SDL_GL_GetCurrentContext:
  jmp *real_ptrs+808(%rip)
.globl SDL_GL_GetCurrentWindow
SDL_GL_GetCurrentWindow:
  jmp *real_ptrs+816(%rip)
.globl SDL_GL_GetDrawableSize
SDL_GL_GetDrawableSize:
  jmp *real_ptrs+824(%rip)
.globl SDL_GL_GetProcAddress
SDL_GL_GetProcAddress:
  jmp *real_ptrs+832(%rip)
.globl SDL_GL_GetSwapInterval
SDL_GL_GetSwapInterval:
  jmp *real_ptrs+840(%rip)
.globl SDL_GL_LoadLibrary
SDL_GL_LoadLibrary:
  jmp *real_ptrs+848(%rip)
.globl SDL_GL_MakeCurrent
SDL_GL_MakeCurrent:
  jmp *real_ptrs+856(%rip)
.globl SDL_GL_ResetAttributes
SDL_GL_ResetAttributes:
  jmp *real_ptrs+864(%rip)
.globl SDL_GL_SetAttribute
SDL_GL_SetAttribute:
  jmp *real_ptrs+872(%rip)
.globl SDL_GL_SetSwapInterval
SDL_GL_SetSwapInterval:
  jmp *real_ptrs+880(%rip)
.globl SDL_GL_SwapWindow
SDL_GL_SwapWindow:
  jmp *real_ptrs+888(%rip)
.globl SDL_GL_UnbindTexture
SDL_GL_UnbindTexture:
  jmp *real_ptrs+896(%rip)
.globl SDL_GL_UnloadLibrary
SDL_GL_UnloadLibrary:
  jmp *real_ptrs+904(%rip)
.globl SDL_GUIDFromString
SDL_GUIDFromString:
  jmp *real_ptrs+912(%rip)
.globl SDL_GUIDToString
SDL_GUIDToString:
  jmp *real_ptrs+920(%rip)
.globl SDL_GameControllerAddMapping
SDL_GameControllerAddMapping:
  jmp *real_ptrs+928(%rip)
.globl SDL_GameControllerAddMappingsFromRW
SDL_GameControllerAddMappingsFromRW:
  jmp *real_ptrs+936(%rip)
.globl SDL_GameControllerClose
SDL_GameControllerClose:
  jmp *real_ptrs+944(%rip)
.globl SDL_GameControllerEventState
SDL_GameControllerEventState:
  jmp *real_ptrs+952(%rip)
.globl SDL_GameControllerFromInstanceID
SDL_GameControllerFromInstanceID:
  jmp *real_ptrs+960(%rip)
.globl SDL_GameControllerFromPlayerIndex
SDL_GameControllerFromPlayerIndex:
  jmp *real_ptrs+968(%rip)
.globl SDL_GameControllerGetAppleSFSymbolsNameForAxis
SDL_GameControllerGetAppleSFSymbolsNameForAxis:
  jmp *real_ptrs+976(%rip)
.globl SDL_GameControllerGetAppleSFSymbolsNameForButton
SDL_GameControllerGetAppleSFSymbolsNameForButton:
  jmp *real_ptrs+984(%rip)
.globl SDL_GameControllerGetAttached
SDL_GameControllerGetAttached:
  jmp *real_ptrs+992(%rip)
.globl SDL_GameControllerGetAxis
SDL_GameControllerGetAxis:
  jmp *real_ptrs+1000(%rip)
.globl SDL_GameControllerGetAxisFromString
SDL_GameControllerGetAxisFromString:
  jmp *real_ptrs+1008(%rip)
.globl SDL_GameControllerGetBindForAxis
SDL_GameControllerGetBindForAxis:
  jmp *real_ptrs+1016(%rip)
.globl SDL_GameControllerGetBindForButton
SDL_GameControllerGetBindForButton:
  jmp *real_ptrs+1024(%rip)
.globl SDL_GameControllerGetButton
SDL_GameControllerGetButton:
  jmp *real_ptrs+1032(%rip)
.globl SDL_GameControllerGetButtonFromString
SDL_GameControllerGetButtonFromString:
  jmp *real_ptrs+1040(%rip)
.globl SDL_GameControllerGetFirmwareVersion
SDL_GameControllerGetFirmwareVersion:
  jmp *real_ptrs+1048(%rip)
.globl SDL_GameControllerGetJoystick
SDL_GameControllerGetJoystick:
  jmp *real_ptrs+1056(%rip)
.globl SDL_GameControllerGetNumTouchpadFingers
SDL_GameControllerGetNumTouchpadFingers:
  jmp *real_ptrs+1064(%rip)
.globl SDL_GameControllerGetNumTouchpads
SDL_GameControllerGetNumTouchpads:
  jmp *real_ptrs+1072(%rip)
.globl SDL_GameControllerGetPlayerIndex
SDL_GameControllerGetPlayerIndex:
  jmp *real_ptrs+1080(%rip)
.globl SDL_GameControllerGetProduct
SDL_GameControllerGetProduct:
  jmp *real_ptrs+1088(%rip)
.globl SDL_GameControllerGetProductVersion
SDL_GameControllerGetProductVersion:
  jmp *real_ptrs+1096(%rip)
.globl SDL_GameControllerGetSensorData
SDL_GameControllerGetSensorData:
  jmp *real_ptrs+1104(%rip)
.globl SDL_GameControllerGetSensorDataRate
SDL_GameControllerGetSensorDataRate:
  jmp *real_ptrs+1112(%rip)
.globl SDL_GameControllerGetSensorDataWithTimestamp
SDL_GameControllerGetSensorDataWithTimestamp:
  jmp *real_ptrs+1120(%rip)
.globl SDL_GameControllerGetSerial
SDL_GameControllerGetSerial:
  jmp *real_ptrs+1128(%rip)
.globl SDL_GameControllerGetSteamHandle
SDL_GameControllerGetSteamHandle:
  jmp *real_ptrs+1136(%rip)
.globl SDL_GameControllerGetStringForAxis
SDL_GameControllerGetStringForAxis:
  jmp *real_ptrs+1144(%rip)
.globl SDL_GameControllerGetStringForButton
SDL_GameControllerGetStringForButton:
  jmp *real_ptrs+1152(%rip)
.globl SDL_GameControllerGetTouchpadFinger
SDL_GameControllerGetTouchpadFinger:
  jmp *real_ptrs+1160(%rip)
.globl SDL_GameControllerGetType
SDL_GameControllerGetType:
  jmp *real_ptrs+1168(%rip)
.globl SDL_GameControllerGetVendor
SDL_GameControllerGetVendor:
  jmp *real_ptrs+1176(%rip)
.globl SDL_GameControllerHasAxis
SDL_GameControllerHasAxis:
  jmp *real_ptrs+1184(%rip)
.globl SDL_GameControllerHasButton
SDL_GameControllerHasButton:
  jmp *real_ptrs+1192(%rip)
.globl SDL_GameControllerHasLED
SDL_GameControllerHasLED:
  jmp *real_ptrs+1200(%rip)
.globl SDL_GameControllerHasRumble
SDL_GameControllerHasRumble:
  jmp *real_ptrs+1208(%rip)
.globl SDL_GameControllerHasRumbleTriggers
SDL_GameControllerHasRumbleTriggers:
  jmp *real_ptrs+1216(%rip)
.globl SDL_GameControllerHasSensor
SDL_GameControllerHasSensor:
  jmp *real_ptrs+1224(%rip)
.globl SDL_GameControllerIsSensorEnabled
SDL_GameControllerIsSensorEnabled:
  jmp *real_ptrs+1232(%rip)
.globl SDL_GameControllerMapping
SDL_GameControllerMapping:
  jmp *real_ptrs+1240(%rip)
.globl SDL_GameControllerMappingForDeviceIndex
SDL_GameControllerMappingForDeviceIndex:
  jmp *real_ptrs+1248(%rip)
.globl SDL_GameControllerMappingForGUID
SDL_GameControllerMappingForGUID:
  jmp *real_ptrs+1256(%rip)
.globl SDL_GameControllerMappingForIndex
SDL_GameControllerMappingForIndex:
  jmp *real_ptrs+1264(%rip)
.globl SDL_GameControllerName
SDL_GameControllerName:
  jmp *real_ptrs+1272(%rip)
.globl SDL_GameControllerNameForIndex
SDL_GameControllerNameForIndex:
  jmp *real_ptrs+1280(%rip)
.globl SDL_GameControllerNumMappings
SDL_GameControllerNumMappings:
  jmp *real_ptrs+1288(%rip)
.globl SDL_GameControllerOpen
SDL_GameControllerOpen:
  jmp *real_ptrs+1296(%rip)
.globl SDL_GameControllerPath
SDL_GameControllerPath:
  jmp *real_ptrs+1304(%rip)
.globl SDL_GameControllerPathForIndex
SDL_GameControllerPathForIndex:
  jmp *real_ptrs+1312(%rip)
.globl SDL_GameControllerRumble
SDL_GameControllerRumble:
  jmp *real_ptrs+1320(%rip)
.globl SDL_GameControllerRumbleTriggers
SDL_GameControllerRumbleTriggers:
  jmp *real_ptrs+1328(%rip)
.globl SDL_GameControllerSendEffect
SDL_GameControllerSendEffect:
  jmp *real_ptrs+1336(%rip)
.globl SDL_GameControllerSetLED
SDL_GameControllerSetLED:
  jmp *real_ptrs+1344(%rip)
.globl SDL_GameControllerSetPlayerIndex
SDL_GameControllerSetPlayerIndex:
  jmp *real_ptrs+1352(%rip)
.globl SDL_GameControllerSetSensorEnabled
SDL_GameControllerSetSensorEnabled:
  jmp *real_ptrs+1360(%rip)
.globl SDL_GameControllerTypeForIndex
SDL_GameControllerTypeForIndex:
  jmp *real_ptrs+1368(%rip)
.globl SDL_GameControllerUpdate
SDL_GameControllerUpdate:
  jmp *real_ptrs+1376(%rip)
.globl SDL_GetAssertionHandler
SDL_GetAssertionHandler:
  jmp *real_ptrs+1384(%rip)
.globl SDL_GetAssertionReport
SDL_GetAssertionReport:
  jmp *real_ptrs+1392(%rip)
.globl SDL_GetAudioDeviceName
SDL_GetAudioDeviceName:
  jmp *real_ptrs+1400(%rip)
.globl SDL_GetAudioDeviceSpec
SDL_GetAudioDeviceSpec:
  jmp *real_ptrs+1408(%rip)
.globl SDL_GetAudioDeviceStatus
SDL_GetAudioDeviceStatus:
  jmp *real_ptrs+1416(%rip)
.globl SDL_GetAudioDriver
SDL_GetAudioDriver:
  jmp *real_ptrs+1424(%rip)
.globl SDL_GetAudioStatus
SDL_GetAudioStatus:
  jmp *real_ptrs+1432(%rip)
.globl SDL_GetBasePath
SDL_GetBasePath:
  jmp *real_ptrs+1440(%rip)
.globl SDL_GetCPUCacheLineSize
SDL_GetCPUCacheLineSize:
  jmp *real_ptrs+1448(%rip)
.globl SDL_GetCPUCount
SDL_GetCPUCount:
  jmp *real_ptrs+1456(%rip)
.globl SDL_GetClipRect
SDL_GetClipRect:
  jmp *real_ptrs+1464(%rip)
.globl SDL_GetClipboardText
SDL_GetClipboardText:
  jmp *real_ptrs+1472(%rip)
.globl SDL_GetClosestDisplayMode
SDL_GetClosestDisplayMode:
  jmp *real_ptrs+1480(%rip)
.globl SDL_GetColorKey
SDL_GetColorKey:
  jmp *real_ptrs+1488(%rip)
.globl SDL_GetCurrentAudioDriver
SDL_GetCurrentAudioDriver:
  jmp *real_ptrs+1496(%rip)
.globl SDL_GetCurrentDisplayMode
SDL_GetCurrentDisplayMode:
  jmp *real_ptrs+1504(%rip)
.globl SDL_GetCurrentVideoDriver
SDL_GetCurrentVideoDriver:
  jmp *real_ptrs+1512(%rip)
.globl SDL_GetCursor
SDL_GetCursor:
  jmp *real_ptrs+1520(%rip)
.globl SDL_GetDefaultAssertionHandler
SDL_GetDefaultAssertionHandler:
  jmp *real_ptrs+1528(%rip)
.globl SDL_GetDefaultAudioInfo
SDL_GetDefaultAudioInfo:
  jmp *real_ptrs+1536(%rip)
.globl SDL_GetDefaultCursor
SDL_GetDefaultCursor:
  jmp *real_ptrs+1544(%rip)
.globl SDL_GetDesktopDisplayMode
SDL_GetDesktopDisplayMode:
  jmp *real_ptrs+1552(%rip)
.globl SDL_GetDisplayBounds
SDL_GetDisplayBounds:
  jmp *real_ptrs+1560(%rip)
.globl SDL_GetDisplayDPI
SDL_GetDisplayDPI:
  jmp *real_ptrs+1568(%rip)
.globl SDL_GetDisplayMode
SDL_GetDisplayMode:
  jmp *real_ptrs+1576(%rip)
.globl SDL_GetDisplayName
SDL_GetDisplayName:
  jmp *real_ptrs+1584(%rip)
.globl SDL_GetDisplayOrientation
SDL_GetDisplayOrientation:
  jmp *real_ptrs+1592(%rip)
.globl SDL_GetDisplayUsableBounds
SDL_GetDisplayUsableBounds:
  jmp *real_ptrs+1600(%rip)
.globl SDL_GetError
SDL_GetError:
  jmp *real_ptrs+1608(%rip)
.globl SDL_GetErrorMsg
SDL_GetErrorMsg:
  jmp *real_ptrs+1616(%rip)
.globl SDL_GetEventFilter
SDL_GetEventFilter:
  jmp *real_ptrs+1624(%rip)
.globl SDL_GetGlobalMouseState
SDL_GetGlobalMouseState:
  jmp *real_ptrs+1632(%rip)
.globl SDL_GetGrabbedWindow
SDL_GetGrabbedWindow:
  jmp *real_ptrs+1640(%rip)
.globl SDL_GetHint
SDL_GetHint:
  jmp *real_ptrs+1648(%rip)
.globl SDL_GetHintBoolean
SDL_GetHintBoolean:
  jmp *real_ptrs+1656(%rip)
.globl SDL_GetJoystickGUIDInfo
SDL_GetJoystickGUIDInfo:
  jmp *real_ptrs+1664(%rip)
.globl SDL_GetKeyFromName
SDL_GetKeyFromName:
  jmp *real_ptrs+1672(%rip)
.globl SDL_GetKeyFromScancode
SDL_GetKeyFromScancode:
  jmp *real_ptrs+1680(%rip)
.globl SDL_GetKeyName
SDL_GetKeyName:
  jmp *real_ptrs+1688(%rip)
.globl SDL_GetKeyboardFocus
SDL_GetKeyboardFocus:
  jmp *real_ptrs+1696(%rip)
.globl SDL_GetKeyboardState
SDL_GetKeyboardState:
  jmp *real_ptrs+1704(%rip)
.globl SDL_GetMemoryFunctions
SDL_GetMemoryFunctions:
  jmp *real_ptrs+1712(%rip)
.globl SDL_GetModState
SDL_GetModState:
  jmp *real_ptrs+1720(%rip)
.globl SDL_GetMouseFocus
SDL_GetMouseFocus:
  jmp *real_ptrs+1728(%rip)
.globl SDL_GetMouseState
SDL_GetMouseState:
  jmp *real_ptrs+1736(%rip)
.globl SDL_GetNumAllocations
SDL_GetNumAllocations:
  jmp *real_ptrs+1744(%rip)
.globl SDL_GetNumAudioDevices
SDL_GetNumAudioDevices:
  jmp *real_ptrs+1752(%rip)
.globl SDL_GetNumAudioDrivers
SDL_GetNumAudioDrivers:
  jmp *real_ptrs+1760(%rip)
.globl SDL_GetNumDisplayModes
SDL_GetNumDisplayModes:
  jmp *real_ptrs+1768(%rip)
.globl SDL_GetNumRenderDrivers
SDL_GetNumRenderDrivers:
  jmp *real_ptrs+1776(%rip)
.globl SDL_GetNumTouchDevices
SDL_GetNumTouchDevices:
  jmp *real_ptrs+1784(%rip)
.globl SDL_GetNumTouchFingers
SDL_GetNumTouchFingers:
  jmp *real_ptrs+1792(%rip)
.globl SDL_GetNumVideoDisplays
SDL_GetNumVideoDisplays:
  jmp *real_ptrs+1800(%rip)
.globl SDL_GetNumVideoDrivers
SDL_GetNumVideoDrivers:
  jmp *real_ptrs+1808(%rip)
.globl SDL_GetOriginalMemoryFunctions
SDL_GetOriginalMemoryFunctions:
  jmp *real_ptrs+1816(%rip)
.globl SDL_GetPerformanceCounter
SDL_GetPerformanceCounter:
  jmp *real_ptrs+1824(%rip)
.globl SDL_GetPerformanceFrequency
SDL_GetPerformanceFrequency:
  jmp *real_ptrs+1832(%rip)
.globl SDL_GetPixelFormatName
SDL_GetPixelFormatName:
  jmp *real_ptrs+1840(%rip)
.globl SDL_GetPlatform
SDL_GetPlatform:
  jmp *real_ptrs+1848(%rip)
.globl SDL_GetPointDisplayIndex
SDL_GetPointDisplayIndex:
  jmp *real_ptrs+1856(%rip)
.globl SDL_GetPowerInfo
SDL_GetPowerInfo:
  jmp *real_ptrs+1864(%rip)
.globl SDL_GetPrefPath
SDL_GetPrefPath:
  jmp *real_ptrs+1872(%rip)
.globl SDL_GetPreferredLocales
SDL_GetPreferredLocales:
  jmp *real_ptrs+1880(%rip)
.globl SDL_GetPrimarySelectionText
SDL_GetPrimarySelectionText:
  jmp *real_ptrs+1888(%rip)
.globl SDL_GetQueuedAudioSize
SDL_GetQueuedAudioSize:
  jmp *real_ptrs+1896(%rip)
.globl SDL_GetRGB
SDL_GetRGB:
  jmp *real_ptrs+1904(%rip)
.globl SDL_GetRGBA
SDL_GetRGBA:
  jmp *real_ptrs+1912(%rip)
.globl SDL_GetRectDisplayIndex
SDL_GetRectDisplayIndex:
  jmp *real_ptrs+1920(%rip)
.globl SDL_GetRelativeMouseMode
SDL_GetRelativeMouseMode:
  jmp *real_ptrs+1928(%rip)
.globl SDL_GetRelativeMouseState
SDL_GetRelativeMouseState:
  jmp *real_ptrs+1936(%rip)
.globl SDL_GetRenderDrawBlendMode
SDL_GetRenderDrawBlendMode:
  jmp *real_ptrs+1944(%rip)
.globl SDL_GetRenderDrawColor
SDL_GetRenderDrawColor:
  jmp *real_ptrs+1952(%rip)
.globl SDL_GetRenderDriverInfo
SDL_GetRenderDriverInfo:
  jmp *real_ptrs+1960(%rip)
.globl SDL_GetRenderTarget
SDL_GetRenderTarget:
  jmp *real_ptrs+1968(%rip)
.globl SDL_GetRenderer
SDL_GetRenderer:
  jmp *real_ptrs+1976(%rip)
.globl SDL_GetRendererInfo
SDL_GetRendererInfo:
  jmp *real_ptrs+1984(%rip)
.globl SDL_GetRendererOutputSize
SDL_GetRendererOutputSize:
  jmp *real_ptrs+1992(%rip)
.globl SDL_GetRevision
SDL_GetRevision:
  jmp *real_ptrs+2000(%rip)
.globl SDL_GetRevisionNumber
SDL_GetRevisionNumber:
  jmp *real_ptrs+2008(%rip)
.globl SDL_GetScancodeFromKey
SDL_GetScancodeFromKey:
  jmp *real_ptrs+2016(%rip)
.globl SDL_GetScancodeFromName
SDL_GetScancodeFromName:
  jmp *real_ptrs+2024(%rip)
.globl SDL_GetScancodeName
SDL_GetScancodeName:
  jmp *real_ptrs+2032(%rip)
.globl SDL_GetShapedWindowMode
SDL_GetShapedWindowMode:
  jmp *real_ptrs+2040(%rip)
.globl SDL_GetSurfaceAlphaMod
SDL_GetSurfaceAlphaMod:
  jmp *real_ptrs+2048(%rip)
.globl SDL_GetSurfaceBlendMode
SDL_GetSurfaceBlendMode:
  jmp *real_ptrs+2056(%rip)
.globl SDL_GetSurfaceColorMod
SDL_GetSurfaceColorMod:
  jmp *real_ptrs+2064(%rip)
.globl SDL_GetSystemRAM
SDL_GetSystemRAM:
  jmp *real_ptrs+2072(%rip)
.globl SDL_GetTextureAlphaMod
SDL_GetTextureAlphaMod:
  jmp *real_ptrs+2080(%rip)
.globl SDL_GetTextureBlendMode
SDL_GetTextureBlendMode:
  jmp *real_ptrs+2088(%rip)
.globl SDL_GetTextureColorMod
SDL_GetTextureColorMod:
  jmp *real_ptrs+2096(%rip)
.globl SDL_GetTextureScaleMode
SDL_GetTextureScaleMode:
  jmp *real_ptrs+2104(%rip)
.globl SDL_GetTextureUserData
SDL_GetTextureUserData:
  jmp *real_ptrs+2112(%rip)
.globl SDL_GetThreadID
SDL_GetThreadID:
  jmp *real_ptrs+2120(%rip)
.globl SDL_GetThreadName
SDL_GetThreadName:
  jmp *real_ptrs+2128(%rip)
.globl SDL_GetTicks
SDL_GetTicks:
  jmp *real_ptrs+2136(%rip)
.globl SDL_GetTicks64
SDL_GetTicks64:
  jmp *real_ptrs+2144(%rip)
.globl SDL_GetTouchDevice
SDL_GetTouchDevice:
  jmp *real_ptrs+2152(%rip)
.globl SDL_GetTouchDeviceType
SDL_GetTouchDeviceType:
  jmp *real_ptrs+2160(%rip)
.globl SDL_GetTouchFinger
SDL_GetTouchFinger:
  jmp *real_ptrs+2168(%rip)
.globl SDL_GetTouchName
SDL_GetTouchName:
  jmp *real_ptrs+2176(%rip)
.globl SDL_GetVersion
SDL_GetVersion:
  jmp *real_ptrs+2184(%rip)
.globl SDL_GetVideoDriver
SDL_GetVideoDriver:
  jmp *real_ptrs+2192(%rip)
.globl SDL_GetWindowBordersSize
SDL_GetWindowBordersSize:
  jmp *real_ptrs+2200(%rip)
.globl SDL_GetWindowBrightness
SDL_GetWindowBrightness:
  jmp *real_ptrs+2208(%rip)
.globl SDL_GetWindowData
SDL_GetWindowData:
  jmp *real_ptrs+2216(%rip)
.globl SDL_GetWindowDisplayIndex
SDL_GetWindowDisplayIndex:
  jmp *real_ptrs+2224(%rip)
.globl SDL_GetWindowDisplayMode
SDL_GetWindowDisplayMode:
  jmp *real_ptrs+2232(%rip)
.globl SDL_GetWindowFlags
SDL_GetWindowFlags:
  jmp *real_ptrs+2240(%rip)
.globl SDL_GetWindowFromID
SDL_GetWindowFromID:
  jmp *real_ptrs+2248(%rip)
.globl SDL_GetWindowGammaRamp
SDL_GetWindowGammaRamp:
  jmp *real_ptrs+2256(%rip)
.globl SDL_GetWindowGrab
SDL_GetWindowGrab:
  jmp *real_ptrs+2264(%rip)
.globl SDL_GetWindowICCProfile
SDL_GetWindowICCProfile:
  jmp *real_ptrs+2272(%rip)
.globl SDL_GetWindowID
SDL_GetWindowID:
  jmp *real_ptrs+2280(%rip)
.globl SDL_GetWindowKeyboardGrab
SDL_GetWindowKeyboardGrab:
  jmp *real_ptrs+2288(%rip)
.globl SDL_GetWindowMaximumSize
SDL_GetWindowMaximumSize:
  jmp *real_ptrs+2296(%rip)
.globl SDL_GetWindowMinimumSize
SDL_GetWindowMinimumSize:
  jmp *real_ptrs+2304(%rip)
.globl SDL_GetWindowMouseGrab
SDL_GetWindowMouseGrab:
  jmp *real_ptrs+2312(%rip)
.globl SDL_GetWindowMouseRect
SDL_GetWindowMouseRect:
  jmp *real_ptrs+2320(%rip)
.globl SDL_GetWindowOpacity
SDL_GetWindowOpacity:
  jmp *real_ptrs+2328(%rip)
.globl SDL_GetWindowPixelFormat
SDL_GetWindowPixelFormat:
  jmp *real_ptrs+2336(%rip)
.globl SDL_GetWindowPosition
SDL_GetWindowPosition:
  jmp *real_ptrs+2344(%rip)
.globl SDL_GetWindowSize
SDL_GetWindowSize:
  jmp *real_ptrs+2352(%rip)
.globl SDL_GetWindowSizeInPixels
SDL_GetWindowSizeInPixels:
  jmp *real_ptrs+2360(%rip)
.globl SDL_GetWindowSurface
SDL_GetWindowSurface:
  jmp *real_ptrs+2368(%rip)
.globl SDL_GetWindowTitle
SDL_GetWindowTitle:
  jmp *real_ptrs+2376(%rip)
.globl SDL_GetWindowWMInfo
SDL_GetWindowWMInfo:
  jmp *real_ptrs+2384(%rip)
.globl SDL_GetYUVConversionMode
SDL_GetYUVConversionMode:
  jmp *real_ptrs+2392(%rip)
.globl SDL_GetYUVConversionModeForResolution
SDL_GetYUVConversionModeForResolution:
  jmp *real_ptrs+2400(%rip)
.globl SDL_HapticEffectSupported
SDL_HapticEffectSupported:
  jmp *real_ptrs+2424(%rip)
.globl SDL_HapticIndex
SDL_HapticIndex:
  jmp *real_ptrs+2440(%rip)
.globl SDL_HapticName
SDL_HapticName:
  jmp *real_ptrs+2448(%rip)
.globl SDL_HapticNumAxes
SDL_HapticNumAxes:
  jmp *real_ptrs+2464(%rip)
.globl SDL_HapticNumEffects
SDL_HapticNumEffects:
  jmp *real_ptrs+2472(%rip)
.globl SDL_HapticNumEffectsPlaying
SDL_HapticNumEffectsPlaying:
  jmp *real_ptrs+2480(%rip)
.globl SDL_HapticOpenFromMouse
SDL_HapticOpenFromMouse:
  jmp *real_ptrs+2504(%rip)
.globl SDL_HapticOpened
SDL_HapticOpened:
  jmp *real_ptrs+2512(%rip)
.globl SDL_HapticPause
SDL_HapticPause:
  jmp *real_ptrs+2520(%rip)
.globl SDL_HapticQuery
SDL_HapticQuery:
  jmp *real_ptrs+2528(%rip)
.globl SDL_HapticRumbleInit
SDL_HapticRumbleInit:
  jmp *real_ptrs+2536(%rip)
.globl SDL_HapticRumblePlay
SDL_HapticRumblePlay:
  jmp *real_ptrs+2544(%rip)
.globl SDL_HapticRumbleStop
SDL_HapticRumbleStop:
  jmp *real_ptrs+2552(%rip)
.globl SDL_HapticRumbleSupported
SDL_HapticRumbleSupported:
  jmp *real_ptrs+2560(%rip)
.globl SDL_HapticSetAutocenter
SDL_HapticSetAutocenter:
  jmp *real_ptrs+2576(%rip)
.globl SDL_HapticUnpause
SDL_HapticUnpause:
  jmp *real_ptrs+2608(%rip)
.globl SDL_Has3DNow
SDL_Has3DNow:
  jmp *real_ptrs+2624(%rip)
.globl SDL_HasARMSIMD
SDL_HasARMSIMD:
  jmp *real_ptrs+2632(%rip)
.globl SDL_HasAVX
SDL_HasAVX:
  jmp *real_ptrs+2640(%rip)
.globl SDL_HasAVX2
SDL_HasAVX2:
  jmp *real_ptrs+2648(%rip)
.globl SDL_HasAVX512F
SDL_HasAVX512F:
  jmp *real_ptrs+2656(%rip)
.globl SDL_HasAltiVec
SDL_HasAltiVec:
  jmp *real_ptrs+2664(%rip)
.globl SDL_HasClipboardText
SDL_HasClipboardText:
  jmp *real_ptrs+2672(%rip)
.globl SDL_HasColorKey
SDL_HasColorKey:
  jmp *real_ptrs+2680(%rip)
.globl SDL_HasEvent
SDL_HasEvent:
  jmp *real_ptrs+2688(%rip)
.globl SDL_HasEvents
SDL_HasEvents:
  jmp *real_ptrs+2696(%rip)
.globl SDL_HasIntersection
SDL_HasIntersection:
  jmp *real_ptrs+2704(%rip)
.globl SDL_HasIntersectionF
SDL_HasIntersectionF:
  jmp *real_ptrs+2712(%rip)
.globl SDL_HasLASX
SDL_HasLASX:
  jmp *real_ptrs+2720(%rip)
.globl SDL_HasLSX
SDL_HasLSX:
  jmp *real_ptrs+2728(%rip)
.globl SDL_HasMMX
SDL_HasMMX:
  jmp *real_ptrs+2736(%rip)
.globl SDL_HasNEON
SDL_HasNEON:
  jmp *real_ptrs+2744(%rip)
.globl SDL_HasPrimarySelectionText
SDL_HasPrimarySelectionText:
  jmp *real_ptrs+2752(%rip)
.globl SDL_HasRDTSC
SDL_HasRDTSC:
  jmp *real_ptrs+2760(%rip)
.globl SDL_HasSSE
SDL_HasSSE:
  jmp *real_ptrs+2768(%rip)
.globl SDL_HasSSE2
SDL_HasSSE2:
  jmp *real_ptrs+2776(%rip)
.globl SDL_HasSSE3
SDL_HasSSE3:
  jmp *real_ptrs+2784(%rip)
.globl SDL_HasSSE41
SDL_HasSSE41:
  jmp *real_ptrs+2792(%rip)
.globl SDL_HasSSE42
SDL_HasSSE42:
  jmp *real_ptrs+2800(%rip)
.globl SDL_HasScreenKeyboardSupport
SDL_HasScreenKeyboardSupport:
  jmp *real_ptrs+2808(%rip)
.globl SDL_HasSurfaceRLE
SDL_HasSurfaceRLE:
  jmp *real_ptrs+2816(%rip)
.globl SDL_HasWindowSurface
SDL_HasWindowSurface:
  jmp *real_ptrs+2824(%rip)
.globl SDL_HideWindow
SDL_HideWindow:
  jmp *real_ptrs+2832(%rip)
.globl SDL_Init
SDL_Init:
  jmp *real_ptrs+2840(%rip)
.globl SDL_InitSubSystem
SDL_InitSubSystem:
  jmp *real_ptrs+2848(%rip)
.globl SDL_IntersectFRect
SDL_IntersectFRect:
  jmp *real_ptrs+2856(%rip)
.globl SDL_IntersectFRectAndLine
SDL_IntersectFRectAndLine:
  jmp *real_ptrs+2864(%rip)
.globl SDL_IntersectRect
SDL_IntersectRect:
  jmp *real_ptrs+2872(%rip)
.globl SDL_IntersectRectAndLine
SDL_IntersectRectAndLine:
  jmp *real_ptrs+2880(%rip)
.globl SDL_IsGameController
SDL_IsGameController:
  jmp *real_ptrs+2888(%rip)
.globl SDL_IsScreenKeyboardShown
SDL_IsScreenKeyboardShown:
  jmp *real_ptrs+2896(%rip)
.globl SDL_IsScreenSaverEnabled
SDL_IsScreenSaverEnabled:
  jmp *real_ptrs+2904(%rip)
.globl SDL_IsShapedWindow
SDL_IsShapedWindow:
  jmp *real_ptrs+2912(%rip)
.globl SDL_IsTablet
SDL_IsTablet:
  jmp *real_ptrs+2920(%rip)
.globl SDL_IsTextInputActive
SDL_IsTextInputActive:
  jmp *real_ptrs+2928(%rip)
.globl SDL_IsTextInputShown
SDL_IsTextInputShown:
  jmp *real_ptrs+2936(%rip)
.globl SDL_JoystickAttachVirtual
SDL_JoystickAttachVirtual:
  jmp *real_ptrs+2944(%rip)
.globl SDL_JoystickAttachVirtualEx
SDL_JoystickAttachVirtualEx:
  jmp *real_ptrs+2952(%rip)
.globl SDL_JoystickClose
SDL_JoystickClose:
  jmp *real_ptrs+2960(%rip)
.globl SDL_JoystickCurrentPowerLevel
SDL_JoystickCurrentPowerLevel:
  jmp *real_ptrs+2968(%rip)
.globl SDL_JoystickDetachVirtual
SDL_JoystickDetachVirtual:
  jmp *real_ptrs+2976(%rip)
.globl SDL_JoystickEventState
SDL_JoystickEventState:
  jmp *real_ptrs+2984(%rip)
.globl SDL_JoystickFromInstanceID
SDL_JoystickFromInstanceID:
  jmp *real_ptrs+2992(%rip)
.globl SDL_JoystickFromPlayerIndex
SDL_JoystickFromPlayerIndex:
  jmp *real_ptrs+3000(%rip)
.globl SDL_JoystickGetAttached
SDL_JoystickGetAttached:
  jmp *real_ptrs+3008(%rip)
.globl SDL_JoystickGetAxis
SDL_JoystickGetAxis:
  jmp *real_ptrs+3016(%rip)
.globl SDL_JoystickGetAxisInitialState
SDL_JoystickGetAxisInitialState:
  jmp *real_ptrs+3024(%rip)
.globl SDL_JoystickGetBall
SDL_JoystickGetBall:
  jmp *real_ptrs+3032(%rip)
.globl SDL_JoystickGetButton
SDL_JoystickGetButton:
  jmp *real_ptrs+3040(%rip)
.globl SDL_JoystickGetDeviceGUID
SDL_JoystickGetDeviceGUID:
  jmp *real_ptrs+3048(%rip)
.globl SDL_JoystickGetDeviceInstanceID
SDL_JoystickGetDeviceInstanceID:
  jmp *real_ptrs+3056(%rip)
.globl SDL_JoystickGetDevicePlayerIndex
SDL_JoystickGetDevicePlayerIndex:
  jmp *real_ptrs+3064(%rip)
.globl SDL_JoystickGetDeviceProductVersion
SDL_JoystickGetDeviceProductVersion:
  jmp *real_ptrs+3080(%rip)
.globl SDL_JoystickGetDeviceType
SDL_JoystickGetDeviceType:
  jmp *real_ptrs+3088(%rip)
.globl SDL_JoystickGetFirmwareVersion
SDL_JoystickGetFirmwareVersion:
  jmp *real_ptrs+3104(%rip)
.globl SDL_JoystickGetGUID
SDL_JoystickGetGUID:
  jmp *real_ptrs+3112(%rip)
.globl SDL_JoystickGetGUIDFromString
SDL_JoystickGetGUIDFromString:
  jmp *real_ptrs+3120(%rip)
.globl SDL_JoystickGetGUIDString
SDL_JoystickGetGUIDString:
  jmp *real_ptrs+3128(%rip)
.globl SDL_JoystickGetHat
SDL_JoystickGetHat:
  jmp *real_ptrs+3136(%rip)
.globl SDL_JoystickGetPlayerIndex
SDL_JoystickGetPlayerIndex:
  jmp *real_ptrs+3144(%rip)
.globl SDL_JoystickGetProductVersion
SDL_JoystickGetProductVersion:
  jmp *real_ptrs+3160(%rip)
.globl SDL_JoystickGetSerial
SDL_JoystickGetSerial:
  jmp *real_ptrs+3168(%rip)
.globl SDL_JoystickGetType
SDL_JoystickGetType:
  jmp *real_ptrs+3176(%rip)
.globl SDL_JoystickHasLED
SDL_JoystickHasLED:
  jmp *real_ptrs+3192(%rip)
.globl SDL_JoystickHasRumble
SDL_JoystickHasRumble:
  jmp *real_ptrs+3200(%rip)
.globl SDL_JoystickHasRumbleTriggers
SDL_JoystickHasRumbleTriggers:
  jmp *real_ptrs+3208(%rip)
.globl SDL_JoystickInstanceID
SDL_JoystickInstanceID:
  jmp *real_ptrs+3216(%rip)
.globl SDL_JoystickIsHaptic
SDL_JoystickIsHaptic:
  jmp *real_ptrs+3224(%rip)
.globl SDL_JoystickIsVirtual
SDL_JoystickIsVirtual:
  jmp *real_ptrs+3232(%rip)
.globl SDL_JoystickName
SDL_JoystickName:
  jmp *real_ptrs+3240(%rip)
.globl SDL_JoystickNameForIndex
SDL_JoystickNameForIndex:
  jmp *real_ptrs+3248(%rip)
.globl SDL_JoystickNumAxes
SDL_JoystickNumAxes:
  jmp *real_ptrs+3256(%rip)
.globl SDL_JoystickNumBalls
SDL_JoystickNumBalls:
  jmp *real_ptrs+3264(%rip)
.globl SDL_JoystickNumButtons
SDL_JoystickNumButtons:
  jmp *real_ptrs+3272(%rip)
.globl SDL_JoystickNumHats
SDL_JoystickNumHats:
  jmp *real_ptrs+3280(%rip)
.globl SDL_JoystickOpen
SDL_JoystickOpen:
  jmp *real_ptrs+3288(%rip)
.globl SDL_JoystickPath
SDL_JoystickPath:
  jmp *real_ptrs+3296(%rip)
.globl SDL_JoystickPathForIndex
SDL_JoystickPathForIndex:
  jmp *real_ptrs+3304(%rip)
.globl SDL_JoystickRumble
SDL_JoystickRumble:
  jmp *real_ptrs+3312(%rip)
.globl SDL_JoystickRumbleTriggers
SDL_JoystickRumbleTriggers:
  jmp *real_ptrs+3320(%rip)
.globl SDL_JoystickSendEffect
SDL_JoystickSendEffect:
  jmp *real_ptrs+3328(%rip)
.globl SDL_JoystickSetLED
SDL_JoystickSetLED:
  jmp *real_ptrs+3336(%rip)
.globl SDL_JoystickSetPlayerIndex
SDL_JoystickSetPlayerIndex:
  jmp *real_ptrs+3344(%rip)
.globl SDL_JoystickSetVirtualAxis
SDL_JoystickSetVirtualAxis:
  jmp *real_ptrs+3352(%rip)
.globl SDL_JoystickSetVirtualButton
SDL_JoystickSetVirtualButton:
  jmp *real_ptrs+3360(%rip)
.globl SDL_JoystickSetVirtualHat
SDL_JoystickSetVirtualHat:
  jmp *real_ptrs+3368(%rip)
.globl SDL_LoadBMP_RW
SDL_LoadBMP_RW:
  jmp *real_ptrs+3384(%rip)
.globl SDL_LoadDollarTemplates
SDL_LoadDollarTemplates:
  jmp *real_ptrs+3392(%rip)
.globl SDL_LoadFile
SDL_LoadFile:
  jmp *real_ptrs+3400(%rip)
.globl SDL_LoadFile_RW
SDL_LoadFile_RW:
  jmp *real_ptrs+3408(%rip)
.globl SDL_LoadFunction
SDL_LoadFunction:
  jmp *real_ptrs+3416(%rip)
.globl SDL_LoadObject
SDL_LoadObject:
  jmp *real_ptrs+3424(%rip)
.globl SDL_LoadWAV_RW
SDL_LoadWAV_RW:
  jmp *real_ptrs+3432(%rip)
.globl SDL_LockAudio
SDL_LockAudio:
  jmp *real_ptrs+3440(%rip)
.globl SDL_LockAudioDevice
SDL_LockAudioDevice:
  jmp *real_ptrs+3448(%rip)
.globl SDL_LockJoysticks
SDL_LockJoysticks:
  jmp *real_ptrs+3456(%rip)
.globl SDL_LockMutex
SDL_LockMutex:
  jmp *real_ptrs+3464(%rip)
.globl SDL_LockSensors
SDL_LockSensors:
  jmp *real_ptrs+3472(%rip)
.globl SDL_LockSurface
SDL_LockSurface:
  jmp *real_ptrs+3480(%rip)
.globl SDL_LockTexture
SDL_LockTexture:
  jmp *real_ptrs+3488(%rip)
.globl SDL_LockTextureToSurface
SDL_LockTextureToSurface:
  jmp *real_ptrs+3496(%rip)
.globl SDL_Log
SDL_Log:
  jmp *real_ptrs+3504(%rip)
.globl SDL_LogCritical
SDL_LogCritical:
  jmp *real_ptrs+3512(%rip)
.globl SDL_LogDebug
SDL_LogDebug:
  jmp *real_ptrs+3520(%rip)
.globl SDL_LogError
SDL_LogError:
  jmp *real_ptrs+3528(%rip)
.globl SDL_LogGetOutputFunction
SDL_LogGetOutputFunction:
  jmp *real_ptrs+3536(%rip)
.globl SDL_LogGetPriority
SDL_LogGetPriority:
  jmp *real_ptrs+3544(%rip)
.globl SDL_LogInfo
SDL_LogInfo:
  jmp *real_ptrs+3552(%rip)
.globl SDL_LogMessage
SDL_LogMessage:
  jmp *real_ptrs+3560(%rip)
.globl SDL_LogMessageV
SDL_LogMessageV:
  jmp *real_ptrs+3568(%rip)
.globl SDL_LogResetPriorities
SDL_LogResetPriorities:
  jmp *real_ptrs+3576(%rip)
.globl SDL_LogSetAllPriority
SDL_LogSetAllPriority:
  jmp *real_ptrs+3584(%rip)
.globl SDL_LogSetOutputFunction
SDL_LogSetOutputFunction:
  jmp *real_ptrs+3592(%rip)
.globl SDL_LogSetPriority
SDL_LogSetPriority:
  jmp *real_ptrs+3600(%rip)
.globl SDL_LogVerbose
SDL_LogVerbose:
  jmp *real_ptrs+3608(%rip)
.globl SDL_LogWarn
SDL_LogWarn:
  jmp *real_ptrs+3616(%rip)
.globl SDL_LowerBlit
SDL_LowerBlit:
  jmp *real_ptrs+3624(%rip)
.globl SDL_LowerBlitScaled
SDL_LowerBlitScaled:
  jmp *real_ptrs+3632(%rip)
.globl SDL_MapRGB
SDL_MapRGB:
  jmp *real_ptrs+3640(%rip)
.globl SDL_MapRGBA
SDL_MapRGBA:
  jmp *real_ptrs+3648(%rip)
.globl SDL_MasksToPixelFormatEnum
SDL_MasksToPixelFormatEnum:
  jmp *real_ptrs+3656(%rip)
.globl SDL_MaximizeWindow
SDL_MaximizeWindow:
  jmp *real_ptrs+3664(%rip)
.globl SDL_MemoryBarrierAcquireFunction
SDL_MemoryBarrierAcquireFunction:
  jmp *real_ptrs+3672(%rip)
.globl SDL_MemoryBarrierReleaseFunction
SDL_MemoryBarrierReleaseFunction:
  jmp *real_ptrs+3680(%rip)
.globl SDL_Metal_CreateView
SDL_Metal_CreateView:
  jmp *real_ptrs+3688(%rip)
.globl SDL_Metal_DestroyView
SDL_Metal_DestroyView:
  jmp *real_ptrs+3696(%rip)
.globl SDL_Metal_GetDrawableSize
SDL_Metal_GetDrawableSize:
  jmp *real_ptrs+3704(%rip)
.globl SDL_Metal_GetLayer
SDL_Metal_GetLayer:
  jmp *real_ptrs+3712(%rip)
.globl SDL_MinimizeWindow
SDL_MinimizeWindow:
  jmp *real_ptrs+3720(%rip)
.globl SDL_MixAudio
SDL_MixAudio:
  jmp *real_ptrs+3728(%rip)
.globl SDL_MixAudioFormat
SDL_MixAudioFormat:
  jmp *real_ptrs+3736(%rip)
.globl SDL_MouseIsHaptic
SDL_MouseIsHaptic:
  jmp *real_ptrs+3744(%rip)
.globl SDL_NewAudioStream
SDL_NewAudioStream:
  jmp *real_ptrs+3752(%rip)
.globl SDL_NumHaptics
SDL_NumHaptics:
  jmp *real_ptrs+3760(%rip)
.globl SDL_NumJoysticks
SDL_NumJoysticks:
  jmp *real_ptrs+3768(%rip)
.globl SDL_NumSensors
SDL_NumSensors:
  jmp *real_ptrs+3776(%rip)
.globl SDL_OnApplicationDidBecomeActive
SDL_OnApplicationDidBecomeActive:
  jmp *real_ptrs+3784(%rip)
.globl SDL_OnApplicationDidEnterBackground
SDL_OnApplicationDidEnterBackground:
  jmp *real_ptrs+3792(%rip)
.globl SDL_OnApplicationDidReceiveMemoryWarning
SDL_OnApplicationDidReceiveMemoryWarning:
  jmp *real_ptrs+3800(%rip)
.globl SDL_OnApplicationWillEnterForeground
SDL_OnApplicationWillEnterForeground:
  jmp *real_ptrs+3808(%rip)
.globl SDL_OnApplicationWillResignActive
SDL_OnApplicationWillResignActive:
  jmp *real_ptrs+3816(%rip)
.globl SDL_OnApplicationWillTerminate
SDL_OnApplicationWillTerminate:
  jmp *real_ptrs+3824(%rip)
.globl SDL_OpenAudio
SDL_OpenAudio:
  jmp *real_ptrs+3832(%rip)
.globl SDL_OpenAudioDevice
SDL_OpenAudioDevice:
  jmp *real_ptrs+3840(%rip)
.globl SDL_OpenURL
SDL_OpenURL:
  jmp *real_ptrs+3848(%rip)
.globl SDL_PauseAudio
SDL_PauseAudio:
  jmp *real_ptrs+3856(%rip)
.globl SDL_PauseAudioDevice
SDL_PauseAudioDevice:
  jmp *real_ptrs+3864(%rip)
.globl SDL_PeepEvents
SDL_PeepEvents:
  jmp *real_ptrs+3872(%rip)
.globl SDL_PixelFormatEnumToMasks
SDL_PixelFormatEnumToMasks:
  jmp *real_ptrs+3880(%rip)
.globl SDL_PremultiplyAlpha
SDL_PremultiplyAlpha:
  jmp *real_ptrs+3896(%rip)
.globl SDL_PushEvent
SDL_PushEvent:
  jmp *real_ptrs+3912(%rip)
.globl SDL_QueryTexture
SDL_QueryTexture:
  jmp *real_ptrs+3920(%rip)
.globl SDL_QueueAudio
SDL_QueueAudio:
  jmp *real_ptrs+3928(%rip)
.globl SDL_Quit
SDL_Quit:
  jmp *real_ptrs+3936(%rip)
.globl SDL_QuitSubSystem
SDL_QuitSubSystem:
  jmp *real_ptrs+3944(%rip)
.globl SDL_RWFromConstMem
SDL_RWFromConstMem:
  jmp *real_ptrs+3952(%rip)
.globl SDL_RWFromFP
SDL_RWFromFP:
  jmp *real_ptrs+3960(%rip)
.globl SDL_RWFromFile
SDL_RWFromFile:
  jmp *real_ptrs+3968(%rip)
.globl SDL_RWFromMem
SDL_RWFromMem:
  jmp *real_ptrs+3976(%rip)
.globl SDL_RWclose
SDL_RWclose:
  jmp *real_ptrs+3984(%rip)
.globl SDL_RWread
SDL_RWread:
  jmp *real_ptrs+3992(%rip)
.globl SDL_RWseek
SDL_RWseek:
  jmp *real_ptrs+4000(%rip)
.globl SDL_RWsize
SDL_RWsize:
  jmp *real_ptrs+4008(%rip)
.globl SDL_RWtell
SDL_RWtell:
  jmp *real_ptrs+4016(%rip)
.globl SDL_RWwrite
SDL_RWwrite:
  jmp *real_ptrs+4024(%rip)
.globl SDL_RaiseWindow
SDL_RaiseWindow:
  jmp *real_ptrs+4032(%rip)
.globl SDL_ReadBE16
SDL_ReadBE16:
  jmp *real_ptrs+4040(%rip)
.globl SDL_ReadBE32
SDL_ReadBE32:
  jmp *real_ptrs+4048(%rip)
.globl SDL_ReadBE64
SDL_ReadBE64:
  jmp *real_ptrs+4056(%rip)
.globl SDL_ReadLE16
SDL_ReadLE16:
  jmp *real_ptrs+4064(%rip)
.globl SDL_ReadLE32
SDL_ReadLE32:
  jmp *real_ptrs+4072(%rip)
.globl SDL_ReadLE64
SDL_ReadLE64:
  jmp *real_ptrs+4080(%rip)
.globl SDL_ReadU8
SDL_ReadU8:
  jmp *real_ptrs+4088(%rip)
.globl SDL_RecordGesture
SDL_RecordGesture:
  jmp *real_ptrs+4096(%rip)
.globl SDL_RegisterApp
SDL_RegisterApp:
  jmp *real_ptrs+4104(%rip)
.globl SDL_RegisterEvents
SDL_RegisterEvents:
  jmp *real_ptrs+4112(%rip)
.globl SDL_RemoveTimer
SDL_RemoveTimer:
  jmp *real_ptrs+4120(%rip)
.globl SDL_RenderClear
SDL_RenderClear:
  jmp *real_ptrs+4128(%rip)
.globl SDL_RenderCopy
SDL_RenderCopy:
  jmp *real_ptrs+4136(%rip)
.globl SDL_RenderCopyEx
SDL_RenderCopyEx:
  jmp *real_ptrs+4144(%rip)
.globl SDL_RenderCopyExF
SDL_RenderCopyExF:
  jmp *real_ptrs+4152(%rip)
.globl SDL_RenderCopyF
SDL_RenderCopyF:
  jmp *real_ptrs+4160(%rip)
.globl SDL_RenderDrawLine
SDL_RenderDrawLine:
  jmp *real_ptrs+4168(%rip)
.globl SDL_RenderDrawLineF
SDL_RenderDrawLineF:
  jmp *real_ptrs+4176(%rip)
.globl SDL_RenderDrawLines
SDL_RenderDrawLines:
  jmp *real_ptrs+4184(%rip)
.globl SDL_RenderDrawLinesF
SDL_RenderDrawLinesF:
  jmp *real_ptrs+4192(%rip)
.globl SDL_RenderDrawPoint
SDL_RenderDrawPoint:
  jmp *real_ptrs+4200(%rip)
.globl SDL_RenderDrawPointF
SDL_RenderDrawPointF:
  jmp *real_ptrs+4208(%rip)
.globl SDL_RenderDrawPoints
SDL_RenderDrawPoints:
  jmp *real_ptrs+4216(%rip)
.globl SDL_RenderDrawPointsF
SDL_RenderDrawPointsF:
  jmp *real_ptrs+4224(%rip)
.globl SDL_RenderDrawRect
SDL_RenderDrawRect:
  jmp *real_ptrs+4232(%rip)
.globl SDL_RenderDrawRectF
SDL_RenderDrawRectF:
  jmp *real_ptrs+4240(%rip)
.globl SDL_RenderDrawRects
SDL_RenderDrawRects:
  jmp *real_ptrs+4248(%rip)
.globl SDL_RenderDrawRectsF
SDL_RenderDrawRectsF:
  jmp *real_ptrs+4256(%rip)
.globl SDL_RenderFillRect
SDL_RenderFillRect:
  jmp *real_ptrs+4264(%rip)
.globl SDL_RenderFillRectF
SDL_RenderFillRectF:
  jmp *real_ptrs+4272(%rip)
.globl SDL_RenderFillRects
SDL_RenderFillRects:
  jmp *real_ptrs+4280(%rip)
.globl SDL_RenderFillRectsF
SDL_RenderFillRectsF:
  jmp *real_ptrs+4288(%rip)
.globl SDL_RenderFlush
SDL_RenderFlush:
  jmp *real_ptrs+4296(%rip)
.globl SDL_RenderGeometry
SDL_RenderGeometry:
  jmp *real_ptrs+4304(%rip)
.globl SDL_RenderGeometryRaw
SDL_RenderGeometryRaw:
  jmp *real_ptrs+4312(%rip)
.globl SDL_RenderGetClipRect
SDL_RenderGetClipRect:
  jmp *real_ptrs+4320(%rip)
.globl SDL_RenderGetD3D11Device
SDL_RenderGetD3D11Device:
  jmp *real_ptrs+4328(%rip)
.globl SDL_RenderGetD3D12Device
SDL_RenderGetD3D12Device:
  jmp *real_ptrs+4336(%rip)
.globl SDL_RenderGetD3D9Device
SDL_RenderGetD3D9Device:
  jmp *real_ptrs+4344(%rip)
.globl SDL_RenderGetIntegerScale
SDL_RenderGetIntegerScale:
  jmp *real_ptrs+4352(%rip)
.globl SDL_RenderGetLogicalSize
SDL_RenderGetLogicalSize:
  jmp *real_ptrs+4360(%rip)
.globl SDL_RenderGetMetalCommandEncoder
SDL_RenderGetMetalCommandEncoder:
  jmp *real_ptrs+4368(%rip)
.globl SDL_RenderGetMetalLayer
SDL_RenderGetMetalLayer:
  jmp *real_ptrs+4376(%rip)
.globl SDL_RenderGetScale
SDL_RenderGetScale:
  jmp *real_ptrs+4384(%rip)
.globl SDL_RenderGetViewport
SDL_RenderGetViewport:
  jmp *real_ptrs+4392(%rip)
.globl SDL_RenderGetWindow
SDL_RenderGetWindow:
  jmp *real_ptrs+4400(%rip)
.globl SDL_RenderIsClipEnabled
SDL_RenderIsClipEnabled:
  jmp *real_ptrs+4408(%rip)
.globl SDL_RenderLogicalToWindow
SDL_RenderLogicalToWindow:
  jmp *real_ptrs+4416(%rip)
.globl SDL_RenderPresent
SDL_RenderPresent:
  jmp *real_ptrs+4424(%rip)
.globl SDL_RenderReadPixels
SDL_RenderReadPixels:
  jmp *real_ptrs+4432(%rip)
.globl SDL_RenderSetClipRect
SDL_RenderSetClipRect:
  jmp *real_ptrs+4440(%rip)
.globl SDL_RenderSetIntegerScale
SDL_RenderSetIntegerScale:
  jmp *real_ptrs+4448(%rip)
.globl SDL_RenderSetLogicalSize
SDL_RenderSetLogicalSize:
  jmp *real_ptrs+4456(%rip)
.globl SDL_RenderSetScale
SDL_RenderSetScale:
  jmp *real_ptrs+4464(%rip)
.globl SDL_RenderSetVSync
SDL_RenderSetVSync:
  jmp *real_ptrs+4472(%rip)
.globl SDL_RenderSetViewport
SDL_RenderSetViewport:
  jmp *real_ptrs+4480(%rip)
.globl SDL_RenderTargetSupported
SDL_RenderTargetSupported:
  jmp *real_ptrs+4488(%rip)
.globl SDL_RenderWindowToLogical
SDL_RenderWindowToLogical:
  jmp *real_ptrs+4496(%rip)
.globl SDL_ReportAssertion
SDL_ReportAssertion:
  jmp *real_ptrs+4504(%rip)
.globl SDL_ResetAssertionReport
SDL_ResetAssertionReport:
  jmp *real_ptrs+4512(%rip)
.globl SDL_ResetHint
SDL_ResetHint:
  jmp *real_ptrs+4520(%rip)
.globl SDL_ResetHints
SDL_ResetHints:
  jmp *real_ptrs+4528(%rip)
.globl SDL_ResetKeyboard
SDL_ResetKeyboard:
  jmp *real_ptrs+4536(%rip)
.globl SDL_RestoreWindow
SDL_RestoreWindow:
  jmp *real_ptrs+4544(%rip)
.globl SDL_SIMDAlloc
SDL_SIMDAlloc:
  jmp *real_ptrs+4552(%rip)
.globl SDL_SIMDFree
SDL_SIMDFree:
  jmp *real_ptrs+4560(%rip)
.globl SDL_SIMDGetAlignment
SDL_SIMDGetAlignment:
  jmp *real_ptrs+4568(%rip)
.globl SDL_SIMDRealloc
SDL_SIMDRealloc:
  jmp *real_ptrs+4576(%rip)
.globl SDL_SaveAllDollarTemplates
SDL_SaveAllDollarTemplates:
  jmp *real_ptrs+4584(%rip)
.globl SDL_SaveBMP_RW
SDL_SaveBMP_RW:
  jmp *real_ptrs+4592(%rip)
.globl SDL_SaveDollarTemplate
SDL_SaveDollarTemplate:
  jmp *real_ptrs+4600(%rip)
.globl SDL_SemPost
SDL_SemPost:
  jmp *real_ptrs+4608(%rip)
.globl SDL_SemTryWait
SDL_SemTryWait:
  jmp *real_ptrs+4616(%rip)
.globl SDL_SemValue
SDL_SemValue:
  jmp *real_ptrs+4624(%rip)
.globl SDL_SemWait
SDL_SemWait:
  jmp *real_ptrs+4632(%rip)
.globl SDL_SemWaitTimeout
SDL_SemWaitTimeout:
  jmp *real_ptrs+4640(%rip)
.globl SDL_SensorClose
SDL_SensorClose:
  jmp *real_ptrs+4648(%rip)
.globl SDL_SensorFromInstanceID
SDL_SensorFromInstanceID:
  jmp *real_ptrs+4656(%rip)
.globl SDL_SensorGetData
SDL_SensorGetData:
  jmp *real_ptrs+4664(%rip)
.globl SDL_SensorGetDataWithTimestamp
SDL_SensorGetDataWithTimestamp:
  jmp *real_ptrs+4672(%rip)
.globl SDL_SensorGetDeviceInstanceID
SDL_SensorGetDeviceInstanceID:
  jmp *real_ptrs+4680(%rip)
.globl SDL_SensorGetDeviceName
SDL_SensorGetDeviceName:
  jmp *real_ptrs+4688(%rip)
.globl SDL_SensorGetDeviceNonPortableType
SDL_SensorGetDeviceNonPortableType:
  jmp *real_ptrs+4696(%rip)
.globl SDL_SensorGetDeviceType
SDL_SensorGetDeviceType:
  jmp *real_ptrs+4704(%rip)
.globl SDL_SensorGetInstanceID
SDL_SensorGetInstanceID:
  jmp *real_ptrs+4712(%rip)
.globl SDL_SensorGetName
SDL_SensorGetName:
  jmp *real_ptrs+4720(%rip)
.globl SDL_SensorGetNonPortableType
SDL_SensorGetNonPortableType:
  jmp *real_ptrs+4728(%rip)
.globl SDL_SensorGetType
SDL_SensorGetType:
  jmp *real_ptrs+4736(%rip)
.globl SDL_SensorOpen
SDL_SensorOpen:
  jmp *real_ptrs+4744(%rip)
.globl SDL_SensorUpdate
SDL_SensorUpdate:
  jmp *real_ptrs+4752(%rip)
.globl SDL_SetAssertionHandler
SDL_SetAssertionHandler:
  jmp *real_ptrs+4760(%rip)
.globl SDL_SetClipRect
SDL_SetClipRect:
  jmp *real_ptrs+4768(%rip)
.globl SDL_SetClipboardText
SDL_SetClipboardText:
  jmp *real_ptrs+4776(%rip)
.globl SDL_SetColorKey
SDL_SetColorKey:
  jmp *real_ptrs+4784(%rip)
.globl SDL_SetCursor
SDL_SetCursor:
  jmp *real_ptrs+4792(%rip)
.globl SDL_SetError
SDL_SetError:
  jmp *real_ptrs+4800(%rip)
.globl SDL_SetEventFilter
SDL_SetEventFilter:
  jmp *real_ptrs+4808(%rip)
.globl SDL_SetHint
SDL_SetHint:
  jmp *real_ptrs+4816(%rip)
.globl SDL_SetHintWithPriority
SDL_SetHintWithPriority:
  jmp *real_ptrs+4824(%rip)
.globl SDL_SetMainReady
SDL_SetMainReady:
  jmp *real_ptrs+4832(%rip)
.globl SDL_SetMemoryFunctions
SDL_SetMemoryFunctions:
  jmp *real_ptrs+4840(%rip)
.globl SDL_SetModState
SDL_SetModState:
  jmp *real_ptrs+4848(%rip)
.globl SDL_SetPaletteColors
SDL_SetPaletteColors:
  jmp *real_ptrs+4856(%rip)
.globl SDL_SetPixelFormatPalette
SDL_SetPixelFormatPalette:
  jmp *real_ptrs+4864(%rip)
.globl SDL_SetPrimarySelectionText
SDL_SetPrimarySelectionText:
  jmp *real_ptrs+4872(%rip)
.globl SDL_SetRelativeMouseMode
SDL_SetRelativeMouseMode:
  jmp *real_ptrs+4880(%rip)
.globl SDL_SetRenderDrawBlendMode
SDL_SetRenderDrawBlendMode:
  jmp *real_ptrs+4888(%rip)
.globl SDL_SetRenderDrawColor
SDL_SetRenderDrawColor:
  jmp *real_ptrs+4896(%rip)
.globl SDL_SetRenderTarget
SDL_SetRenderTarget:
  jmp *real_ptrs+4904(%rip)
.globl SDL_SetSurfaceAlphaMod
SDL_SetSurfaceAlphaMod:
  jmp *real_ptrs+4912(%rip)
.globl SDL_SetSurfaceBlendMode
SDL_SetSurfaceBlendMode:
  jmp *real_ptrs+4920(%rip)
.globl SDL_SetSurfaceColorMod
SDL_SetSurfaceColorMod:
  jmp *real_ptrs+4928(%rip)
.globl SDL_SetSurfacePalette
SDL_SetSurfacePalette:
  jmp *real_ptrs+4936(%rip)
.globl SDL_SetSurfaceRLE
SDL_SetSurfaceRLE:
  jmp *real_ptrs+4944(%rip)
.globl SDL_SetTextInputRect
SDL_SetTextInputRect:
  jmp *real_ptrs+4952(%rip)
.globl SDL_SetTextureAlphaMod
SDL_SetTextureAlphaMod:
  jmp *real_ptrs+4960(%rip)
.globl SDL_SetTextureBlendMode
SDL_SetTextureBlendMode:
  jmp *real_ptrs+4968(%rip)
.globl SDL_SetTextureColorMod
SDL_SetTextureColorMod:
  jmp *real_ptrs+4976(%rip)
.globl SDL_SetTextureScaleMode
SDL_SetTextureScaleMode:
  jmp *real_ptrs+4984(%rip)
.globl SDL_SetTextureUserData
SDL_SetTextureUserData:
  jmp *real_ptrs+4992(%rip)
.globl SDL_SetThreadPriority
SDL_SetThreadPriority:
  jmp *real_ptrs+5000(%rip)
.globl SDL_SetWindowAlwaysOnTop
SDL_SetWindowAlwaysOnTop:
  jmp *real_ptrs+5008(%rip)
.globl SDL_SetWindowBordered
SDL_SetWindowBordered:
  jmp *real_ptrs+5016(%rip)
.globl SDL_SetWindowBrightness
SDL_SetWindowBrightness:
  jmp *real_ptrs+5024(%rip)
.globl SDL_SetWindowData
SDL_SetWindowData:
  jmp *real_ptrs+5032(%rip)
.globl SDL_SetWindowDisplayMode
SDL_SetWindowDisplayMode:
  jmp *real_ptrs+5040(%rip)
.globl SDL_SetWindowFullscreen
SDL_SetWindowFullscreen:
  jmp *real_ptrs+5048(%rip)
.globl SDL_SetWindowGammaRamp
SDL_SetWindowGammaRamp:
  jmp *real_ptrs+5056(%rip)
.globl SDL_SetWindowGrab
SDL_SetWindowGrab:
  jmp *real_ptrs+5064(%rip)
.globl SDL_SetWindowHitTest
SDL_SetWindowHitTest:
  jmp *real_ptrs+5072(%rip)
.globl SDL_SetWindowIcon
SDL_SetWindowIcon:
  jmp *real_ptrs+5080(%rip)
.globl SDL_SetWindowInputFocus
SDL_SetWindowInputFocus:
  jmp *real_ptrs+5088(%rip)
.globl SDL_SetWindowKeyboardGrab
SDL_SetWindowKeyboardGrab:
  jmp *real_ptrs+5096(%rip)
.globl SDL_SetWindowMaximumSize
SDL_SetWindowMaximumSize:
  jmp *real_ptrs+5104(%rip)
.globl SDL_SetWindowMinimumSize
SDL_SetWindowMinimumSize:
  jmp *real_ptrs+5112(%rip)
.globl SDL_SetWindowModalFor
SDL_SetWindowModalFor:
  jmp *real_ptrs+5120(%rip)
.globl SDL_SetWindowMouseGrab
SDL_SetWindowMouseGrab:
  jmp *real_ptrs+5128(%rip)
.globl SDL_SetWindowMouseRect
SDL_SetWindowMouseRect:
  jmp *real_ptrs+5136(%rip)
.globl SDL_SetWindowOpacity
SDL_SetWindowOpacity:
  jmp *real_ptrs+5144(%rip)
.globl SDL_SetWindowPosition
SDL_SetWindowPosition:
  jmp *real_ptrs+5152(%rip)
.globl SDL_SetWindowResizable
SDL_SetWindowResizable:
  jmp *real_ptrs+5160(%rip)
.globl SDL_SetWindowShape
SDL_SetWindowShape:
  jmp *real_ptrs+5168(%rip)
.globl SDL_SetWindowSize
SDL_SetWindowSize:
  jmp *real_ptrs+5176(%rip)
.globl SDL_SetWindowTitle
SDL_SetWindowTitle:
  jmp *real_ptrs+5184(%rip)
.globl SDL_SetWindowsMessageHook
SDL_SetWindowsMessageHook:
  jmp *real_ptrs+5192(%rip)
.globl SDL_SetYUVConversionMode
SDL_SetYUVConversionMode:
  jmp *real_ptrs+5200(%rip)
.globl SDL_ShowCursor
SDL_ShowCursor:
  jmp *real_ptrs+5208(%rip)
.globl SDL_ShowMessageBox
SDL_ShowMessageBox:
  jmp *real_ptrs+5216(%rip)
.globl SDL_ShowSimpleMessageBox
SDL_ShowSimpleMessageBox:
  jmp *real_ptrs+5224(%rip)
.globl SDL_ShowWindow
SDL_ShowWindow:
  jmp *real_ptrs+5232(%rip)
.globl SDL_SoftStretch
SDL_SoftStretch:
  jmp *real_ptrs+5240(%rip)
.globl SDL_SoftStretchLinear
SDL_SoftStretchLinear:
  jmp *real_ptrs+5248(%rip)
.globl SDL_StartTextInput
SDL_StartTextInput:
  jmp *real_ptrs+5256(%rip)
.globl SDL_StopTextInput
SDL_StopTextInput:
  jmp *real_ptrs+5264(%rip)
.globl SDL_TLSCleanup
SDL_TLSCleanup:
  jmp *real_ptrs+5272(%rip)
.globl SDL_TLSCreate
SDL_TLSCreate:
  jmp *real_ptrs+5280(%rip)
.globl SDL_TLSGet
SDL_TLSGet:
  jmp *real_ptrs+5288(%rip)
.globl SDL_TLSSet
SDL_TLSSet:
  jmp *real_ptrs+5296(%rip)
.globl SDL_ThreadID
SDL_ThreadID:
  jmp *real_ptrs+5304(%rip)
.globl SDL_TryLockMutex
SDL_TryLockMutex:
  jmp *real_ptrs+5312(%rip)
.globl SDL_UnionFRect
SDL_UnionFRect:
  jmp *real_ptrs+5320(%rip)
.globl SDL_UnionRect
SDL_UnionRect:
  jmp *real_ptrs+5328(%rip)
.globl SDL_UnloadObject
SDL_UnloadObject:
  jmp *real_ptrs+5336(%rip)
.globl SDL_UnlockAudio
SDL_UnlockAudio:
  jmp *real_ptrs+5344(%rip)
.globl SDL_UnlockAudioDevice
SDL_UnlockAudioDevice:
  jmp *real_ptrs+5352(%rip)
.globl SDL_UnlockJoysticks
SDL_UnlockJoysticks:
  jmp *real_ptrs+5360(%rip)
.globl SDL_UnlockMutex
SDL_UnlockMutex:
  jmp *real_ptrs+5368(%rip)
.globl SDL_UnlockSensors
SDL_UnlockSensors:
  jmp *real_ptrs+5376(%rip)
.globl SDL_UnlockSurface
SDL_UnlockSurface:
  jmp *real_ptrs+5384(%rip)
.globl SDL_UnlockTexture
SDL_UnlockTexture:
  jmp *real_ptrs+5392(%rip)
.globl SDL_UnregisterApp
SDL_UnregisterApp:
  jmp *real_ptrs+5400(%rip)
.globl SDL_UpdateNVTexture
SDL_UpdateNVTexture:
  jmp *real_ptrs+5408(%rip)
.globl SDL_UpdateTexture
SDL_UpdateTexture:
  jmp *real_ptrs+5416(%rip)
.globl SDL_UpdateWindowSurface
SDL_UpdateWindowSurface:
  jmp *real_ptrs+5424(%rip)
.globl SDL_UpdateWindowSurfaceRects
SDL_UpdateWindowSurfaceRects:
  jmp *real_ptrs+5432(%rip)
.globl SDL_UpdateYUVTexture
SDL_UpdateYUVTexture:
  jmp *real_ptrs+5440(%rip)
.globl SDL_UpperBlit
SDL_UpperBlit:
  jmp *real_ptrs+5448(%rip)
.globl SDL_UpperBlitScaled
SDL_UpperBlitScaled:
  jmp *real_ptrs+5456(%rip)
.globl SDL_VideoInit
SDL_VideoInit:
  jmp *real_ptrs+5464(%rip)
.globl SDL_VideoQuit
SDL_VideoQuit:
  jmp *real_ptrs+5472(%rip)
.globl SDL_Vulkan_CreateSurface
SDL_Vulkan_CreateSurface:
  jmp *real_ptrs+5480(%rip)
.globl SDL_Vulkan_GetDrawableSize
SDL_Vulkan_GetDrawableSize:
  jmp *real_ptrs+5488(%rip)
.globl SDL_Vulkan_GetInstanceExtensions
SDL_Vulkan_GetInstanceExtensions:
  jmp *real_ptrs+5496(%rip)
.globl SDL_Vulkan_GetVkGetInstanceProcAddr
SDL_Vulkan_GetVkGetInstanceProcAddr:
  jmp *real_ptrs+5504(%rip)
.globl SDL_Vulkan_LoadLibrary
SDL_Vulkan_LoadLibrary:
  jmp *real_ptrs+5512(%rip)
.globl SDL_Vulkan_UnloadLibrary
SDL_Vulkan_UnloadLibrary:
  jmp *real_ptrs+5520(%rip)
.globl SDL_WaitEvent
SDL_WaitEvent:
  jmp *real_ptrs+5528(%rip)
.globl SDL_WaitThread
SDL_WaitThread:
  jmp *real_ptrs+5544(%rip)
.globl SDL_WarpMouseGlobal
SDL_WarpMouseGlobal:
  jmp *real_ptrs+5552(%rip)
.globl SDL_WarpMouseInWindow
SDL_WarpMouseInWindow:
  jmp *real_ptrs+5560(%rip)
.globl SDL_WasInit
SDL_WasInit:
  jmp *real_ptrs+5568(%rip)
.globl SDL_WriteBE16
SDL_WriteBE16:
  jmp *real_ptrs+5576(%rip)
.globl SDL_WriteBE32
SDL_WriteBE32:
  jmp *real_ptrs+5584(%rip)
.globl SDL_WriteBE64
SDL_WriteBE64:
  jmp *real_ptrs+5592(%rip)
.globl SDL_WriteLE16
SDL_WriteLE16:
  jmp *real_ptrs+5600(%rip)
.globl SDL_WriteLE32
SDL_WriteLE32:
  jmp *real_ptrs+5608(%rip)
.globl SDL_WriteLE64
SDL_WriteLE64:
  jmp *real_ptrs+5616(%rip)
.globl SDL_WriteU8
SDL_WriteU8:
  jmp *real_ptrs+5624(%rip)
.globl SDL_abs
SDL_abs:
  jmp *real_ptrs+5632(%rip)
.globl SDL_acos
SDL_acos:
  jmp *real_ptrs+5640(%rip)
.globl SDL_acosf
SDL_acosf:
  jmp *real_ptrs+5648(%rip)
.globl SDL_asin
SDL_asin:
  jmp *real_ptrs+5656(%rip)
.globl SDL_asinf
SDL_asinf:
  jmp *real_ptrs+5664(%rip)
.globl SDL_asprintf
SDL_asprintf:
  jmp *real_ptrs+5672(%rip)
.globl SDL_atan
SDL_atan:
  jmp *real_ptrs+5680(%rip)
.globl SDL_atan2
SDL_atan2:
  jmp *real_ptrs+5688(%rip)
.globl SDL_atan2f
SDL_atan2f:
  jmp *real_ptrs+5696(%rip)
.globl SDL_atanf
SDL_atanf:
  jmp *real_ptrs+5704(%rip)
.globl SDL_atof
SDL_atof:
  jmp *real_ptrs+5712(%rip)
.globl SDL_atoi
SDL_atoi:
  jmp *real_ptrs+5720(%rip)
.globl SDL_bsearch
SDL_bsearch:
  jmp *real_ptrs+5728(%rip)
.globl SDL_calloc
SDL_calloc:
  jmp *real_ptrs+5736(%rip)
.globl SDL_ceil
SDL_ceil:
  jmp *real_ptrs+5744(%rip)
.globl SDL_ceilf
SDL_ceilf:
  jmp *real_ptrs+5752(%rip)
.globl SDL_copysign
SDL_copysign:
  jmp *real_ptrs+5760(%rip)
.globl SDL_copysignf
SDL_copysignf:
  jmp *real_ptrs+5768(%rip)
.globl SDL_cos
SDL_cos:
  jmp *real_ptrs+5776(%rip)
.globl SDL_cosf
SDL_cosf:
  jmp *real_ptrs+5784(%rip)
.globl SDL_crc16
SDL_crc16:
  jmp *real_ptrs+5792(%rip)
.globl SDL_crc32
SDL_crc32:
  jmp *real_ptrs+5800(%rip)
.globl SDL_exp
SDL_exp:
  jmp *real_ptrs+5808(%rip)
.globl SDL_expf
SDL_expf:
  jmp *real_ptrs+5816(%rip)
.globl SDL_fabs
SDL_fabs:
  jmp *real_ptrs+5824(%rip)
.globl SDL_fabsf
SDL_fabsf:
  jmp *real_ptrs+5832(%rip)
.globl SDL_floor
SDL_floor:
  jmp *real_ptrs+5840(%rip)
.globl SDL_floorf
SDL_floorf:
  jmp *real_ptrs+5848(%rip)
.globl SDL_fmod
SDL_fmod:
  jmp *real_ptrs+5856(%rip)
.globl SDL_fmodf
SDL_fmodf:
  jmp *real_ptrs+5864(%rip)
.globl SDL_free
SDL_free:
  jmp *real_ptrs+5872(%rip)
.globl SDL_getenv
SDL_getenv:
  jmp *real_ptrs+5880(%rip)
.globl SDL_hid_ble_scan
SDL_hid_ble_scan:
  jmp *real_ptrs+5888(%rip)
.globl SDL_hid_close
SDL_hid_close:
  jmp *real_ptrs+5896(%rip)
.globl SDL_hid_device_change_count
SDL_hid_device_change_count:
  jmp *real_ptrs+5904(%rip)
.globl SDL_hid_enumerate
SDL_hid_enumerate:
  jmp *real_ptrs+5912(%rip)
.globl SDL_hid_exit
SDL_hid_exit:
  jmp *real_ptrs+5920(%rip)
.globl SDL_hid_free_enumeration
SDL_hid_free_enumeration:
  jmp *real_ptrs+5928(%rip)
.globl SDL_hid_get_feature_report
SDL_hid_get_feature_report:
  jmp *real_ptrs+5936(%rip)
.globl SDL_hid_get_indexed_string
SDL_hid_get_indexed_string:
  jmp *real_ptrs+5944(%rip)
.globl SDL_hid_get_manufacturer_string
SDL_hid_get_manufacturer_string:
  jmp *real_ptrs+5952(%rip)
.globl SDL_hid_get_product_string
SDL_hid_get_product_string:
  jmp *real_ptrs+5960(%rip)
.globl SDL_hid_get_serial_number_string
SDL_hid_get_serial_number_string:
  jmp *real_ptrs+5968(%rip)
.globl SDL_hid_init
SDL_hid_init:
  jmp *real_ptrs+5976(%rip)
.globl SDL_hid_open
SDL_hid_open:
  jmp *real_ptrs+5984(%rip)
.globl SDL_hid_open_path
SDL_hid_open_path:
  jmp *real_ptrs+5992(%rip)
.globl SDL_hid_read
SDL_hid_read:
  jmp *real_ptrs+6000(%rip)
.globl SDL_hid_read_timeout
SDL_hid_read_timeout:
  jmp *real_ptrs+6008(%rip)
.globl SDL_hid_send_feature_report
SDL_hid_send_feature_report:
  jmp *real_ptrs+6016(%rip)
.globl SDL_hid_set_nonblocking
SDL_hid_set_nonblocking:
  jmp *real_ptrs+6024(%rip)
.globl SDL_hid_write
SDL_hid_write:
  jmp *real_ptrs+6032(%rip)
.globl SDL_iconv
SDL_iconv:
  jmp *real_ptrs+6040(%rip)
.globl SDL_iconv_close
SDL_iconv_close:
  jmp *real_ptrs+6048(%rip)
.globl SDL_iconv_open
SDL_iconv_open:
  jmp *real_ptrs+6056(%rip)
.globl SDL_iconv_string
SDL_iconv_string:
  jmp *real_ptrs+6064(%rip)
.globl SDL_isalnum
SDL_isalnum:
  jmp *real_ptrs+6072(%rip)
.globl SDL_isalpha
SDL_isalpha:
  jmp *real_ptrs+6080(%rip)
.globl SDL_isblank
SDL_isblank:
  jmp *real_ptrs+6088(%rip)
.globl SDL_iscntrl
SDL_iscntrl:
  jmp *real_ptrs+6096(%rip)
.globl SDL_isdigit
SDL_isdigit:
  jmp *real_ptrs+6104(%rip)
.globl SDL_isgraph
SDL_isgraph:
  jmp *real_ptrs+6112(%rip)
.globl SDL_islower
SDL_islower:
  jmp *real_ptrs+6120(%rip)
.globl SDL_isprint
SDL_isprint:
  jmp *real_ptrs+6128(%rip)
.globl SDL_ispunct
SDL_ispunct:
  jmp *real_ptrs+6136(%rip)
.globl SDL_isspace
SDL_isspace:
  jmp *real_ptrs+6144(%rip)
.globl SDL_isupper
SDL_isupper:
  jmp *real_ptrs+6152(%rip)
.globl SDL_isxdigit
SDL_isxdigit:
  jmp *real_ptrs+6160(%rip)
.globl SDL_itoa
SDL_itoa:
  jmp *real_ptrs+6168(%rip)
.globl SDL_lltoa
SDL_lltoa:
  jmp *real_ptrs+6176(%rip)
.globl SDL_log
SDL_log:
  jmp *real_ptrs+6184(%rip)
.globl SDL_log10
SDL_log10:
  jmp *real_ptrs+6192(%rip)
.globl SDL_log10f
SDL_log10f:
  jmp *real_ptrs+6200(%rip)
.globl SDL_logf
SDL_logf:
  jmp *real_ptrs+6208(%rip)
.globl SDL_lround
SDL_lround:
  jmp *real_ptrs+6216(%rip)
.globl SDL_lroundf
SDL_lroundf:
  jmp *real_ptrs+6224(%rip)
.globl SDL_ltoa
SDL_ltoa:
  jmp *real_ptrs+6232(%rip)
.globl SDL_malloc
SDL_malloc:
  jmp *real_ptrs+6240(%rip)
.globl SDL_memcmp
SDL_memcmp:
  jmp *real_ptrs+6248(%rip)
.globl SDL_memcpy
SDL_memcpy:
  jmp *real_ptrs+6256(%rip)
.globl SDL_memmove
SDL_memmove:
  jmp *real_ptrs+6264(%rip)
.globl SDL_memset
SDL_memset:
  jmp *real_ptrs+6272(%rip)
.globl SDL_pow
SDL_pow:
  jmp *real_ptrs+6280(%rip)
.globl SDL_powf
SDL_powf:
  jmp *real_ptrs+6288(%rip)
.globl SDL_qsort
SDL_qsort:
  jmp *real_ptrs+6296(%rip)
.globl SDL_realloc
SDL_realloc:
  jmp *real_ptrs+6304(%rip)
.globl SDL_round
SDL_round:
  jmp *real_ptrs+6312(%rip)
.globl SDL_roundf
SDL_roundf:
  jmp *real_ptrs+6320(%rip)
.globl SDL_scalbn
SDL_scalbn:
  jmp *real_ptrs+6328(%rip)
.globl SDL_scalbnf
SDL_scalbnf:
  jmp *real_ptrs+6336(%rip)
.globl SDL_setenv
SDL_setenv:
  jmp *real_ptrs+6344(%rip)
.globl SDL_sin
SDL_sin:
  jmp *real_ptrs+6352(%rip)
.globl SDL_sinf
SDL_sinf:
  jmp *real_ptrs+6360(%rip)
.globl SDL_snprintf
SDL_snprintf:
  jmp *real_ptrs+6368(%rip)
.globl SDL_sqrt
SDL_sqrt:
  jmp *real_ptrs+6376(%rip)
.globl SDL_sqrtf
SDL_sqrtf:
  jmp *real_ptrs+6384(%rip)
.globl SDL_sscanf
SDL_sscanf:
  jmp *real_ptrs+6392(%rip)
.globl SDL_strcasecmp
SDL_strcasecmp:
  jmp *real_ptrs+6400(%rip)
.globl SDL_strcasestr
SDL_strcasestr:
  jmp *real_ptrs+6408(%rip)
.globl SDL_strchr
SDL_strchr:
  jmp *real_ptrs+6416(%rip)
.globl SDL_strcmp
SDL_strcmp:
  jmp *real_ptrs+6424(%rip)
.globl SDL_strdup
SDL_strdup:
  jmp *real_ptrs+6432(%rip)
.globl SDL_strlcat
SDL_strlcat:
  jmp *real_ptrs+6440(%rip)
.globl SDL_strlcpy
SDL_strlcpy:
  jmp *real_ptrs+6448(%rip)
.globl SDL_strlen
SDL_strlen:
  jmp *real_ptrs+6456(%rip)
.globl SDL_strlwr
SDL_strlwr:
  jmp *real_ptrs+6464(%rip)
.globl SDL_strncasecmp
SDL_strncasecmp:
  jmp *real_ptrs+6472(%rip)
.globl SDL_strncmp
SDL_strncmp:
  jmp *real_ptrs+6480(%rip)
.globl SDL_strrchr
SDL_strrchr:
  jmp *real_ptrs+6488(%rip)
.globl SDL_strrev
SDL_strrev:
  jmp *real_ptrs+6496(%rip)
.globl SDL_strstr
SDL_strstr:
  jmp *real_ptrs+6504(%rip)
.globl SDL_strtod
SDL_strtod:
  jmp *real_ptrs+6512(%rip)
.globl SDL_strtokr
SDL_strtokr:
  jmp *real_ptrs+6520(%rip)
.globl SDL_strtol
SDL_strtol:
  jmp *real_ptrs+6528(%rip)
.globl SDL_strtoll
SDL_strtoll:
  jmp *real_ptrs+6536(%rip)
.globl SDL_strtoul
SDL_strtoul:
  jmp *real_ptrs+6544(%rip)
.globl SDL_strtoull
SDL_strtoull:
  jmp *real_ptrs+6552(%rip)
.globl SDL_strupr
SDL_strupr:
  jmp *real_ptrs+6560(%rip)
.globl SDL_tan
SDL_tan:
  jmp *real_ptrs+6568(%rip)
.globl SDL_tanf
SDL_tanf:
  jmp *real_ptrs+6576(%rip)
.globl SDL_tolower
SDL_tolower:
  jmp *real_ptrs+6584(%rip)
.globl SDL_toupper
SDL_toupper:
  jmp *real_ptrs+6592(%rip)
.globl SDL_trunc
SDL_trunc:
  jmp *real_ptrs+6600(%rip)
.globl SDL_truncf
SDL_truncf:
  jmp *real_ptrs+6608(%rip)
.globl SDL_uitoa
SDL_uitoa:
  jmp *real_ptrs+6616(%rip)
.globl SDL_ulltoa
SDL_ulltoa:
  jmp *real_ptrs+6624(%rip)
.globl SDL_ultoa
SDL_ultoa:
  jmp *real_ptrs+6632(%rip)
.globl SDL_utf8strlcpy
SDL_utf8strlcpy:
  jmp *real_ptrs+6640(%rip)
.globl SDL_utf8strlen
SDL_utf8strlen:
  jmp *real_ptrs+6648(%rip)
.globl SDL_utf8strnlen
SDL_utf8strnlen:
  jmp *real_ptrs+6656(%rip)
.globl SDL_vasprintf
SDL_vasprintf:
  jmp *real_ptrs+6664(%rip)
.globl SDL_vsnprintf
SDL_vsnprintf:
  jmp *real_ptrs+6672(%rip)
.globl SDL_vsscanf
SDL_vsscanf:
  jmp *real_ptrs+6680(%rip)
.globl SDL_wcscasecmp
SDL_wcscasecmp:
  jmp *real_ptrs+6688(%rip)
.globl SDL_wcscmp
SDL_wcscmp:
  jmp *real_ptrs+6696(%rip)
.globl SDL_wcsdup
SDL_wcsdup:
  jmp *real_ptrs+6704(%rip)
.globl SDL_wcslcat
SDL_wcslcat:
  jmp *real_ptrs+6712(%rip)
.globl SDL_wcslcpy
SDL_wcslcpy:
  jmp *real_ptrs+6720(%rip)
.globl SDL_wcslen
SDL_wcslen:
  jmp *real_ptrs+6728(%rip)
.globl SDL_wcsncasecmp
SDL_wcsncasecmp:
  jmp *real_ptrs+6736(%rip)
.globl SDL_wcsncmp
SDL_wcsncmp:
  jmp *real_ptrs+6744(%rip)
.globl SDL_wcsstr
SDL_wcsstr:
  jmp *real_ptrs+6752(%rip)
