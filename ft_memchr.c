#include <stddef.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*p;

	*p = &str;
	while (n > 0)
	{
		n--;
		if (*p == c)
			return (*p);
		p++;
	}
	return (NULL);
}
