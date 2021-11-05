#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	destsize;
	size_t	srcsize;
	size_t	j;

	j = 0;
	srcsize = ft_strlen(src);
	destsize = ft_strlen(dest);
	i = destsize;
	if (destsize < dstsize - 1 && dstsize > 0)
	{
		while (src[j] && destsize + j < dstsize - 1)
		{
			dest[i] = src[j];
			j++;
			i++;
		}
		dest[i] = 0;
	}
	if (destsize >= dstsize)
		destsize = dstsize;
	return (destsize + srcsize);
}
