/*
 *  Copyright (c) 2006 Giuseppe Torelli <colossus73@gmail.com>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Library General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 */

#ifndef __XARCHIVER_INTERFACE_H__
#define __XARCHIVER_INTERFACE_H__

#include "archive.h"

GtkWidget *MainWindow;
GtkWidget *vbox1;
GtkWidget *vbox_body;
GtkNotebook *notebook;
GtkWidget *hbox_sb;
GtkWidget *hbox_ap;
GtkWidget *menubar1;
GtkWidget *menuitem1;
GtkWidget *menuitem1_menu;
GtkWidget *new1;
GtkWidget *open1;
GtkWidget *entry1;
GtkWidget *progressbar;
GtkWidget *info_label;
GtkWidget *viewport1,*viewport2,*viewport3;

GtkWidget *archive_properties_window;
GtkWidget *table1;
GtkWidget *path_label;
GtkWidget *modified_label;
GtkWidget *size_label;
GtkWidget *content_label;
GtkWidget *comment_label;
GtkWidget *compression_label;
GtkWidget *number_of_files_label;
GtkWidget *number_of_dirs_label;
GtkWidget *name_label;
GtkWidget *type_label;
GtkWidget *compression_data;
GtkWidget *number_of_files_data;
GtkWidget *number_of_dirs_data;
GtkWidget *content_data;
GtkWidget *comment_data;
GtkWidget *size_data;
GtkWidget *modified_data;
GtkWidget *path_data;
GtkWidget *type_data;
GtkWidget *name_data;
GtkWidget *separatormenuitem1;
GtkWidget *separatormenuitem2;
GtkWidget *separatormenuitem3;
GtkWidget *separatormenuitem4;
GtkWidget *quit1;
GtkWidget *close1;
GtkWidget *check_menu;
GtkWidget *properties;
GtkWidget *menuitem2;
GtkWidget *menuitem2_menu;
GtkWidget *addfile;
GtkWidget *extract_menu;
GtkWidget *delete_menu;
GtkWidget *view_menu;
GtkWidget *comment_menu;
GtkWidget *view_shell_output1;
GtkWidget *iso_info;
GtkWidget *password_entry;
GtkWidget *image1;
GtkWidget *image2;
GtkWidget *menuitem4;
GtkWidget *select_all;
GtkWidget *deselect_all;
GtkWidget *exe_menu;
GtkWidget *menuitem4_menu;
GtkWidget *about1;
GtkWidget *help1;
GtkWidget *toolbar1;
GtkIconSize tmp_toolbar_icon_size;
GtkWidget *tmp_image;
GtkWidget *pad_image;
GtkWidget *New_button;
GtkWidget *Open_button;
GtkWidget *separatortoolitem1;
GtkWidget *separatortoolitem2;
GtkWidget *separatortoolitem3;
GtkWidget *AddFile_button;
GtkWidget *Extract_button;
GtkWidget *Delete_button;
GtkWidget *View_button;
GtkWidget *Exe_button;
GtkWidget *Stop_button;
GtkWidget *scrolledwindow1;
GtkWidget *treeview1;
GtkAccelGroup *accel_group;
GtkTooltips *tooltips;
GtkTooltips *pad_tooltip;
GtkWidget *ebox;

void set_label (GtkWidget *label,gchar *text);
int xa_progressbar_pulse (gpointer data);

GtkWidget *view_win ( gchar *title);
GtkWidget *create_MainWindow (void);
GtkWidget *create_archive_properties_window (void);
gchar *password_dialog ();
#endif

