#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;

	i = 0;
	if (*s1 == '\0' || *s2 == '\0')
		return (NULL);
	str = malloc((ft_strlen(s1) + (ft_strlen(s2) + 1)) * sizeof(char));
	if (!str)
		return (NULL);
	while (*s1 != '\0')
	{
		str[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		str[i] = *s2;
		s2++;
		i++;
	}
	str[i] = 0;
	return (str);
}
