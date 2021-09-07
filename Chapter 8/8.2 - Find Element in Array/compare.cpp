#include <string.h>

int __cdecl compare(const void *pfirst, const void *psecond)
{
    return strcmp(*(const char **)pfirst, *(const char **)psecond);
}