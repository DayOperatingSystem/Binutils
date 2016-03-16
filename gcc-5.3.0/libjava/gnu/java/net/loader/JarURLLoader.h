
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_net_loader_JarURLLoader__
#define __gnu_java_net_loader_JarURLLoader__

#pragma interface

#include <gnu/java/net/loader/URLLoader.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace net
      {
        namespace loader
        {
            class JarURLLoader;
            class Resource;
            class URLStreamHandlerCache;
        }
      }
    }
  }
  namespace java
  {
    namespace net
    {
        class URL;
        class URLClassLoader;
        class URLStreamHandlerFactory;
    }
  }
}

class gnu::java::net::loader::JarURLLoader : public ::gnu::java::net::loader::URLLoader
{

  JarURLLoader(::java::net::URLClassLoader *, ::gnu::java::net::loader::URLStreamHandlerCache *, ::java::net::URLStreamHandlerFactory *, ::java::net::URL *, ::java::net::URL *, ::java::util::Set *);
public:
  JarURLLoader(::java::net::URLClassLoader *, ::gnu::java::net::loader::URLStreamHandlerCache *, ::java::net::URLStreamHandlerFactory *, ::java::net::URL *, ::java::net::URL *);
private:
  void initialize();
public:
  ::gnu::java::net::loader::Resource * getResource(::java::lang::String *);
  ::java::util::jar::Manifest * getManifest();
  ::java::util::ArrayList * getClassPath();
public: // actually package-private
  jboolean __attribute__((aligned(__alignof__( ::gnu::java::net::loader::URLLoader)))) initialized;
  ::java::util::jar::JarFile * jarfile;
  ::java::net::URL * baseJarURL;
  ::java::util::ArrayList * classPath;
  ::java::util::Set * indexSet;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_net_loader_JarURLLoader__