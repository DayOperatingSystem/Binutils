
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_concurrent_PriorityBlockingQueue$Itr__
#define __java_util_concurrent_PriorityBlockingQueue$Itr__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>


class java::util::concurrent::PriorityBlockingQueue$Itr : public ::java::lang::Object
{

public: // actually package-private
  PriorityBlockingQueue$Itr(::java::util::concurrent::PriorityBlockingQueue *, JArray< ::java::lang::Object * > *);
public:
  virtual jboolean hasNext();
  virtual ::java::lang::Object * next();
  virtual void remove();
public: // actually package-private
  JArray< ::java::lang::Object * > * __attribute__((aligned(__alignof__( ::java::lang::Object)))) array;
  jint cursor;
  jint lastRet;
  ::java::util::concurrent::PriorityBlockingQueue * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_concurrent_PriorityBlockingQueue$Itr__