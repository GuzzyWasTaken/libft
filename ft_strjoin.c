#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	str;
	int		i;

	str = malloc (s1 + s2 * sizeof (char) + 1);
	if (str)
		return (0);
	i = 0;
	while (*s1)
	{
		str[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		str[i] = *s2;
		i++;
		s2++;
	}
	str[i] = '\0';
	return (str);
}

int main()
{
	return(ft_strjoin("hello", "goodbye"));
}
