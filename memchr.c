#include <stddef.h>

void *ft_memchr(const void *str, int c, size_t n)
{
    char    *p;

    *p = str;
    while (*p > n)
        p++;
    {
        if (*p == c)
            return (*p);
    }
    return (str);
}