#include <stddef.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned char	*st1
	unsigned char	*st2

	st1 = str1;
	st2 = str2;
	while ((*st1 != '\0' || *st2 != '\0') && (st1 < n) && (st2 < n))
	{
		if (*st1 != *st2)
			return (*st1 - *st2);
	}
	return (0);
}
