#include "libft.h"

int	ft_atoi(const char	*s)
{
	int				i;
	unsigned long	num;

	i = 1;
	num = 0;
	while (*s == '\n' || *s == '\t' || *s == '\r' || *s == '\n'
		|| *s == '\v' || *s == '\f' || *s == ' ')
		s++;
	if (*s == '+' || *s == '-')
	{
		if (s + 1 == '-' || s + 1 == '+')
			return (0);
		if (*s == '-')
			i = -1;
		s++;
	}
	while (!((*s >= '0') && (*s <= '9')))
		s++;
	while ((*s >= '0') && (*s <= '9'))
	{
		num = (num * 10) + (*s - '0');
		s++;
	}
	return ((int)num * i);
}
