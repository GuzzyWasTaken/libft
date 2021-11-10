#include "libft.h"

int	popper(char s1, const char *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	int		i;

	i = 0;
	start = 0;
	if (!s1)
		return (NULL);
	end = ft_strlen(s1);
	if (!set)
		return ((char *)s1);
	while (popper(s1[start], set) == 1)
		start++;
	if (start == end)
		return (ft_strdup("\0"));
	while (popper(s1[end - 1], set) == 1)
		end--;
	str = ft_substr(s1, start, end - start);
	return (str);
}

int	popper(char s1, const char *set)
{
	while (*set)
	{
		if (s1 == *set)
			return (1);
		set++;
	}
	return (0);
}
