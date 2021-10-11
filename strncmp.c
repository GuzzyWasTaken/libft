#include <stddef.h>

int ft_strncmp(const char *str1, const char *str2, size_t n)
{

    while ((*str1 != '\0' || *str2 != '\0') && (str1 < n) && (str2 < n))
    {
        if (*str1 != *str2)
            return (*str1 - *str2);
    }
    return (0);
}
