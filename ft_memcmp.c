#include <stddef.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const char	*a;
	const char	*b;

	*a = &str1;
	*b = &str2;
	while (*a != '\0' || *b != '\0' && (n != 0))
	{
		if (*a != *b)
			return ((unsigned char *) *a - (unsigned char *) *b);
		n--;
		a++;
		b++;
	}
	return (0);
}
