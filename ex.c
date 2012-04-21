/*
 * =====================================================================================
 *
 *       Filename:  gtk.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/21/12 16:19:48
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Tom Xue (), tom.xue@nokia.com
 *        Company:  Nokia
 *
 * =====================================================================================
 */
#include <gtk/gtk.h>

int main( int argc, char *argv[])
{
  GtkWidget *window;
  GtkWidget *label;
  char *str = "hello world !";


  gtk_init(&argc, &argv);
  window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  g_signal_connect_swapped(G_OBJECT(window), "destroy",
  G_CALLBACK(gtk_main_quit), NULL);

  label = gtk_label_new(NULL);
  gtk_label_set_markup(GTK_LABEL(label), str);
  gtk_container_add(GTK_CONTAINER(window), label);
  gtk_widget_show(label);


  gtk_window_set_default_size(GTK_WINDOW(window), 300, 100);
  gtk_widget_show(window);

  gtk_main();

  return 0;
}
