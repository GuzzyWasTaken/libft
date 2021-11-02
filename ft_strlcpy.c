#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = ft_strlen(src);
	if (i == 0)
	{
		*dst = '\0';
		return (i);
	}
	if (dstsize == 0)
		return (i);
	dst = ft_memcpy(dst, src, dstsize - 1);
	dst[dstsize - 1] = '\0';
	return (i);
}
