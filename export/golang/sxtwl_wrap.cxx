/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 4.0.2
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

// source: swig\sxtwl.i

#define SWIGMODULE sxtwl

#ifdef __cplusplus
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigMovePointer {
    T *ptr;
    SwigMovePointer(T *p) : ptr(p) { }
    ~SwigMovePointer() { delete ptr; }
    SwigMovePointer& operator=(SwigMovePointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigMovePointer tmp(new T(t)); pointer = tmp; return *this; }
  operator T&() const { return *pointer.ptr; }
  T *operator&() { return pointer.ptr; }
};

template <typename T> T SwigValueInit() {
  return T();
}
#endif

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if defined(__GNUC__)
#  if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#    ifndef GCC_HASCLASSVISIBILITY
#      define GCC_HASCLASSVISIBILITY
#    endif
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif

/* Deal with Apple's deprecated 'AssertMacros.h' from Carbon-framework */
#if defined(__APPLE__) && !defined(__ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES)
# define __ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES 0
#endif

/* Intel's compiler complains if a variable which was never initialised is
 * cast to void, which is a common idiom which we use to indicate that we
 * are aware a variable isn't used.  So we just silence that warning.
 * See: https://github.com/swig/swig/issues/192 for more discussion.
 */
#ifdef __INTEL_COMPILER
# pragma warning disable 592
#endif


#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>



typedef int intgo;
typedef unsigned int uintgo;


# if !defined(__clang__) && (defined(__i386__) || defined(__x86_64__))
#   define SWIGSTRUCTPACKED __attribute__((__packed__, __gcc_struct__))
# else
#   define SWIGSTRUCTPACKED __attribute__((__packed__))
# endif



typedef struct { char *p; intgo n; } _gostring_;
typedef struct { void* array; intgo len; intgo cap; } _goslice_;




#define swiggo_size_assert_eq(x, y, name) typedef char name[(x-y)*(x-y)*-2+1];
#define swiggo_size_assert(t, n) swiggo_size_assert_eq(sizeof(t), n, swiggo_sizeof_##t##_is_not_##n)

swiggo_size_assert(char, 1)
swiggo_size_assert(short, 2)
swiggo_size_assert(int, 4)
typedef long long swiggo_long_long;
swiggo_size_assert(swiggo_long_long, 8)
swiggo_size_assert(float, 4)
swiggo_size_assert(double, 8)

#ifdef __cplusplus
extern "C" {
#endif
extern void crosscall2(void (*fn)(void *, int), void *, int);
extern char* _cgo_topofstack(void) __attribute__ ((weak));
extern void _cgo_allocate(void *, int);
extern void _cgo_panic(void *, int);
#ifdef __cplusplus
}
#endif

static char *_swig_topofstack() {
  if (_cgo_topofstack) {
    return _cgo_topofstack();
  } else {
    return 0;
  }
}

static void _swig_gopanic(const char *p) {
  struct {
    const char *p;
  } SWIGSTRUCTPACKED a;
  a.p = p;
  crosscall2(_cgo_panic, &a, (int) sizeof a);
}




#define SWIG_contract_assert(expr, msg) \
  if (!(expr)) { _swig_gopanic(msg); } else


static void Swig_free(void* p) {
  free(p);
}

static void* Swig_malloc(int c) {
  return malloc(c);
}


#include "const.h"
#include "sxtwl.h"


#include <stdint.h>		// Use the C99 official header


#include <vector>
#include <stdexcept>


#include <string>

SWIGINTERN std::vector< double >::const_reference std_vector_Sl_double_Sg__get(std::vector< double > *self,int i){
                int size = int(self->size());
                if (i>=0 && i<size)
                    return (*self)[i];
                else
                    throw std::out_of_range("vector index out of range");
            }
SWIGINTERN void std_vector_Sl_double_Sg__set(std::vector< double > *self,int i,std::vector< double >::value_type const &val){
                int size = int(self->size());
                if (i>=0 && i<size)
                    (*self)[i] = val;
                else
                    throw std::out_of_range("vector index out of range");
            }
