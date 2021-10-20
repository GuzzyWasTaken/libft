#include <stddef.h>

void ft_memset(void *dest, int val, size_t n)
{
	unsigned char	*p;

	p = dest;
	while (n > 0)
	{
		n--;
		p = val;
		p++;
	}
	return (dest);
}
