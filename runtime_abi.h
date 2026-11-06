#ifndef ENCORE_RUNTIME_ABI_H
#define ENCORE_RUNTIME_ABI_H
#include <stddef.h>
/* One machine-word string handle. Object storage is private to core. */
typedef struct encore_str_object encore_str_object;
typedef struct { encore_str_object *object; } encore_str;
char *encore_str_data(encore_str value);
size_t encore_str_size(encore_str value);
encore_str encore_empty_str(void);
encore_str encore_from_owned_buffer(char *buffer, size_t len);
encore_str encore_from_cstr_copy(const char *value);
encore_str encore_str_from_buffer(const void *buffer, size_t len);
encore_str encore_str_from_codepoint(size_t value);
void *encore_str_from_cstr(const char *value);
void encore_str_retain(encore_str value);
void encore_str_drop(encore_str value);
char *encore_to_cstr(encore_str value);
#endif
