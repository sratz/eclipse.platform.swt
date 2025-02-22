/*******************************************************************************
 * Copyright (c) 2000, 2022 IBM Corporation and others.
 *
 * This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License 2.0
 * which accompanies this distribution, and is available at
 * https://www.eclipse.org/legal/epl-2.0/
 *
 * SPDX-License-Identifier: EPL-2.0
 *
 * Contributors:
 *    IBM Corporation - initial API and implementation
 *******************************************************************************/

/* Note: This file was auto-generated by org.eclipse.swt.tools.internal.JNIGenerator */
/* DO NOT EDIT - your changes will be lost. */

#include "swt.h"
#include "os_stats.h"

#ifdef NATIVE_STATS

char * OS_nativeFunctionNames[] = {
	"ACCEL_1sizeof",
	"ACTCTX_1sizeof",
	"AbortDoc",
	"ActivateActCtx",
	"ActivateKeyboardLayout",
	"AddFontResourceEx",
	"AdjustWindowRectEx",
	"AllowDarkModeForWindow",
	"AllowSetForegroundWindow",
	"AlphaBlend",
	"Arc",
	"AssocQueryString",
	"BITMAPINFOHEADER_1sizeof",
	"BITMAP_1sizeof",
	"BLENDFUNCTION_1sizeof",
	"BP_1PAINTPARAMS_1sizeof",
	"BUTTON_1IMAGELIST_1sizeof",
	"BeginBufferedPaint",
	"BeginDeferWindowPos",
	"BeginPaint",
	"BitBlt",
	"BringWindowToTop",
	"BufferedPaintInit",
	"BufferedPaintUnInit",
	"CANDIDATEFORM_1sizeof",
	"CHOOSECOLOR_1sizeof",
	"CHOOSEFONT_1sizeof",
	"CIDA_1sizeof",
	"COMBOBOXINFO_1sizeof",
	"COMPOSITIONFORM_1sizeof",
	"CREATESTRUCT_1sizeof",
	"CallNextHookEx",
	"CallWindowProc",
	"CharLower",
	"CharUpper",
	"ChildWindowFromPointEx",
	"ChooseColor",
	"ChooseFont",
	"ClientToScreen",
	"CloseClipboard",
	"CloseEnhMetaFile",
	"CloseGestureInfoHandle",
	"CloseHandle",
	"ClosePrinter",
	"CloseThemeData",
	"CloseTouchInputHandle",
	"CoInternetIsFeatureEnabled",
	"CoInternetSetFeatureEnabled",
	"CoTaskMemAlloc",
	"CoTaskMemFree",
	"CombineRgn",
	"CopyImage",
	"CreateAcceleratorTable",
	"CreateActCtx",
	"CreateBitmap",
	"CreateCaret",
	"CreateCompatibleBitmap",
	"CreateCompatibleDC",
	"CreateCursor",
	"CreateDC",
	"CreateDIBSection__JJI_3JJI",
	"CreateDIBSection__J_3BI_3JJI",
	"CreateEnhMetaFile",
	"CreateFontIndirect__J",
	"CreateFontIndirect__Lorg_eclipse_swt_internal_win32_LOGFONT_2",
	"CreateIconIndirect",
	"CreateMenu",
	"CreatePatternBrush",
	"CreatePen",
	"CreatePolygonRgn",
	"CreatePopupMenu",
	"CreateProcess",
	"CreateRectRgn",
	"CreateSolidBrush",
	"CreateStreamOnHGlobal",
	"CreateWindowEx",
	"DEVMODE_1sizeof",
	"DIBSECTION_1sizeof",
	"DOCHOSTUIINFO_1sizeof",
	"DOCINFO_1sizeof",
	"DRAWITEMSTRUCT_1sizeof",
	"DROPFILES_1sizeof",
	"DefFrameProc",
	"DefMDIChildProc",
	"DefWindowProc",
	"DeferWindowPos",
	"DeleteDC",
	"DeleteEnhMetaFile",
	"DeleteMenu",
	"DeleteObject",
	"DestroyAcceleratorTable",
	"DestroyCaret",
	"DestroyCursor",
	"DestroyIcon",
	"DestroyMenu",
	"DestroyWindow",
	"DispatchMessage",
	"DocumentProperties",
	"DragDetect",
	"DragFinish",
	"DragQueryFile",
	"DrawEdge",
	"DrawFocusRect",
	"DrawFrameControl",
	"DrawIconEx",
	"DrawMenuBar",
	"DrawText",
	"DrawThemeBackground",
	"DrawThemeText",
	"DuplicateHandle",
	"DwmSetWindowAttribute",
	"EMREXTCREATEFONTINDIRECTW_1sizeof",
	"EMR_1sizeof",
	"EXTLOGFONTW_1sizeof",
	"Ellipse",
	"EnableMenuItem",
	"EnableScrollBar",
	"EnableWindow",
	"EndBufferedPaint",
	"EndDeferWindowPos",
	"EndDoc",
	"EndPage",
	"EndPaint",
	"EnumDisplayMonitors",
	"EnumEnhMetaFile",
	"EnumFontFamilies",
	"EnumSystemLanguageGroups",
	"EnumSystemLocales",
	"EqualRect",
	"ExcludeClipRect",
	"ExpandEnvironmentStrings",
	"ExtCreatePen",
	"ExtCreateRegion",
	"ExtTextOut",
	"ExtractIconEx",
	"FLICK_1DATA_1sizeof",
	"FLICK_1POINT_1sizeof",
	"FillRect",
	"GCP_1RESULTS_1sizeof",
	"GESTURECONFIG_1sizeof",
	"GESTUREINFO_1sizeof",
	"GID_1ROTATE_1ANGLE_1FROM_1ARGUMENT",
	"GRADIENT_1RECT_1sizeof",
	"GUITHREADINFO_1sizeof",
	"GdiSetBatchLimit",
	"GetACP",
	"GetActiveWindow",
	"GetBkColor",
	"GetCapture",
	"GetCaretPos",
	"GetCharABCWidths",
	"GetCharWidth",
	"GetCharacterPlacement",
	"GetClassInfo",
	"GetClassName",
	"GetClientRect",
	"GetClipBox",
	"GetClipRgn",
	"GetClipboardData",
	"GetClipboardFormatName",
	"GetComboBoxInfo",
	"GetCurrentObject",
	"GetCurrentProcess",
	"GetCurrentProcessExplicitAppUserModelID",
	"GetCurrentProcessId",
	"GetCurrentThreadId",
	"GetCursor",
	"GetCursorPos",
	"GetDC",
	"GetDCEx",
	"GetDIBColorTable",
	"GetDIBits",
	"GetDesktopWindow",
	"GetDeviceCaps",
	"GetDialogBaseUnits",
	"GetDlgItem",
	"GetDoubleClickTime",
	"GetDpiForMonitor",
	"GetFocus",
	"GetFontLanguageInfo",
	"GetForegroundWindow",
	"GetGUIThreadInfo",
	"GetGestureInfo",
	"GetGlyphIndices",
	"GetGraphicsMode",
	"GetIconInfo",
	"GetKeyState",
	"GetKeyboardLayout",
	"GetKeyboardLayoutList",
	"GetKeyboardState",
	"GetLastActivePopup",
	"GetLastError",
	"GetLayeredWindowAttributes",
	"GetLayout",
	"GetLibraryHandle",
	"GetLocaleInfo",
	"GetMenu",
	"GetMenuBarInfo",
	"GetMenuDefaultItem",
	"GetMenuInfo",
	"GetMenuItemCount",
	"GetMenuItemInfo",
	"GetMenuItemRect",
	"GetMessage",
	"GetMessagePos",
	"GetMessageTime",
	"GetMetaRgn",
	"GetModuleFileName",
	"GetModuleHandle",
	"GetMonitorInfo",
	"GetObject__JIJ",
	"GetObject__JILorg_eclipse_swt_internal_win32_BITMAP_2",
	"GetObject__JILorg_eclipse_swt_internal_win32_DIBSECTION_2",
	"GetObject__JILorg_eclipse_swt_internal_win32_LOGBRUSH_2",
	"GetObject__JILorg_eclipse_swt_internal_win32_LOGFONT_2",
	"GetOutlineTextMetrics",
	"GetParent",
	"GetPixel",
	"GetPolyFillMode",
	"GetProcessHeap",
	"GetProfileString",
	"GetProp",
	"GetROP2",
	"GetRandomRgn",
	"GetRegionData",
	"GetRgnBox",
	"GetScrollBarInfo",
	"GetScrollInfo",
	"GetStartupInfo",
	"GetStockObject",
	"GetSysColor",
	"GetSysColorBrush",
	"GetSystemMenu",
	"GetSystemMetrics",
	"GetTextColor",
	"GetTextExtentPoint32",
	"GetTextMetrics",
	"GetThemePartSize",
	"GetThemeTextExtent",
	"GetTouchInputInfo",
	"GetUpdateRect",
	"GetUpdateRgn",
	"GetWindow",
	"GetWindowDC",
	"GetWindowLong",
	"GetWindowLongPtr",
	"GetWindowOrgEx",
	"GetWindowPlacement",
	"GetWindowRect",
	"GetWindowRgn",
	"GetWindowText",
	"GetWindowTextLength",
	"GetWindowThreadProcessId",
	"GlobalAddAtom",
	"GlobalAlloc",
	"GlobalFree",
	"GlobalLock",
	"GlobalSize",
	"GlobalUnlock",
	"GradientFill",
	"HDHITTESTINFO_1sizeof",
	"HDITEM_1sizeof",
	"HDLAYOUT_1sizeof",
	"HELPINFO_1sizeof",
	"HIGHCONTRAST_1sizeof",
	"HeapAlloc",
	"HeapFree",
	"HideCaret",
	"ICONINFO_1sizeof",
	"IIDFromString",
	"ILGetSize",
	"INITCOMMONCONTROLSEX_1sizeof",
	"INPUT_1sizeof",
	"ImageList_1Add",
	"ImageList_1AddMasked",
	"ImageList_1BeginDrag",
	"ImageList_1Create",
	"ImageList_1Destroy",
	"ImageList_1DragEnter",
	"ImageList_1DragLeave",
	"ImageList_1DragMove",
	"ImageList_1DragShowNolock",
	"ImageList_1EndDrag",
	"ImageList_1GetIconSize",
	"ImageList_1GetImageCount",
	"ImageList_1Remove",
	"ImageList_1Replace",
	"ImageList_1ReplaceIcon",
	"ImageList_1SetIconSize",
	"ImmEscape",
	"ImmGetCompositionFont",
	"ImmGetCompositionString__JI_3BI",
	"ImmGetCompositionString__JI_3CI",
	"ImmGetCompositionString__JI_3II",
	"ImmGetContext",
	"ImmGetConversionStatus",
	"ImmGetDefaultIMEWnd",
	"ImmGetOpenStatus",
	"ImmNotifyIME",
	"ImmReleaseContext",
	"ImmSetCandidateWindow",
	"ImmSetCompositionFont",
	"ImmSetCompositionWindow",
	"ImmSetConversionStatus",
	"ImmSetOpenStatus",
	"InitCommonControlsEx",
	"InsertMenuItem",
	"InternetGetCookie",
	"InternetSetCookie",
	"InternetSetOption",
	"IntersectClipRect",
	"IntersectRect",
	"InvalidateRect",
	"InvalidateRgn",
	"IsAppThemed",
	"IsDarkModeAvailable",
	"IsHungAppWindow",
	"IsIconic",
	"IsTouchWindow",
	"IsWindowEnabled",
	"IsWindowVisible",
	"IsZoomed",
	"KEYBDINPUT_1sizeof",
	"KillTimer",
	"LITEM_1sizeof",
	"LOGBRUSH_1sizeof",
	"LOGFONT_1sizeof",
	"LOGPEN_1sizeof",
	"LPtoDP",
	"LVCOLUMN_1sizeof",
	"LVHITTESTINFO_1sizeof",
	"LVINSERTMARK_1sizeof",
	"LVITEM_1sizeof",
	"LineTo",
	"LoadBitmap",
	"LoadCursor",
	"LoadIcon",
	"LoadIconMetric",
	"LoadImage",
	"LoadKeyboardLayout",
	"LocalFree",
	"MARGINS_1sizeof",
	"MCHITTESTINFO_1sizeof",
	"MEASUREITEMSTRUCT_1sizeof",
	"MENUBARINFO_1sizeof",
	"MENUINFO_1sizeof",
	"MENUITEMINFO_1sizeof",
	"MINMAXINFO_1sizeof",
	"MONITORINFO_1sizeof",
	"MOUSEINPUT_1sizeof",
	"MSG_1sizeof",
	"MapViewOfFile",
	"MapVirtualKey",
	"MapWindowPoints__JJLorg_eclipse_swt_internal_win32_POINT_2I",
	"MapWindowPoints__JJLorg_eclipse_swt_internal_win32_RECT_2I",
	"MessageBeep",
	"MessageBox",
	"ModifyWorldTransform",
	"MonitorFromWindow",
	"MoveMemory__JJI",
	"MoveMemory__JLorg_eclipse_swt_internal_win32_CIDA_2I",
	"MoveMemory__JLorg_eclipse_swt_internal_win32_DEVMODE_2I",
	"MoveMemory__JLorg_eclipse_swt_internal_win32_DOCHOSTUIINFO_2I",
	"MoveMemory__JLorg_eclipse_swt_internal_win32_DROPFILES_2I",
	"MoveMemory__JLorg_eclipse_swt_internal_win32_GRADIENT_1RECT_2I",
	"MoveMemory__JLorg_eclipse_swt_internal_win32_LOGFONT_2I",
	"MoveMemory__JLorg_eclipse_swt_internal_win32_MEASUREITEMSTRUCT_2I",
	"MoveMemory__JLorg_eclipse_swt_internal_win32_MINMAXINFO_2I",
	"MoveMemory__JLorg_eclipse_swt_internal_win32_MSG_2I",
	"MoveMemory__JLorg_eclipse_swt_internal_win32_NMLVCUSTOMDRAW_2I",
	"MoveMemory__JLorg_eclipse_swt_internal_win32_NMLVDISPINFO_2I",
	"MoveMemory__JLorg_eclipse_swt_internal_win32_NMTBCUSTOMDRAW_2I",
	"MoveMemory__JLorg_eclipse_swt_internal_win32_NMTTDISPINFO_2I",
	"MoveMemory__JLorg_eclipse_swt_internal_win32_NMTVCUSTOMDRAW_2I",
	"MoveMemory__JLorg_eclipse_swt_internal_win32_NMTVDISPINFO_2I",
	"MoveMemory__JLorg_eclipse_swt_internal_win32_RECT_2I",
	"MoveMemory__JLorg_eclipse_swt_internal_win32_SAFEARRAY_2I",
	"MoveMemory__JLorg_eclipse_swt_internal_win32_SHDRAGIMAGE_2I",
	"MoveMemory__JLorg_eclipse_swt_internal_win32_TRIVERTEX_2I",
	"MoveMemory__JLorg_eclipse_swt_internal_win32_UDACCEL_2I",
	"MoveMemory__JLorg_eclipse_swt_internal_win32_WINDOWPOS_2I",
	"MoveMemory__J_3BI",
	"MoveMemory__J_3CI",
	"MoveMemory__J_3DI",
	"MoveMemory__J_3FI",
	"MoveMemory__J_3II",
	"MoveMemory__J_3JI",
	"MoveMemory__J_3SI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_BITMAPINFOHEADER_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_BITMAPINFOHEADER_2_3BI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_CIDA_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_DEVMODE_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_DOCHOSTUIINFO_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_DRAWITEMSTRUCT_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_EMREXTCREATEFONTINDIRECTW_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_EMR_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_FLICK_1DATA_2_3JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_FLICK_1POINT_2_3JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_HDITEM_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_HELPINFO_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_LOGFONT_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_MEASUREITEMSTRUCT_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_MINMAXINFO_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_MSG_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMCUSTOMDRAW_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMHDR_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMHEADER_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMLINK_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMLISTVIEW_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMLVCUSTOMDRAW_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMLVDISPINFO_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMLVODSTATECHANGE_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMREBARCHEVRON_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMREBARCHILDSIZE_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMTBCUSTOMDRAW_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMTBHOTITEM_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMTOOLBAR_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMTREEVIEW_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMTTCUSTOMDRAW_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMTTDISPINFO_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMTVCUSTOMDRAW_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMTVDISPINFO_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMTVITEMCHANGE_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_NMUPDOWN_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_POINT_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_POINT_2_3JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_SAFEARRAY_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_SCRIPT_1ITEM_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_SCRIPT_1LOGATTR_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_SCRIPT_1PROPERTIES_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_TEXTMETRIC_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_TOUCHINPUT_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_UDACCEL_2JI",
	"MoveMemory__Lorg_eclipse_swt_internal_win32_WINDOWPOS_2JI",
	"MoveMemory___3BJI",
	"MoveMemory___3BLorg_eclipse_swt_internal_win32_ACCEL_2I",
	"MoveMemory___3BLorg_eclipse_swt_internal_win32_BITMAPINFOHEADER_2I",
	"MoveMemory___3CJI",
	"MoveMemory___3DJI",
	"MoveMemory___3FJI",
	"MoveMemory___3IJI",
	"MoveMemory___3JJI",
	"MoveMemory___3SJI",
	"MoveToEx",
	"MultiByteToWideChar__IIJI_3CI",
	"MultiByteToWideChar__II_3BI_3CI",
	"NMCUSTOMDRAW_1sizeof",
	"NMHDR_1sizeof",
	"NMHEADER_1sizeof",
	"NMLINK_1sizeof",
	"NMLISTVIEW_1sizeof",
	"NMLVCUSTOMDRAW_1sizeof",
	"NMLVDISPINFO_1sizeof",
	"NMLVFINDITEM_1sizeof",
	"NMLVODSTATECHANGE_1sizeof",
	"NMREBARCHEVRON_1sizeof",
	"NMREBARCHILDSIZE_1sizeof",
	"NMTBCUSTOMDRAW_1sizeof",
	"NMTBHOTITEM_1sizeof",
	"NMTOOLBAR_1sizeof",
	"NMTREEVIEW_1sizeof",
	"NMTTCUSTOMDRAW_1sizeof",
	"NMTTDISPINFO_1sizeof",
	"NMTVCUSTOMDRAW_1sizeof",
	"NMTVDISPINFO_1sizeof",
	"NMTVITEMCHANGE_1sizeof",
	"NMUPDOWN_1sizeof",
	"NONCLIENTMETRICS_1sizeof",
	"NOTIFYICONDATA_1V2_1SIZE",
	"NotifyWinEvent",
	"OSVERSIONINFOEX_1sizeof",
	"OUTLINETEXTMETRIC_1sizeof",
	"OffsetRect",
	"OffsetRgn",
	"OleInitialize",
	"OleUninitialize",
	"OpenClipboard",
	"OpenPrinter",
	"OpenProcess",
	"OpenThemeData",
	"PAINTSTRUCT_1sizeof",
	"POINT_1sizeof",
	"PRINTDLG_1sizeof",
	"PROCESS_1INFORMATION_1sizeof",
	"PROPERTYKEY_1sizeof",
	"PROPVARIANT_1sizeof",
	"PSPropertyKeyFromString",
	"PatBlt",
	"PathIsExe",
	"PeekMessage",
	"Pie",
	"Polygon",
	"Polyline",
	"PostMessage",
	"PostThreadMessage",
	"PrintDlg",
	"PrintWindow",
	"PtInRect",
	"PtInRegion",
	"REBARBANDINFO_1sizeof",
	"RECT_1sizeof",
	"RectInRegion",
	"Rectangle",
	"RedrawWindow",
	"RegCloseKey",
	"RegCreateKeyEx",
	"RegDeleteValue",
	"RegEnumKeyEx",
	"RegOpenKeyEx",
	"RegQueryValueEx__J_3CJ_3I_3C_3I",
	"RegQueryValueEx__J_3CJ_3I_3I_3I",
	"RegSetValueEx",
	"RegisterClass",
	"RegisterClipboardFormat",
	"RegisterHotKey",
	"RegisterTouchWindow",
	"RegisterWindowMessage",
	"ReleaseCapture",
	"ReleaseDC",
	"RemoveMenu",
	"RemoveProp",
	"ReplyMessage",
	"RestoreDC",
	"RoundRect",
	"RtlGetVersion",
	"SAFEARRAYBOUND_1sizeof",
	"SAFEARRAY_1sizeof",
	"SCRIPT_1ANALYSIS_1sizeof",
	"SCRIPT_1CONTROL_1sizeof",
	"SCRIPT_1FONTPROPERTIES_1sizeof",
	"SCRIPT_1ITEM_1sizeof",
	"SCRIPT_1LOGATTR_1sizeof",
	"SCRIPT_1PROPERTIES_1sizeof",
	"SCRIPT_1STATE_1sizeof",
	"SCRIPT_1STRING_1ANALYSIS_1sizeof",
	"SCROLLBARINFO_1sizeof",
	"SCROLLINFO_1sizeof",
	"SHDRAGIMAGE_1sizeof",
	"SHELLEXECUTEINFO_1sizeof",
	"SHFILEINFO_1sizeof",
	"SHGetFileInfo",
	"SIZE_1sizeof",
	"STARTUPINFO_1sizeof",
	"SYSTEMTIME_1sizeof",
	"SaveDC",
	"ScreenToClient",
	"ScriptApplyDigitSubstitution",
	"ScriptBreak",
	"ScriptCPtoX",
	"ScriptCacheGetHeight",
	"ScriptFreeCache",
	"ScriptGetCMap",
	"ScriptGetFontProperties",
	"ScriptGetLogicalWidths",
	"ScriptGetProperties",
	"ScriptItemize",
	"ScriptJustify",
	"ScriptLayout",
	"ScriptPlace",
	"ScriptShape",
	"ScriptStringAnalyse",
	"ScriptStringFree",
	"ScriptStringOut",
	"ScriptTextOut",
	"ScriptXtoCP",
	"ScrollWindowEx",
	"SelectClipRgn",
	"SelectObject",
	"SendInput",
	"SendMessage__JIJJ",
	"SendMessage__JIJLorg_eclipse_swt_internal_win32_BUTTON_1IMAGELIST_2",
	"SendMessage__JIJLorg_eclipse_swt_internal_win32_HDHITTESTINFO_2",
	"SendMessage__JIJLorg_eclipse_swt_internal_win32_HDITEM_2",
	"SendMessage__JIJLorg_eclipse_swt_internal_win32_HDLAYOUT_2",
	"SendMessage__JIJLorg_eclipse_swt_internal_win32_LITEM_2",
	"SendMessage__JIJLorg_eclipse_swt_internal_win32_LVCOLUMN_2",
	"SendMessage__JIJLorg_eclipse_swt_internal_win32_LVHITTESTINFO_2",
	"SendMessage__JIJLorg_eclipse_swt_internal_win32_LVINSERTMARK_2",
	"SendMessage__JIJLorg_eclipse_swt_internal_win32_LVITEM_2",
	"SendMessage__JIJLorg_eclipse_swt_internal_win32_MARGINS_2",
	"SendMessage__JIJLorg_eclipse_swt_internal_win32_MCHITTESTINFO_2",
	"SendMessage__JIJLorg_eclipse_swt_internal_win32_REBARBANDINFO_2",
	"SendMessage__JIJLorg_eclipse_swt_internal_win32_RECT_2",
	"SendMessage__JIJLorg_eclipse_swt_internal_win32_SHDRAGIMAGE_2",
	"SendMessage__JIJLorg_eclipse_swt_internal_win32_SIZE_2",
	"SendMessage__JIJLorg_eclipse_swt_internal_win32_SYSTEMTIME_2",
	"SendMessage__JIJLorg_eclipse_swt_internal_win32_TBBUTTONINFO_2",
	"SendMessage__JIJLorg_eclipse_swt_internal_win32_TBBUTTON_2",
	"SendMessage__JIJLorg_eclipse_swt_internal_win32_TCHITTESTINFO_2",
	"SendMessage__JIJLorg_eclipse_swt_internal_win32_TCITEM_2",
	"SendMessage__JIJLorg_eclipse_swt_internal_win32_TOOLINFO_2",
	"SendMessage__JIJLorg_eclipse_swt_internal_win32_TVHITTESTINFO_2",
	"SendMessage__JIJLorg_eclipse_swt_internal_win32_TVINSERTSTRUCT_2",
	"SendMessage__JIJLorg_eclipse_swt_internal_win32_TVITEM_2",
	"SendMessage__JIJLorg_eclipse_swt_internal_win32_TVSORTCB_2",
	"SendMessage__JIJLorg_eclipse_swt_internal_win32_UDACCEL_2",
	"SendMessage__JIJ_3C",
	"SendMessage__JIJ_3I",
	"SendMessage__JI_3I_3I",
	"SetActiveWindow",
	"SetBkColor",
	"SetBkMode",
	"SetBrushOrgEx",
	"SetCapture",
	"SetCaretPos",
	"SetCurrentProcessExplicitAppUserModelID",
	"SetCursor",
	"SetCursorPos",
	"SetDCBrushColor",
	"SetDIBColorTable",
	"SetFocus",
	"SetForegroundWindow",
	"SetGestureConfig",
	"SetGraphicsMode",
	"SetLayeredWindowAttributes",
	"SetLayout",
	"SetMenu",
	"SetMenuDefaultItem",
	"SetMenuInfo",
	"SetMenuItemInfo",
	"SetMetaRgn",
	"SetParent",
	"SetPixel",
	"SetPolyFillMode",
	"SetPreferredAppMode",
	"SetProcessDPIAware",
	"SetProp",
	"SetROP2",
	"SetRect",
	"SetRectRgn",
	"SetScrollInfo",
	"SetStretchBltMode",
	"SetTextColor",
	"SetTimer",
	"SetWindowLong",
	"SetWindowLongPtr",
	"SetWindowOrgEx",
	"SetWindowPlacement",
	"SetWindowPos",
	"SetWindowRgn",
	"SetWindowText",
	"SetWindowTheme",
	"SetWindowsHookEx",
	"SetWorldTransform",
	"ShellExecuteEx",
	"Shell_1NotifyIcon",
	"ShowCaret",
	"ShowOwnedPopups",
	"ShowScrollBar",
	"ShowWindow",
	"StartDoc",
	"StartPage",
	"StretchBlt",
	"SystemParametersInfo__IILorg_eclipse_swt_internal_win32_HIGHCONTRAST_2I",
	"SystemParametersInfo__IILorg_eclipse_swt_internal_win32_NONCLIENTMETRICS_2I",
	"SystemParametersInfo__IILorg_eclipse_swt_internal_win32_RECT_2I",
	"SystemParametersInfo__II_3II",
	"TBBUTTONINFO_1sizeof",
	"TBBUTTON_1sizeof",
	"TCHITTESTINFO_1sizeof",
	"TCITEM_1sizeof",
	"TEXTMETRIC_1sizeof",
	"TF_1DA_1COLOR_1sizeof",
	"TF_1DISPLAYATTRIBUTE_1sizeof",
	"TOOLINFO_1sizeof",
	"TOUCHINPUT_1sizeof",
	"TRACKMOUSEEVENT_1sizeof",
	"TRIVERTEX_1sizeof",
	"TVHITTESTINFO_1sizeof",
	"TVINSERTSTRUCT_1sizeof",
	"TVITEM_1sizeof",
	"TVSORTCB_1sizeof",
	"ToUnicode",
	"TrackMouseEvent",
	"TrackPopupMenu",
	"TranslateAccelerator",
	"TranslateCharsetInfo",
	"TranslateMDISysAccel",
	"TranslateMessage",
	"TransparentBlt",
	"TreeView_1GetItemRect",
	"UDACCEL_1sizeof",
	"UnhookWindowsHookEx",
	"UnloadKeyboardLayout",
	"UnmapViewOfFile",
	"UnregisterClass",
	"UnregisterHotKey",
	"UnregisterTouchWindow",
	"UpdateWindow",
	"UrlCreateFromPath",
	"ValidateRect",
	"VkKeyScan",
	"WINDOWPLACEMENT_1sizeof",
	"WINDOWPOS_1sizeof",
	"WNDCLASS_1sizeof",
	"WaitMessage",
	"WideCharToMultiByte__II_3CIJI_3B_3I",
	"WideCharToMultiByte__II_3CI_3BI_3B_3I",
	"WindowFromDC",
	"WindowFromPoint",
	"wcslen",
};
#define NATIVE_FUNCTION_COUNT sizeof(OS_nativeFunctionNames) / sizeof(char*)
int OS_nativeFunctionCount = NATIVE_FUNCTION_COUNT;
int OS_nativeFunctionCallCount[NATIVE_FUNCTION_COUNT];

#define STATS_NATIVE(func) Java_org_eclipse_swt_tools_internal_NativeStats_##func

JNIEXPORT jint JNICALL STATS_NATIVE(OS_1GetFunctionCount)
	(JNIEnv *env, jclass that)
{
	return OS_nativeFunctionCount;
}

JNIEXPORT jstring JNICALL STATS_NATIVE(OS_1GetFunctionName)
	(JNIEnv *env, jclass that, jint index)
{
	return (*env)->NewStringUTF(env, OS_nativeFunctionNames[index]);
}

JNIEXPORT jint JNICALL STATS_NATIVE(OS_1GetFunctionCallCount)
	(JNIEnv *env, jclass that, jint index)
{
	return OS_nativeFunctionCallCount[index];
}

#endif
