#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*p;
	unsigned int		i;
	unsigned int		count;

	count = 0;
	if (!s)
		return (NULL);
	i = ft_strlen(s);
	if (start >= ft_strlen(s))
		return (ft_strdup("\0"));
	if (len > i || start > i)
		return (NULL);
	p = malloc((len + 1) * sizeof (char));
	if (!p)
		return (NULL);
	while (len > 0)
	{
		p[count] = s[start];
		count++;
		start++;
		len--;
	}
	p[count] = '\0';
	return (p);
}
