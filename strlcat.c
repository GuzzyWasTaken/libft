#include <stddef.h>

size_t strlcat(char *dest, const char *src, size_t n)
{
    char    *d;    
    char    *s;

    *d = dest;
    *s = src;
    while (n--)
    {
        *d++ = *s++;
    }
    return (dest);
}