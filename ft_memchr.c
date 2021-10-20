#include <stddef.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	const char	*p;

	p = str;
	while (n > 0)
	{
		n--;
		if (*p == c)
			return ((void *)p);
		p++;
	}
	return (NULL);
}
