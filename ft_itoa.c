#include "libft.h"

char	*writenum(long num, int len, char *str);
int		numlen(long n);

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = numlen(n);
	str = malloc((len + 1) * sizeof (char));
	if (n == 0)
	{
		*str = '0';
		str[len] = '\0';
		return (str);
	}
	if (n <= 0)
		*str = '-';
	str[len] = '\0';
	len--;
	str = writenum(n, len, str);
	return (str);
}

int	numlen(long n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*writenum(long num, int len, char *str)
{
	if (num < 0)
		num *= -1;
	while (num != 0)
	{
		str[len] = num % 10 + '0';
		num = num / 10;
		len--;
	}
	return (str);
}
