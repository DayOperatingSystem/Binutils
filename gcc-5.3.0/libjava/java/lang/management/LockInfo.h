
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_management_LockInfo__
#define __java_lang_management_LockInfo__

#pragma interface

#include <java/lang/Object.h>

class java::lang::management::LockInfo : public ::java::lang::Object
{

public:
  LockInfo(::java::lang::String *, jint);
  virtual ::java::lang::String * getClassName();
  virtual jint getIdentityHashCode();
  virtual ::java::lang::String * toString();
private:
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object)))) className;
  jint identityHashCode;
public:
  static ::java::lang::Class class$;
};

#endif // __java_lang_management_LockInfo__