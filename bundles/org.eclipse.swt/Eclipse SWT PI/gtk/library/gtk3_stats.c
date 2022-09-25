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
#include "gtk3_stats.h"

#ifdef NATIVE_STATS

char * GTK3_nativeFunctionNames[] = {
	"GTK_1IS_1MENU_1ITEM",
	"GTK_1TYPE_1MENU",
	"GdkEventButton_1sizeof",
	"GdkEventCrossing_1sizeof",
	"GdkEventFocus_1sizeof",
	"GdkEventKey_1sizeof",
	"GdkEventMotion_1sizeof",
	"GdkEventWindowState_1sizeof",
	"GdkEvent_1sizeof",
	"GdkGeometry_1sizeof",
	"GdkWindowAttr_1sizeof",
	"GtkTargetEntry_1sizeof",
	"gdk_1window_1new",
	"gtk_1accel_1label_1new",
	"gtk_1accel_1label_1set_1accel",
	"gtk_1accel_1label_1set_1accel_1widget",
	"gtk_1accessible_1get_1widget",
	"gtk_1bin_1get_1child",
	"gtk_1box_1pack_1end",
	"gtk_1box_1reorder_1child",
	"gtk_1box_1set_1child_1packing",
	"gtk_1button_1set_1image",
	"gtk_1calendar_1get_1date",
	"gtk_1calendar_1select_1day",
	"gtk_1calendar_1select_1month",
	"gtk_1calendar_1set_1display_1options",
	"gtk_1check_1menu_1item_1get_1active",
	"gtk_1check_1menu_1item_1new",
	"gtk_1check_1menu_1item_1set_1active",
	"gtk_1clipboard_1clear",
	"gtk_1clipboard_1get",
	"gtk_1clipboard_1set_1can_1store",
	"gtk_1clipboard_1set_1with_1owner",
	"gtk_1clipboard_1store",
	"gtk_1clipboard_1wait_1for_1contents",
	"gtk_1combo_1box_1get_1wrap_1width",
	"gtk_1combo_1box_1set_1wrap_1width",
	"gtk_1container_1add",
	"gtk_1container_1forall",
	"gtk_1container_1get_1border_1width",
	"gtk_1container_1get_1children",
	"gtk_1container_1propagate_1draw",
	"gtk_1container_1remove",
	"gtk_1container_1set_1border_1width",
	"gtk_1css_1provider_1load_1from_1data",
	"gtk_1dialog_1run",
	"gtk_1drag_1begin_1with_1coordinates",
	"gtk_1drag_1check_1threshold",
	"gtk_1drag_1dest_1set",
	"gtk_1drag_1dest_1unset",
	"gtk_1drag_1finish",
	"gtk_1drag_1get_1data",
	"gtk_1drag_1set_1icon_1surface",
	"gtk_1editable_1copy_1clipboard",
	"gtk_1editable_1cut_1clipboard",
	"gtk_1editable_1paste_1clipboard",
	"gtk_1entry_1get_1layout",
	"gtk_1entry_1get_1layout_1offsets",
	"gtk_1entry_1get_1text",
	"gtk_1entry_1set_1text",
	"gtk_1entry_1set_1width_1chars",
	"gtk_1entry_1text_1index_1to_1layout_1index",
	"gtk_1event_1box_1new",
	"gtk_1event_1controller_1handle_1event",
	"gtk_1events_1pending",
	"gtk_1file_1chooser_1get_1filename",
	"gtk_1file_1chooser_1get_1filenames",
	"gtk_1file_1chooser_1get_1uri",
	"gtk_1file_1chooser_1get_1uris",
	"gtk_1file_1chooser_1set_1current_1folder",
	"gtk_1file_1chooser_1set_1current_1folder_1uri",
	"gtk_1file_1chooser_1set_1do_1overwrite_1confirmation",
	"gtk_1file_1chooser_1set_1extra_1widget",
	"gtk_1file_1chooser_1set_1filename",
	"gtk_1file_1chooser_1set_1local_1only",
	"gtk_1file_1chooser_1set_1uri",
	"gtk_1frame_1set_1shadow_1type",
	"gtk_1get_1current_1event",
	"gtk_1get_1current_1event_1state",
	"gtk_1get_1event_1widget",
	"gtk_1grab_1add",
	"gtk_1grab_1get_1current",
	"gtk_1grab_1remove",
	"gtk_1hsv_1to_1rgb",
	"gtk_1icon_1info_1load_1icon",
	"gtk_1icon_1theme_1get_1default",
	"gtk_1icon_1theme_1load_1icon",
	"gtk_1icon_1theme_1lookup_1by_1gicon",
	"gtk_1im_1context_1filter_1keypress",
	"gtk_1image_1new_1from_1icon_1name",
	"gtk_1image_1new_1from_1surface",
	"gtk_1image_1set_1from_1icon_1name",
	"gtk_1image_1set_1from_1pixbuf",
	"gtk_1image_1set_1from_1surface",
	"gtk_1init_1check",
	"gtk_1label_1set_1line_1wrap",
	"gtk_1label_1set_1line_1wrap_1mode",
	"gtk_1main_1do_1event",
	"gtk_1main_1iteration_1do",
	"gtk_1menu_1bar_1new",
	"gtk_1menu_1item_1get_1submenu",
	"gtk_1menu_1item_1new",
	"gtk_1menu_1item_1set_1submenu",
	"gtk_1menu_1new",
	"gtk_1menu_1popdown",
	"gtk_1menu_1popup_1at_1pointer",
	"gtk_1menu_1popup_1at_1rect",
	"gtk_1menu_1shell_1deactivate",
	"gtk_1menu_1shell_1insert",
	"gtk_1menu_1shell_1set_1take_1focus",
	"gtk_1menu_1tool_1button_1new",
	"gtk_1native_1dialog_1run",
	"gtk_1radio_1button_1get_1group",
	"gtk_1radio_1button_1new",
	"gtk_1radio_1menu_1item_1get_1group",
	"gtk_1radio_1menu_1item_1new",
	"gtk_1rgb_1to_1hsv",
	"gtk_1scrolled_1window_1get_1shadow_1type",
	"gtk_1scrolled_1window_1new",
	"gtk_1scrolled_1window_1set_1shadow_1type",
	"gtk_1selection_1data_1free",
	"gtk_1selection_1data_1get_1data",
	"gtk_1selection_1data_1get_1data_1type",
	"gtk_1selection_1data_1get_1format",
	"gtk_1selection_1data_1get_1length",
	"gtk_1selection_1data_1get_1target",
	"gtk_1selection_1data_1set",
	"gtk_1separator_1menu_1item_1new",
	"gtk_1separator_1tool_1item_1new",
	"gtk_1separator_1tool_1item_1set_1draw",
	"gtk_1status_1icon_1get_1geometry",
	"gtk_1status_1icon_1get_1visible",
	"gtk_1status_1icon_1new",
	"gtk_1status_1icon_1set_1from_1pixbuf",
	"gtk_1status_1icon_1set_1tooltip_1text",
	"gtk_1status_1icon_1set_1visible",
	"gtk_1style_1context_1add_1provider_1for_1screen",
	"gtk_1style_1context_1get",
	"gtk_1style_1context_1get_1border",
	"gtk_1style_1context_1get_1color",
	"gtk_1style_1context_1get_1font",
	"gtk_1style_1context_1get_1padding",
	"gtk_1style_1context_1get_1parent",
	"gtk_1style_1context_1invalidate",
	"gtk_1target_1list_1new",
	"gtk_1target_1list_1unref",
	"gtk_1text_1view_1get_1window",
	"gtk_1toggle_1button_1set_1inconsistent",
	"gtk_1toggle_1tool_1button_1get_1active",
	"gtk_1toggle_1tool_1button_1new",
	"gtk_1toggle_1tool_1button_1set_1active",
	"gtk_1tool_1button_1new",
	"gtk_1tool_1button_1set_1icon_1widget",
	"gtk_1tool_1button_1set_1label_1widget",
	"gtk_1tool_1button_1set_1use_1underline",
	"gtk_1tool_1item_1get_1proxy_1menu_1item",
	"gtk_1tool_1item_1retrieve_1proxy_1menu_1item",
	"gtk_1tool_1item_1set_1homogeneous",
	"gtk_1tool_1item_1set_1is_1important",
	"gtk_1tool_1item_1set_1proxy_1menu_1item",
	"gtk_1toolbar_1insert",
	"gtk_1toolbar_1new",
	"gtk_1toolbar_1set_1icon_1size",
	"gtk_1toolbar_1set_1show_1arrow",
	"gtk_1toolbar_1set_1style",
	"gtk_1tree_1view_1column_1cell_1get_1size",
	"gtk_1tree_1view_1get_1bin_1window",
	"gtk_1viewport_1set_1shadow_1type",
	"gtk_1widget_1add_1accelerator",
	"gtk_1widget_1add_1events",
	"gtk_1widget_1destroy",
	"gtk_1widget_1draw",
	"gtk_1widget_1event",
	"gtk_1widget_1get_1accessible",
	"gtk_1widget_1get_1can_1default",
	"gtk_1widget_1get_1clip",
	"gtk_1widget_1get_1events",
	"gtk_1widget_1get_1has_1window",
	"gtk_1widget_1get_1preferred_1height",
	"gtk_1widget_1get_1preferred_1height_1for_1width",
	"gtk_1widget_1get_1preferred_1width_1for_1height",
	"gtk_1widget_1get_1screen",
	"gtk_1widget_1get_1toplevel",
	"gtk_1widget_1get_1window",
	"gtk_1widget_1input_1shape_1combine_1region",
	"gtk_1widget_1override_1font",
	"gtk_1widget_1remove_1accelerator",
	"gtk_1widget_1reparent",
	"gtk_1widget_1set_1allocation",
	"gtk_1widget_1set_1can_1default",
	"gtk_1widget_1set_1clip",
	"gtk_1widget_1set_1double_1buffered",
	"gtk_1widget_1set_1has_1window",
	"gtk_1widget_1set_1parent_1window",
	"gtk_1widget_1set_1redraw_1on_1allocate",
	"gtk_1widget_1shape_1combine_1region",
	"gtk_1widget_1size_1allocate",
	"gtk_1widget_1style_1get__J_3B_3IJ",
	"gtk_1widget_1style_1get__J_3B_3JJ",
	"gtk_1widget_1translate_1coordinates",
	"gtk_1window_1activate_1default",
	"gtk_1window_1add_1accel_1group",
	"gtk_1window_1deiconify",
	"gtk_1window_1get_1icon_1list",
	"gtk_1window_1get_1mnemonic_1modifier",
	"gtk_1window_1get_1position",
	"gtk_1window_1get_1size",
	"gtk_1window_1iconify",
	"gtk_1window_1move",
	"gtk_1window_1new",
	"gtk_1window_1remove_1accel_1group",
	"gtk_1window_1resize",
	"gtk_1window_1set_1attached_1to",
	"gtk_1window_1set_1default",
	"gtk_1window_1set_1geometry_1hints",
	"gtk_1window_1set_1icon_1list",
	"gtk_1window_1set_1keep_1above",
	"gtk_1window_1set_1skip_1taskbar_1hint",
	"gtk_1window_1set_1type_1hint",
	"memmove__JLorg_eclipse_swt_internal_gtk3_GdkEventButton_2J",
	"memmove__JLorg_eclipse_swt_internal_gtk3_GdkEventKey_2J",
	"memmove__JLorg_eclipse_swt_internal_gtk3_GtkTargetEntry_2J",
	"memmove__Lorg_eclipse_swt_internal_gtk3_GdkEventButton_2JJ",
	"memmove__Lorg_eclipse_swt_internal_gtk3_GdkEventCrossing_2JJ",
	"memmove__Lorg_eclipse_swt_internal_gtk3_GdkEventFocus_2JJ",
	"memmove__Lorg_eclipse_swt_internal_gtk3_GdkEventKey_2JJ",
	"memmove__Lorg_eclipse_swt_internal_gtk3_GdkEventMotion_2JJ",
	"memmove__Lorg_eclipse_swt_internal_gtk3_GdkEventWindowState_2JJ",
};
#define NATIVE_FUNCTION_COUNT sizeof(GTK3_nativeFunctionNames) / sizeof(char*)
int GTK3_nativeFunctionCount = NATIVE_FUNCTION_COUNT;
int GTK3_nativeFunctionCallCount[NATIVE_FUNCTION_COUNT];

#define STATS_NATIVE(func) Java_org_eclipse_swt_tools_internal_NativeStats_##func

JNIEXPORT jint JNICALL STATS_NATIVE(GTK3_1GetFunctionCount)
	(JNIEnv *env, jclass that)
{
	return GTK3_nativeFunctionCount;
}

JNIEXPORT jstring JNICALL STATS_NATIVE(GTK3_1GetFunctionName)
	(JNIEnv *env, jclass that, jint index)
{
	return (*env)->NewStringUTF(env, GTK3_nativeFunctionNames[index]);
}

JNIEXPORT jint JNICALL STATS_NATIVE(GTK3_1GetFunctionCallCount)
	(JNIEnv *env, jclass that, jint index)
{
	return GTK3_nativeFunctionCallCount[index];
}

#endif
