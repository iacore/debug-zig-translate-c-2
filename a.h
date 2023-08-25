#include <stdint.h>
#include <stddef.h>



typedef struct {
    unsigned int isTeapot : 1;
} Foo;

#define BAZ(a) (Foo *)NULL

