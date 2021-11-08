#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t n)
{
	int	a;
	int	tempn;

	tempn = n;
	a = ft_strlen(small);
	if (n == 0)
		return ((char *)big);
	if (*small == '\0' || *big == '\0')
		return ((char *)big);
	while (tempn > 0 && *big)
	{
		if (*big == *small)
		{
			if (ft_strncmp(big, small, a) == 0)
			{
				if (tempn - a > 1)
					return ((char *)big);
				return (0);
			}
		}
		tempn--;
		big++;
	}
	return (0);
}
