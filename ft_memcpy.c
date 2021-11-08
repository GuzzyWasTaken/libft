#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char			*d;
	const unsigned char		*s;

	d = dest;
	s = src;
	if (*d == '\0' && *s == '\0')
		return (0);
	while (n > 0)
	{
		n--;
		*d = *s;
		d++;
		s++;
	}
	return (dest);
}
