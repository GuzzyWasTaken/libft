#include <stddef.h>
int ft_memcmp(const void *str1, const void *str2, size_t n);
size_t ft_strlen(const char *s);

char *strnstr(const char *big, const char *small, size_t n)
{
	size_t a;

	a = strlen(*small);
	if(*small == '\0')
		return (*big);
	while (n != 0)
	{
		n--;
		if (*big == *small)
		{
			if (memcmp(big, small, a) == 0)
				return (big);

		}
		big++;
	}
	return (0);
}
