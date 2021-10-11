#include <stdlib.h>
#include <stddef.h>

char	*ft_substr(char const *s, unsigned int start,size_t len)
{
	char	*p;
	int		i;

	i = start;
	p = malloc((len + 1) * sizeof (char));
	if (p)
	{
		return (NULL);
	}
	while (start != 0)
	{
		p[i] = s[i];
		i++;
	}


}