#ifdef __cplusplus
extern "C" {
#endif

void _wrap_Swig_free_sxtwl_0766e672ea1b148b(void *_swig_go_0) {
  void *arg1 = (void *) 0 ;
  
  arg1 = *(void **)&_swig_go_0; 
  
  Swig_free(arg1);
  
}


void *_wrap_Swig_malloc_sxtwl_0766e672ea1b148b(intgo _swig_go_0) {
  int arg1 ;
  void *result = 0 ;
  void *_swig_go_result;
  
  arg1 = (int)_swig_go_0; 
  
  result = (void *)Swig_malloc(arg1);
  *(void **)&_swig_go_result = (void *)result; 
  return _swig_go_result;
}


std::vector< double > *_wrap_new_JDList__SWIG_0_sxtwl_0766e672ea1b148b() {
  std::vector< double > *result = 0 ;
  std::vector< double > *_swig_go_result;
  
  
  result = (std::vector< double > *)new std::vector< double >();
  *(std::vector< double > **)&_swig_go_result = (std::vector< double > *)result; 
  return _swig_go_result;
}


std::vector< double > *_wrap_new_JDList__SWIG_1_sxtwl_0766e672ea1b148b(long long _swig_go_0) {
  std::vector< double >::size_type arg1 ;
  std::vector< double > *result = 0 ;
  std::vector< double > *_swig_go_result;
  
  arg1 = (size_t)_swig_go_0; 
  
  result = (std::vector< double > *)new std::vector< double >(arg1);
  *(std::vector< double > **)&_swig_go_result = (std::vector< double > *)result; 
  return _swig_go_result;
}


std::vector< double > *_wrap_new_JDList__SWIG_2_sxtwl_0766e672ea1b148b(std::vector< double > *_swig_go_0) {
  std::vector< double > *arg1 = 0 ;
  std::vector< double > *result = 0 ;
  std::vector< double > *_swig_go_result;
  
  arg1 = *(std::vector< double > **)&_swig_go_0; 
  
  result = (std::vector< double > *)new std::vector< double >((std::vector< double > const &)*arg1);
  *(std::vector< double > **)&_swig_go_result = (std::vector< double > *)result; 
  return _swig_go_result;
}


long long _wrap_JDList_size_sxtwl_0766e672ea1b148b(std::vector< double > *_swig_go_0) {
  std::vector< double > *arg1 = (std::vector< double > *) 0 ;
  std::vector< double >::size_type result;
  long long _swig_go_result;
  
  arg1 = *(std::vector< double > **)&_swig_go_0; 
  
  result = ((std::vector< double > const *)arg1)->size();
  _swig_go_result = result; 
  return _swig_go_result;
}


long long _wrap_JDList_capacity_sxtwl_0766e672ea1b148b(std::vector< double > *_swig_go_0) {
  std::vector< double > *arg1 = (std::vector< double > *) 0 ;
  std::vector< double >::size_type result;
  long long _swig_go_result;
  
  arg1 = *(std::vector< double > **)&_swig_go_0; 
  
  result = ((std::vector< double > const *)arg1)->capacity();
  _swig_go_result = result; 
  return _swig_go_result;
}


void _wrap_JDList_reserve_sxtwl_0766e672ea1b148b(std::vector< double > *_swig_go_0, long long _swig_go_1) {
  std::vector< double > *arg1 = (std::vector< double > *) 0 ;
  std::vector< double >::size_type arg2 ;
  
  arg1 = *(std::vector< double > **)&_swig_go_0; 
  arg2 = (size_t)_swig_go_1; 
  
  (arg1)->reserve(arg2);
  
}


bool _wrap_JDList_isEmpty_sxtwl_0766e672ea1b148b(std::vector< double > *_swig_go_0) {
  std::vector< double > *arg1 = (std::vector< double > *) 0 ;
  bool result;
  bool _swig_go_result;
  
  arg1 = *(std::vector< double > **)&_swig_go_0; 
  
  result = (bool)((std::vector< double > const *)arg1)->empty();
  _swig_go_result = result; 
  return _swig_go_result;
}


void _wrap_JDList_clear_sxtwl_0766e672ea1b148b(std::vector< double > *_swig_go_0) {
  std::vector< double > *arg1 = (std::vector< double > *) 0 ;
  
  arg1 = *(std::vector< double > **)&_swig_go_0; 
  
  (arg1)->clear();
  
}


void _wrap_JDList_add_sxtwl_0766e672ea1b148b(std::vector< double > *_swig_go_0, double _swig_go_1) {
  std::vector< double > *arg1 = (std::vector< double > *) 0 ;
  std::vector< double >::value_type *arg2 = 0 ;
  
  arg1 = *(std::vector< double > **)&_swig_go_0; 
  arg2 = (std::vector< double >::value_type *)&_swig_go_1; 
  
  (arg1)->push_back((std::vector< double >::value_type const &)*arg2);
  
}


double _wrap_JDList_get_sxtwl_0766e672ea1b148b(std::vector< double > *_swig_go_0, intgo _swig_go_1) {
  std::vector< double > *arg1 = (std::vector< double > *) 0 ;
  int arg2 ;
  std::vector< double >::value_type *result = 0 ;
  double _swig_go_result;
  
  arg1 = *(std::vector< double > **)&_swig_go_0; 
  arg2 = (int)_swig_go_1; 
  
  try {
    result = (std::vector< double >::value_type *) &std_vector_Sl_double_Sg__get(arg1,arg2);
  } catch(std::out_of_range &_e) {
    (void)_e;
    _swig_gopanic("C++ std::out_of_range exception thrown");
    
  }
  _swig_go_result = (double)*result; 
  return _swig_go_result;
}


void _wrap_JDList_set_sxtwl_0766e672ea1b148b(std::vector< double > *_swig_go_0, intgo _swig_go_1, double _swig_go_2) {
  std::vector< double > *arg1 = (std::vector< double > *) 0 ;
  int arg2 ;
  std::vector< double >::value_type *arg3 = 0 ;
  
  arg1 = *(std::vector< double > **)&_swig_go_0; 
  arg2 = (int)_swig_go_1; 
  arg3 = (std::vector< double >::value_type *)&_swig_go_2; 
  
  try {
    std_vector_Sl_double_Sg__set(arg1,arg2,(double const &)*arg3);
  } catch(std::out_of_range &_e) {
    (void)_e;
    _swig_gopanic("C++ std::out_of_range exception thrown");
    
  }
  
}


void _wrap_delete_JDList_sxtwl_0766e672ea1b148b(std::vector< double > *_swig_go_0) {
  std::vector< double > *arg1 = (std::vector< double > *) 0 ;
  
  arg1 = *(std::vector< double > **)&_swig_go_0; 
  
  delete arg1;
  
}


Time *_wrap_new_Time__SWIG_0_sxtwl_0766e672ea1b148b() {
  Time *result = 0 ;
  Time *_swig_go_result;
  
  
  result = (Time *)new Time();
  *(Time **)&_swig_go_result = (Time *)result; 
  return _swig_go_result;
}


Time *_wrap_new_Time__SWIG_1_sxtwl_0766e672ea1b148b(intgo _swig_go_0, intgo _swig_go_1, intgo _swig_go_2, double _swig_go_3, double _swig_go_4, double _swig_go_5) {
  int arg1 ;
  int arg2 ;
  int arg3 ;
  double arg4 ;
  double arg5 ;
  double arg6 ;
  Time *result = 0 ;
  Time *_swig_go_result;
  
  arg1 = (int)_swig_go_0; 
  arg2 = (int)_swig_go_1; 
  arg3 = (int)_swig_go_2; 
  arg4 = (double)_swig_go_3; 
  arg5 = (double)_swig_go_4; 
  arg6 = (double)_swig_go_5; 
  
  result = (Time *)new Time(arg1,arg2,arg3,arg4,arg5,arg6);
  *(Time **)&_swig_go_result = (Time *)result; 
  return _swig_go_result;
}


void _wrap_Time_Y_set_sxtwl_0766e672ea1b148b(Time *_swig_go_0, intgo _swig_go_1) {
  Time *arg1 = (Time *) 0 ;
  int arg2 ;
  
  arg1 = *(Time **)&_swig_go_0; 
  arg2 = (int)_swig_go_1; 
  
  if (arg1) (arg1)->Y = arg2;
  
}


intgo _wrap_Time_Y_get_sxtwl_0766e672ea1b148b(Time *_swig_go_0) {
  Time *arg1 = (Time *) 0 ;
  int result;
  intgo _swig_go_result;
  
  arg1 = *(Time **)&_swig_go_0; 
  
  result = (int) ((arg1)->Y);
  _swig_go_result = result; 
  return _swig_go_result;
}


void _wrap_Time_M_set_sxtwl_0766e672ea1b148b(Time *_swig_go_0, intgo _swig_go_1) {
  Time *arg1 = (Time *) 0 ;
  int arg2 ;
  
  arg1 = *(Time **)&_swig_go_0; 
  arg2 = (int)_swig_go_1; 
  
  if (arg1) (arg1)->M = arg2;
  
}


intgo _wrap_Time_M_get_sxtwl_0766e672ea1b148b(Time *_swig_go_0) {
  Time *arg1 = (Time *) 0 ;
  int result;
  intgo _swig_go_result;
  
  arg1 = *(Time **)&_swig_go_0; 
  
  result = (int) ((arg1)->M);
  _swig_go_result = result; 
  return _swig_go_result;
}


void _wrap_Time_D_set_sxtwl_0766e672ea1b148b(Time *_swig_go_0, intgo _swig_go_1) {
  Time *arg1 = (Time *) 0 ;
  int arg2 ;
  
  arg1 = *(Time **)&_swig_go_0; 
  arg2 = (int)_swig_go_1; 
  
  if (arg1) (arg1)->D = arg2;
  
}


intgo _wrap_Time_D_get_sxtwl_0766e672ea1b148b(Time *_swig_go_0) {
  Time *arg1 = (Time *) 0 ;
  int result;
  intgo _swig_go_result;
  
  arg1 = *(Time **)&_swig_go_0; 
  
  result = (int) ((arg1)->D);
  _swig_go_result = result; 
  return _swig_go_result;
}


void _wrap_Time_h_set_sxtwl_0766e672ea1b148b(Time *_swig_go_0, double _swig_go_1) {
  Time *arg1 = (Time *) 0 ;
  double arg2 ;
  
  arg1 = *(Time **)&_swig_go_0; 
  arg2 = (double)_swig_go_1; 
  
  if (arg1) (arg1)->h = arg2;
  
}


double _wrap_Time_h_get_sxtwl_0766e672ea1b148b(Time *_swig_go_0) {
  Time *arg1 = (Time *) 0 ;
  double result;
  double _swig_go_result;
  
  arg1 = *(Time **)&_swig_go_0; 
  
  result = (double) ((arg1)->h);
  _swig_go_result = result; 
  return _swig_go_result;
}


void _wrap_Time_s_set_sxtwl_0766e672ea1b148b(Time *_swig_go_0, double _swig_go_1) {
  Time *arg1 = (Time *) 0 ;
  double arg2 ;
  
  arg1 = *(Time **)&_swig_go_0; 
  arg2 = (double)_swig_go_1; 
  
  if (arg1) (arg1)->s = arg2;
  
}


double _wrap_Time_s_get_sxtwl_0766e672ea1b148b(Time *_swig_go_0) {
  Time *arg1 = (Time *) 0 ;
  double result;
  double _swig_go_result;
  
  arg1 = *(Time **)&_swig_go_0; 
  
  result = (double) ((arg1)->s);
  _swig_go_result = result; 
  return _swig_go_result;
}


intgo _wrap_Time_getYear_sxtwl_0766e672ea1b148b(Time *_swig_go_0) {
  Time *arg1 = (Time *) 0 ;
  int result;
  intgo _swig_go_result;
  
  arg1 = *(Time **)&_swig_go_0; 
  
  result = (int)(arg1)->getYear();
  _swig_go_result = result; 
  return _swig_go_result;
}


void _wrap_Time_setYear_sxtwl_0766e672ea1b148b(Time *_swig_go_0, intgo _swig_go_1) {
  Time *arg1 = (Time *) 0 ;
  int arg2 ;
  
  arg1 = *(Time **)&_swig_go_0; 
  arg2 = (int)_swig_go_1; 
  
  (arg1)->setYear(arg2);
  
}


void _wrap_Time_setMonth_sxtwl_0766e672ea1b148b(Time *_swig_go_0, intgo _swig_go_1) {
  Time *arg1 = (Time *) 0 ;
  int arg2 ;
  
  arg1 = *(Time **)&_swig_go_0; 
  arg2 = (int)_swig_go_1; 
  
  (arg1)->setMonth(arg2);
  
}


intgo _wrap_Time_getMonth_sxtwl_0766e672ea1b148b(Time *_swig_go_0) {
  Time *arg1 = (Time *) 0 ;
  int result;
  intgo _swig_go_result;
  
  arg1 = *(Time **)&_swig_go_0; 
  
  result = (int)(arg1)->getMonth();
  _swig_go_result = result; 
  return _swig_go_result;
}


intgo _wrap_Time_getDay_sxtwl_0766e672ea1b148b(Time *_swig_go_0) {
  Time *arg1 = (Time *) 0 ;
  int result;
  intgo _swig_go_result;
  
  arg1 = *(Time **)&_swig_go_0; 
  
  result = (int)(arg1)->getDay();
  _swig_go_result = result; 
  return _swig_go_result;
}


void _wrap_Time_setDay_sxtwl_0766e672ea1b148b(Time *_swig_go_0, intgo _swig_go_1) {
  Time *arg1 = (Time *) 0 ;
  int arg2 ;
  
  arg1 = *(Time **)&_swig_go_0; 
  arg2 = (int)_swig_go_1; 
  
  (arg1)->setDay(arg2);
  
}


double _wrap_Time_getHour_sxtwl_0766e672ea1b148b(Time *_swig_go_0) {
  Time *arg1 = (Time *) 0 ;
  double result;
  double _swig_go_result;
  
  arg1 = *(Time **)&_swig_go_0; 
  
  result = (double)(arg1)->getHour();
  _swig_go_result = result; 
  return _swig_go_result;
}


void _wrap_Time_setHour_sxtwl_0766e672ea1b148b(Time *_swig_go_0, double _swig_go_1) {
  Time *arg1 = (Time *) 0 ;
  double arg2 ;
  
  arg1 = *(Time **)&_swig_go_0; 
  arg2 = (double)_swig_go_1; 
  
  (arg1)->setHour(arg2);
  
}


double _wrap_Time_getMin_sxtwl_0766e672ea1b148b(Time *_swig_go_0) {
  Time *arg1 = (Time *) 0 ;
  double result;
  double _swig_go_result;
  
  arg1 = *(Time **)&_swig_go_0; 
  
  result = (double)(arg1)->getMin();
  _swig_go_result = result; 
  return _swig_go_result;
}


void _wrap_Time_setMour_sxtwl_0766e672ea1b148b(Time *_swig_go_0, double _swig_go_1) {
  Time *arg1 = (Time *) 0 ;
  double arg2 ;
  
  arg1 = *(Time **)&_swig_go_0; 
  arg2 = (double)_swig_go_1; 
  
  (arg1)->setMour(arg2);
  
}


double _wrap_Time_getSec_sxtwl_0766e672ea1b148b(Time *_swig_go_0) {
  Time *arg1 = (Time *) 0 ;
  double result;
  double _swig_go_result;
  
  arg1 = *(Time **)&_swig_go_0; 
  
  result = (double)(arg1)->getSec();
  _swig_go_result = result; 
  return _swig_go_result;
}


void _wrap_Time_setSec_sxtwl_0766e672ea1b148b(Time *_swig_go_0, double _swig_go_1) {
  Time *arg1 = (Time *) 0 ;
  double arg2 ;
  
  arg1 = *(Time **)&_swig_go_0; 
  arg2 = (double)_swig_go_1; 
  
  (arg1)->setSec(arg2);
  
}


void _wrap_delete_Time_sxtwl_0766e672ea1b148b(Time *_swig_go_0) {
  Time *arg1 = (Time *) 0 ;
  
  arg1 = *(Time **)&_swig_go_0; 
  
  delete arg1;
  
}


GZ *_wrap_new_GZ__SWIG_0_sxtwl_0766e672ea1b148b() {
  GZ *result = 0 ;
  GZ *_swig_go_result;
  
  
  result = (GZ *)new GZ();
  *(GZ **)&_swig_go_result = (GZ *)result; 
  return _swig_go_result;
}


GZ *_wrap_new_GZ__SWIG_1_sxtwl_0766e672ea1b148b(char _swig_go_0, char _swig_go_1) {
  uint8_t arg1 ;
  uint8_t arg2 ;
  GZ *result = 0 ;
  GZ *_swig_go_result;
  
  arg1 = (uint8_t)_swig_go_0; 
  arg2 = (uint8_t)_swig_go_1; 
  
  result = (GZ *)new GZ(arg1,arg2);
  *(GZ **)&_swig_go_result = (GZ *)result; 
  return _swig_go_result;
}


void _wrap_GZ_tg_set_sxtwl_0766e672ea1b148b(GZ *_swig_go_0, char _swig_go_1) {
  GZ *arg1 = (GZ *) 0 ;
  uint8_t arg2 ;
  
  arg1 = *(GZ **)&_swig_go_0; 
  arg2 = (uint8_t)_swig_go_1; 
  
  if (arg1) (arg1)->tg = arg2;
  
}


char _wrap_GZ_tg_get_sxtwl_0766e672ea1b148b(GZ *_swig_go_0) {
  GZ *arg1 = (GZ *) 0 ;
  uint8_t result;
  char _swig_go_result;
  
  arg1 = *(GZ **)&_swig_go_0; 
  
  result = (uint8_t) ((arg1)->tg);
  _swig_go_result = result; 
  return _swig_go_result;
}


void _wrap_GZ_dz_set_sxtwl_0766e672ea1b148b(GZ *_swig_go_0, char _swig_go_1) {
  GZ *arg1 = (GZ *) 0 ;
  uint8_t arg2 ;
  
  arg1 = *(GZ **)&_swig_go_0; 
  arg2 = (uint8_t)_swig_go_1; 
  
  if (arg1) (arg1)->dz = arg2;
  
}


char _wrap_GZ_dz_get_sxtwl_0766e672ea1b148b(GZ *_swig_go_0) {
  GZ *arg1 = (GZ *) 0 ;
  uint8_t result;
  char _swig_go_result;
  
  arg1 = *(GZ **)&_swig_go_0; 
  
  result = (uint8_t) ((arg1)->dz);
  _swig_go_result = result; 
  return _swig_go_result;
}


void _wrap_delete_GZ_sxtwl_0766e672ea1b148b(GZ *_swig_go_0) {
  GZ *arg1 = (GZ *) 0 ;
  
  arg1 = *(GZ **)&_swig_go_0; 
  
  delete arg1;
  
}


Day *_wrap_Day_fromSolar_sxtwl_0766e672ea1b148b(intgo _swig_go_0, char _swig_go_1, intgo _swig_go_2) {
  int arg1 ;
  uint8_t arg2 ;
  int arg3 ;
  Day *result = 0 ;
  Day *_swig_go_result;
  
  arg1 = (int)_swig_go_0; 
  arg2 = (uint8_t)_swig_go_1; 
  arg3 = (int)_swig_go_2; 
  
  result = (Day *)Day::fromSolar(arg1,arg2,arg3);
  *(Day **)&_swig_go_result = (Day *)result; 
  return _swig_go_result;
}


Day *_wrap_Day_fromLunar__SWIG_0_sxtwl_0766e672ea1b148b(intgo _swig_go_0, char _swig_go_1, intgo _swig_go_2, bool _swig_go_3) {
  int arg1 ;
  uint8_t arg2 ;
  int arg3 ;
  bool arg4 ;
  Day *result = 0 ;
  Day *_swig_go_result;
  
  arg1 = (int)_swig_go_0; 
  arg2 = (uint8_t)_swig_go_1; 
  arg3 = (int)_swig_go_2; 
  arg4 = (bool)_swig_go_3; 
  
  result = (Day *)Day::fromLunar(arg1,arg2,arg3,arg4);
  *(Day **)&_swig_go_result = (Day *)result; 
  return _swig_go_result;
}


Day *_wrap_Day_fromLunar__SWIG_1_sxtwl_0766e672ea1b148b(intgo _swig_go_0, char _swig_go_1, intgo _swig_go_2) {
  int arg1 ;
  uint8_t arg2 ;
  int arg3 ;
  Day *result = 0 ;
  Day *_swig_go_result;
  
  arg1 = (int)_swig_go_0; 
  arg2 = (uint8_t)_swig_go_1; 
  arg3 = (int)_swig_go_2; 
  
  result = (Day *)Day::fromLunar(arg1,arg2,arg3);
  *(Day **)&_swig_go_result = (Day *)result; 
  return _swig_go_result;
}


Day *_wrap_Day_after_sxtwl_0766e672ea1b148b(Day *_swig_go_0, intgo _swig_go_1) {
  Day *arg1 = (Day *) 0 ;
  int arg2 ;
  Day *result = 0 ;
  Day *_swig_go_result;
  
  arg1 = *(Day **)&_swig_go_0; 
  arg2 = (int)_swig_go_1; 
  
  result = (Day *)(arg1)->after(arg2);
  *(Day **)&_swig_go_result = (Day *)result; 
  return _swig_go_result;
}


Day *_wrap_Day_before_sxtwl_0766e672ea1b148b(Day *_swig_go_0, intgo _swig_go_1) {
  Day *arg1 = (Day *) 0 ;
  int arg2 ;
  Day *result = 0 ;
  Day *_swig_go_result;
  
  arg1 = *(Day **)&_swig_go_0; 
  arg2 = (int)_swig_go_1; 
  
  result = (Day *)(arg1)->before(arg2);
  *(Day **)&_swig_go_result = (Day *)result; 
  return _swig_go_result;
}


intgo _wrap_Day_getLunarDay_sxtwl_0766e672ea1b148b(Day *_swig_go_0) {
  Day *arg1 = (Day *) 0 ;
  int result;
  intgo _swig_go_result;
  
  arg1 = *(Day **)&_swig_go_0; 
  
  result = (int)(arg1)->getLunarDay();
  _swig_go_result = result; 
  return _swig_go_result;
}


char _wrap_Day_getLunarMonth_sxtwl_0766e672ea1b148b(Day *_swig_go_0) {
  Day *arg1 = (Day *) 0 ;
  uint8_t result;
  char _swig_go_result;
  
  arg1 = *(Day **)&_swig_go_0; 
  
  result = (uint8_t)(arg1)->getLunarMonth();
  _swig_go_result = result; 
  return _swig_go_result;
}


intgo _wrap_Day_getLunarYear__SWIG_0_sxtwl_0766e672ea1b148b(Day *_swig_go_0, bool _swig_go_1) {
  Day *arg1 = (Day *) 0 ;
  bool arg2 ;
  int result;
  intgo _swig_go_result;
  
  arg1 = *(Day **)&_swig_go_0; 
  arg2 = (bool)_swig_go_1; 
  
  result = (int)(arg1)->getLunarYear(arg2);
  _swig_go_result = result; 
  return _swig_go_result;
}


intgo _wrap_Day_getLunarYear__SWIG_1_sxtwl_0766e672ea1b148b(Day *_swig_go_0) {
  Day *arg1 = (Day *) 0 ;
  int result;
  intgo _swig_go_result;
  
  arg1 = *(Day **)&_swig_go_0; 
  
  result = (int)(arg1)->getLunarYear();
  _swig_go_result = result; 
  return _swig_go_result;
}


GZ *_wrap_Day_getYearGZ__SWIG_0_sxtwl_0766e672ea1b148b(Day *_swig_go_0, bool _swig_go_1) {
  Day *arg1 = (Day *) 0 ;
  bool arg2 ;
  GZ result;
  GZ *_swig_go_result;
  
  arg1 = *(Day **)&_swig_go_0; 
  arg2 = (bool)_swig_go_1; 
  
  result = (arg1)->getYearGZ(arg2);
  *(GZ **)&_swig_go_result = new GZ(result); 
  return _swig_go_result;
}


GZ *_wrap_Day_getYearGZ__SWIG_1_sxtwl_0766e672ea1b148b(Day *_swig_go_0) {
  Day *arg1 = (Day *) 0 ;
  GZ result;
  GZ *_swig_go_result;
  
  arg1 = *(Day **)&_swig_go_0; 
  
  result = (arg1)->getYearGZ();
  *(GZ **)&_swig_go_result = new GZ(result); 
  return _swig_go_result;
}


GZ *_wrap_Day_getMonthGZ_sxtwl_0766e672ea1b148b(Day *_swig_go_0) {
  Day *arg1 = (Day *) 0 ;
  GZ result;
  GZ *_swig_go_result;
  
  arg1 = *(Day **)&_swig_go_0; 
  
  result = (arg1)->getMonthGZ();
  *(GZ **)&_swig_go_result = new GZ(result); 
  return _swig_go_result;
}


GZ *_wrap_Day_getDayGZ_sxtwl_0766e672ea1b148b(Day *_swig_go_0) {
  Day *arg1 = (Day *) 0 ;
  GZ result;
  GZ *_swig_go_result;
  
  arg1 = *(Day **)&_swig_go_0; 
  
  result = (arg1)->getDayGZ();
  *(GZ **)&_swig_go_result = new GZ(result); 
  return _swig_go_result;
}


GZ *_wrap_Day_getHourGZ__SWIG_0_sxtwl_0766e672ea1b148b(Day *_swig_go_0, char _swig_go_1, bool _swig_go_2) {
  Day *arg1 = (Day *) 0 ;
  uint8_t arg2 ;
  bool arg3 ;
  GZ result;
  GZ *_swig_go_result;
  
  arg1 = *(Day **)&_swig_go_0; 
  arg2 = (uint8_t)_swig_go_1; 
  arg3 = (bool)_swig_go_2; 
  
  result = (arg1)->getHourGZ(arg2,arg3);
  *(GZ **)&_swig_go_result = new GZ(result); 
  return _swig_go_result;
}


GZ *_wrap_Day_getHourGZ__SWIG_1_sxtwl_0766e672ea1b148b(Day *_swig_go_0, char _swig_go_1) {
  Day *arg1 = (Day *) 0 ;
  uint8_t arg2 ;
  GZ result;
  GZ *_swig_go_result;
  
  arg1 = *(Day **)&_swig_go_0; 
  arg2 = (uint8_t)_swig_go_1; 
  
  result = (arg1)->getHourGZ(arg2);
  *(GZ **)&_swig_go_result = new GZ(result); 
  return _swig_go_result;
}


bool _wrap_Day_isLunarLeap_sxtwl_0766e672ea1b148b(Day *_swig_go_0) {
  Day *arg1 = (Day *) 0 ;
  bool result;
  bool _swig_go_result;
  
  arg1 = *(Day **)&_swig_go_0; 
  
  result = (bool)(arg1)->isLunarLeap();
  _swig_go_result = result; 
  return _swig_go_result;
}


intgo _wrap_Day_getSolarYear_sxtwl_0766e672ea1b148b(Day *_swig_go_0) {
  Day *arg1 = (Day *) 0 ;
  int result;
  intgo _swig_go_result;
  
  arg1 = *(Day **)&_swig_go_0; 
  
  result = (int)(arg1)->getSolarYear();
  _swig_go_result = result; 
  return _swig_go_result;
}


char _wrap_Day_getSolarMonth_sxtwl_0766e672ea1b148b(Day *_swig_go_0) {
  Day *arg1 = (Day *) 0 ;
  uint8_t result;
  char _swig_go_result;
  
  arg1 = *(Day **)&_swig_go_0; 
  
  result = (uint8_t)(arg1)->getSolarMonth();
  _swig_go_result = result; 
  return _swig_go_result;
}


intgo _wrap_Day_getSolarDay_sxtwl_0766e672ea1b148b(Day *_swig_go_0) {
  Day *arg1 = (Day *) 0 ;
  int result;
  intgo _swig_go_result;
  
  arg1 = *(Day **)&_swig_go_0; 
  
  result = (int)(arg1)->getSolarDay();
  _swig_go_result = result; 
  return _swig_go_result;
}


char _wrap_Day_getWeek_sxtwl_0766e672ea1b148b(Day *_swig_go_0) {
  Day *arg1 = (Day *) 0 ;
  uint8_t result;
  char _swig_go_result;
  
  arg1 = *(Day **)&_swig_go_0; 
  
  result = (uint8_t)(arg1)->getWeek();
  _swig_go_result = result; 
  return _swig_go_result;
}


char _wrap_Day_getWeekIndex_sxtwl_0766e672ea1b148b(Day *_swig_go_0) {
  Day *arg1 = (Day *) 0 ;
  uint8_t result;
  char _swig_go_result;
  
  arg1 = *(Day **)&_swig_go_0; 
  
  result = (uint8_t)(arg1)->getWeekIndex();
  _swig_go_result = result; 
  return _swig_go_result;
}


bool _wrap_Day_hasJieQi_sxtwl_0766e672ea1b148b(Day *_swig_go_0) {
  Day *arg1 = (Day *) 0 ;
  bool result;
  bool _swig_go_result;
  
  arg1 = *(Day **)&_swig_go_0; 
  
  result = (bool)(arg1)->hasJieQi();
  _swig_go_result = result; 
  return _swig_go_result;
}


char _wrap_Day_getJieQi_sxtwl_0766e672ea1b148b(Day *_swig_go_0) {
  Day *arg1 = (Day *) 0 ;
  uint8_t result;
  char _swig_go_result;
  
  arg1 = *(Day **)&_swig_go_0; 
  
  result = (uint8_t)(arg1)->getJieQi();
  _swig_go_result = result; 
  return _swig_go_result;
}


double _wrap_Day_getJieQiJD_sxtwl_0766e672ea1b148b(Day *_swig_go_0) {
  Day *arg1 = (Day *) 0 ;
  double result;
  double _swig_go_result;
  
  arg1 = *(Day **)&_swig_go_0; 
  
  result = (double)(arg1)->getJieQiJD();
  _swig_go_result = result; 
  return _swig_go_result;
}


char _wrap_Day_getConstellation_sxtwl_0766e672ea1b148b(Day *_swig_go_0) {
  Day *arg1 = (Day *) 0 ;
  uint8_t result;
  char _swig_go_result;
  
  arg1 = *(Day **)&_swig_go_0; 
  
  result = (uint8_t)(arg1)->getConstellation();
  _swig_go_result = result; 
  return _swig_go_result;
}


void _wrap_delete_Day_sxtwl_0766e672ea1b148b(Day *_swig_go_0) {
  Day *arg1 = (Day *) 0 ;
  
  arg1 = *(Day **)&_swig_go_0; 
  
  delete arg1;
  
}


Day *_wrap_fromSolar_sxtwl_0766e672ea1b148b(intgo _swig_go_0, char _swig_go_1, intgo _swig_go_2) {
  int arg1 ;
  uint8_t arg2 ;
  int arg3 ;
  Day *result = 0 ;
  Day *_swig_go_result;
  
  arg1 = (int)_swig_go_0; 
  arg2 = (uint8_t)_swig_go_1; 
  arg3 = (int)_swig_go_2; 
  
  result = (Day *)sxtwl::fromSolar(arg1,arg2,arg3);
  *(Day **)&_swig_go_result = (Day *)result; 
  return _swig_go_result;
}


Day *_wrap_fromLunar__SWIG_0_sxtwl_0766e672ea1b148b(intgo _swig_go_0, char _swig_go_1, intgo _swig_go_2, bool _swig_go_3) {
  int arg1 ;
  uint8_t arg2 ;
  int arg3 ;
  bool arg4 ;
  Day *result = 0 ;
  Day *_swig_go_result;
  
  arg1 = (int)_swig_go_0; 
  arg2 = (uint8_t)_swig_go_1; 
  arg3 = (int)_swig_go_2; 
  arg4 = (bool)_swig_go_3; 
  
  result = (Day *)sxtwl::fromLunar(arg1,arg2,arg3,arg4);
  *(Day **)&_swig_go_result = (Day *)result; 
  return _swig_go_result;
}


Day *_wrap_fromLunar__SWIG_1_sxtwl_0766e672ea1b148b(intgo _swig_go_0, char _swig_go_1, intgo _swig_go_2) {
  int arg1 ;
  uint8_t arg2 ;
  int arg3 ;
  Day *result = 0 ;
  Day *_swig_go_result;
  
  arg1 = (int)_swig_go_0; 
  arg2 = (uint8_t)_swig_go_1; 
  arg3 = (int)_swig_go_2; 
  
  result = (Day *)sxtwl::fromLunar(arg1,arg2,arg3);
  *(Day **)&_swig_go_result = (Day *)result; 
  return _swig_go_result;
}


std::vector< double > *_wrap_siZhu2Year_sxtwl_0766e672ea1b148b(GZ *_swig_go_0, GZ *_swig_go_1, GZ *_swig_go_2, GZ *_swig_go_3, intgo _swig_go_4, intgo _swig_go_5) {
  GZ arg1 ;
  GZ arg2 ;
  GZ arg3 ;
  GZ arg4 ;
  int arg5 ;
  int arg6 ;
  GZ *argp1 ;
  GZ *argp2 ;
  GZ *argp3 ;
  GZ *argp4 ;
  std::vector< double > result;
  std::vector< double > *_swig_go_result;
  
  
  argp1 = (GZ *)_swig_go_0;
  if (argp1 == NULL) {
    _swig_gopanic("Attempt to dereference null GZ");
  }
  arg1 = (GZ)*argp1;
  
  
  argp2 = (GZ *)_swig_go_1;
  if (argp2 == NULL) {
    _swig_gopanic("Attempt to dereference null GZ");
  }
  arg2 = (GZ)*argp2;
  
  
  argp3 = (GZ *)_swig_go_2;
  if (argp3 == NULL) {
    _swig_gopanic("Attempt to dereference null GZ");
  }
  arg3 = (GZ)*argp3;
  
  
  argp4 = (GZ *)_swig_go_3;
  if (argp4 == NULL) {
    _swig_gopanic("Attempt to dereference null GZ");
  }
  arg4 = (GZ)*argp4;
  
  arg5 = (int)_swig_go_4; 
  arg6 = (int)_swig_go_5; 
  
  result = sxtwl::siZhu2Year(arg1,arg2,arg3,arg4,arg5,arg6);
  *(std::vector< double > **)&_swig_go_result = new std::vector< double >(result); 
  return _swig_go_result;
}


GZ *_wrap_getShiGz__SWIG_0_sxtwl_0766e672ea1b148b(char _swig_go_0, char _swig_go_1, bool _swig_go_2) {
  uint8_t arg1 ;
  uint8_t arg2 ;
  bool arg3 ;
  GZ result;
  GZ *_swig_go_result;
  
  arg1 = (uint8_t)_swig_go_0; 
  arg2 = (uint8_t)_swig_go_1; 
  arg3 = (bool)_swig_go_2; 
  
  result = sxtwl::getShiGz(arg1,arg2,arg3);
  *(GZ **)&_swig_go_result = new GZ(result); 
  return _swig_go_result;
}


GZ *_wrap_getShiGz__SWIG_1_sxtwl_0766e672ea1b148b(char _swig_go_0, char _swig_go_1) {
  uint8_t arg1 ;
  uint8_t arg2 ;
  GZ result;
  GZ *_swig_go_result;
  
  arg1 = (uint8_t)_swig_go_0; 
  arg2 = (uint8_t)_swig_go_1; 
  
  result = sxtwl::getShiGz(arg1,arg2);
  *(GZ **)&_swig_go_result = new GZ(result); 
  return _swig_go_result;
}


char _wrap_getRunMonth_sxtwl_0766e672ea1b148b(intgo _swig_go_0) {
  int arg1 ;
  uint8_t result;
  char _swig_go_result;
  
  arg1 = (int)_swig_go_0; 
  
  result = (uint8_t)sxtwl::getRunMonth(arg1);
  _swig_go_result = result; 
  return _swig_go_result;
}


char _wrap_getLunarMonthNum__SWIG_0_sxtwl_0766e672ea1b148b(intgo _swig_go_0, char _swig_go_1, bool _swig_go_2) {
  int arg1 ;
  uint8_t arg2 ;
  bool arg3 ;
  uint8_t result;
  char _swig_go_result;
  
  arg1 = (int)_swig_go_0; 
  arg2 = (uint8_t)_swig_go_1; 
  arg3 = (bool)_swig_go_2; 
  
  result = (uint8_t)sxtwl::getLunarMonthNum(arg1,arg2,arg3);
  _swig_go_result = result; 
  return _swig_go_result;
}


char _wrap_getLunarMonthNum__SWIG_1_sxtwl_0766e672ea1b148b(intgo _swig_go_0, char _swig_go_1) {
  int arg1 ;
  uint8_t arg2 ;
  uint8_t result;
  char _swig_go_result;
  
  arg1 = (int)_swig_go_0; 
  arg2 = (uint8_t)_swig_go_1; 
  
  result = (uint8_t)sxtwl::getLunarMonthNum(arg1,arg2);
  _swig_go_result = result; 
  return _swig_go_result;
}


Time *_wrap_JD2DD_sxtwl_0766e672ea1b148b(double _swig_go_0) {
  double arg1 ;
  Time result;
  Time *_swig_go_result;
  
  arg1 = (double)_swig_go_0; 
  
  result = sxtwl::JD2DD(arg1);
  *(Time **)&_swig_go_result = new Time(result); 
  return _swig_go_result;
}


double _wrap_toJD_sxtwl_0766e672ea1b148b(Time *_swig_go_0) {
  Time *arg1 = 0 ;
  double result;
  double _swig_go_result;
  
  arg1 = *(Time **)&_swig_go_0; 
  
  result = (double)sxtwl::toJD(*arg1);
  _swig_go_result = result; 
  return _swig_go_result;
}


#ifdef __cplusplus
}
#endif

