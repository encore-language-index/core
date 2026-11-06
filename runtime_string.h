#ifndef ENCORE_RUNTIME_STRING_H
#define ENCORE_RUNTIME_STRING_H
/* Internal layout, shared only with the compiler's cache ABI compatibility
 * helpers. Native packages must include runtime_abi.h and use accessors. */
#include "runtime_abi.h"
#include <stdatomic.h>
struct encore_str_object {
    _Atomic size_t ref_count;
    size_t len;
    char data[];
};
#endif
