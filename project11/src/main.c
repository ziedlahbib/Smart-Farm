/*
 * Initial main.c file generated by Glade. Edit as required.
 * Glade will not overwrite this file.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "interface.h"
#include "support.h"

int
main (int argc, char *argv[])
{
  GtkWidget *windowAMSTroupeaux;
  GtkWidget *windowAffichage;
  GtkWidget *dialog1;
  GtkWidget *windowAffnbrtroupeaux;
  GtkWidget *dialog2;
  GtkWidget *dialog3;
  GtkWidget *dialog4;
  GtkWidget *dialog5;

#ifdef ENABLE_NLS
  bindtextdomain (GETTEXT_PACKAGE, PACKAGE_LOCALE_DIR);
  bind_textdomain_codeset (GETTEXT_PACKAGE, "UTF-8");
  textdomain (GETTEXT_PACKAGE);
#endif

  gtk_set_locale ();
  gtk_init (&argc, &argv);

  add_pixmap_directory (PACKAGE_DATA_DIR "/" PACKAGE "/pixmaps");

  /*
   * The following code was added by Glade to create one of each component
   * (except popup menus), just so that you see something after building
   * the project. Delete any components that you don't want shown initially.
   */
  windowAMSTroupeaux = create_windowAMSTroupeaux ();
  gtk_widget_show (windowAMSTroupeaux);
  windowAffichage = create_windowAffichage ();
  gtk_widget_show (windowAffichage);
  dialog1 = create_dialog1 ();
  gtk_widget_show (dialog1);
  windowAffnbrtroupeaux = create_windowAffnbrtroupeaux ();
  gtk_widget_show (windowAffnbrtroupeaux);
  dialog2 = create_dialog2 ();
  gtk_widget_show (dialog2);
  dialog3 = create_dialog3 ();
  gtk_widget_show (dialog3);
  dialog4 = create_dialog4 ();
  gtk_widget_show (dialog4);
  dialog5 = create_dialog5 ();
  gtk_widget_show (dialog5);

  gtk_main ();
  return 0;
}
