// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __MPN__
#define __MPN__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  class MPN;
};

class ::MPN : public ::java::lang::Object
{
public:
  static jint add_1 (jintArray, jintArray, jint, jint);
  static jint add_n (jintArray, jintArray, jintArray, jint);
  static jint sub_n (jintArray, jintArray, jintArray, jint);
  static jint mul_1 (jintArray, jintArray, jint, jint);
  static void mul (jintArray, jintArray, jint, jintArray, jint);
  static jlong udiv_qrnnd (jlong, jint);
  static jint divmod_1 (jintArray, jintArray, jint, jint);
  static jint submul_1 (jintArray, jint, jintArray, jint, jint);
  static void divide (jintArray, jint, jintArray, jint);
  static jint chars_per_word (jint);
  static jint count_leading_zeros (jint);
  static jint set_str (jintArray, jbyteArray, jint, jint);
  static jint cmp (jintArray, jintArray, jint);
  static jint cmp (jintArray, jint, jintArray, jint);
  static jint rshift (jintArray, jintArray, jint, jint, jint);
  static void rshift0 (jintArray, jintArray, jint, jint, jint);
  static jlong rshift_long (jintArray, jint, jint);
  static jint lshift (jintArray, jint, jintArray, jint, jint);
  static jint findLowestBit (jint);
  static jint findLowestBit (jintArray);
  static jint gcd (jintArray, jintArray, jint);
  static jint intLength (jint);
  static jint intLength (jintArray, jint);
  MPN ();

  static ::java::lang::Class class$;
};

#endif /* __MPN__ */
