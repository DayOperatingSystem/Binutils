
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_peer_gtk_GtkMenuItemPeer__
#define __gnu_java_awt_peer_gtk_GtkMenuItemPeer__

#pragma interface

#include <gnu/java/awt/peer/gtk/GtkMenuComponentPeer.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
        namespace peer
        {
          namespace gtk
          {
              class GtkMenuItemPeer;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace awt
    {
        class MenuItem;
    }
  }
}

class gnu::java::awt::peer::gtk::GtkMenuItemPeer : public ::gnu::java::awt::peer::gtk::GtkMenuComponentPeer
{

public: // actually protected
  virtual void create(::java::lang::String *);
  virtual void connectSignals();
  virtual void gtkWidgetModifyFont(::java::lang::String *, jint, jint);
  virtual void create();
public:
  GtkMenuItemPeer(::java::awt::MenuItem *);
  virtual void disable();
  virtual void enable();
  virtual void setEnabled(jboolean);
  virtual void setLabel(::java::lang::String *);
public: // actually protected
  virtual void postMenuActionEvent();
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_awt_peer_gtk_GtkMenuItemPeer__
