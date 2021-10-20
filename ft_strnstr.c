#include <stddef.h>
#include "libft.h"

char	*strnstr(const char *big, const char *small, size_t n)
{
	size_t	a;

	a = ft_strlen(small);
	if (*small == '\0')
		return ((char *)big);
	while (n != 0)
	{
		n--;
		if (*big == *small)
		{
			if (ft_memcmp(big, small, a) == 0)
				return ((char *)big);
		}
		big++;
	}
	return (0);
}
