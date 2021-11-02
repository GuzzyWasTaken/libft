#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	size;
	size_t	srcsize;

	srcsize = ft_strlen(src);
	size = ft_strlen(dest);
	i = (ft_strlen(src + size - 1));
	if (srcsize == 0)
	{
		*dest = '\0';
		return (i);
	}
	if (dstsize == size)
		return (i);
	return (i);
}
