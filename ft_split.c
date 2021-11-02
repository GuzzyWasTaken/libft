#include "libft.h"

//count amount of words
//malloc amount of strings needed
//
int	wordcount(char const *str, char c);

char	**ft_split(char const *s, char c)
{
	int	wordamount;

	wordamount = (wordcount(s, c) - 1);
}

int	wordcount(char const *str, char c)
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	if (str[i] != c)
	{
		counter++;
		while (str[i] != '\0')
		{
			if (str[i] == c && str[i + 1] != c)
				counter++;
			str++;
		}
	}
	else
	{
		while (str[i] != '\0')
		{
			if (str[i] == c && str[i + 1] != c)
				counter++;
			str++;
		}
	}
	return (counter);
}

int	wordlen(const char s, char c)
{
	int	i;

	i = 0;
}
