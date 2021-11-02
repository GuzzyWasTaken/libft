#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t n)
{
	size_t	a;

	a = ft_strlen(small);
	if (*small == '\0' || *big == '\0')
		return ((char *)big);
	while (n > 0 && *big)
	{
		if (*big == *small)
		{
			if (ft_strncmp(big, small, a) == 0)
				return ((char *)big);
		}
		n--;
		big++;
	}
	return (0);
}
