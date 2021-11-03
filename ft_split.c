#include "libft.h"
#include <stdlib.h>

//count amount of words
//malloc amount of strings needed
//

char	**ft_stringmake(int wordamount, const char *s, char c, char **str);
int		wordcount(char const *str, char c);
int		wordleng(const char *s, char c);
char	**ft_free(int j, char **str);

char	**ft_split(char const *s, char c)
{
	int		wordamount;
	int		j;
	char	**str;

	if (!s || !c)
		return (NULL);
	j = 0;
	wordamount = wordcount(s, c);
	str = (char **)malloc((wordamount + 1) * sizeof (char *));
	if (!str)
		return (NULL);
	str = ft_stringmake(wordamount, s, c, str);
	return (str);
}

int	wordcount(char const *str, char c)
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i] != 0)
			counter++;
		while (str[i] != c && str[i] != 0)
			i++;
	}
	return (counter);
}

int	wordleng(const char *s, char c)
{
	int	len;

	len = 0;
	while (s && *s == c)
		s++;
	while (s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

char	**ft_free(int j, char **str)
{
	j--;
	while (j > 0)
	{
		free(str[j]);
		j--;
	}
	free(str);
	return (NULL);
}

char	**ft_stringmake(int wordamount, const char *s, char c, char **str)
{
	int		j;

	j = 0;
	while (j < wordamount)
	{
		while (*s == c && *s != '\0')
			s++;
		str[j] = ft_substr (s, 0, wordleng(s, c));
		if (!str[j])
			return (ft_free(j, str));
		while (*s != c && *s != '\0')
			s++;
		j++;
	}
	str[j] = (NULL);
	return (str);
}

// int main()
// {
// 	char	**str;
// 	char	*p = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
// 	int		i;

// 	i = 0;
// 	str = ft_split(p, ' ');
// 	while (str[i])
// 	{
// 		printf("%s \n", str[i]);
// 		i++;
// 	}
// 	return(0);
// }
