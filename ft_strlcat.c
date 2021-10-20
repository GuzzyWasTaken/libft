#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	char	*str;
	char	*d;
	char	*s;
	size_t	size;

	d = dest;
	str = malloc (n * sizeof(char) + 1);
	if (str)
		return (0);
	s = (char *)src;
	size = 0;
	while (*d != '\0')
	{
		size++;
		*str = *d;
		str++;
		d++;
	}
	while (*s != '\0')
	{
		size++;
		*str = *s;
		str++;
		s++;
	}
	return (size + 1);
}
