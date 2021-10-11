#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *s)
{
	char	*p;
	int		i;

	i = 0;
	p = malloc((ft_strlen(s) + 1) * sizeof (char));
	while (s[i] != 0)
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
