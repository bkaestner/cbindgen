#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

#if defined(FOO)
#define FOO 1
#endif

#if defined(BAR)
#define BAR 2
#endif

#if defined(FOO)
typedef struct Foo {

} Foo;
#endif

#if defined(BAR)
typedef struct Bar {

} Bar;
#endif

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#if defined(FOO)
void foo(const Foo *foo);
#endif

#if defined(BAR)
void bar(const Bar *bar);
#endif

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus
