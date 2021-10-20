#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	size;

	d = dest;
	s = (char *)src;
	size = ft_strlen(dest) + ft_strlen((char *)src);
	while (n--)
	{
		*d++ = *s++;
	}
	return (size);
}
