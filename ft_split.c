/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: auzochuk <auzochuk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/20 12:26:24 by auzochuk      #+#    #+#                 */
/*   Updated: 2022/12/20 12:27:25 by auzochuk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	wrcount(char const *str, char c)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		if (*str != c)
		{
			count++;
			while (*str != '\0' && *str != c)
				str++;
		}
		else
			str++;
	}
	return (count);
}

int	wrlength(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
	{
		i++;
	}
	return (i);
}

void	clean(char **out, int i)
{
	while (i)
	{
		i--;
		free(out[i]);
	}
	free(out);
}

char	**storage(int wordcount, char **out, char const *s, char c)
{
	int		i;
	int		count;
	int		length;

	count = 0;
	i = 0;
	while (i < wordcount)
	{
		while (s[count] == c)
			count++;
		length = wrlength(&s[count], c);
		out[i] = (char *)malloc(sizeof(char) * (length + 1));
		if (!out[i])
			clean(out, i);
		ft_strlcpy(out[i], &s[count], length + 1);
		out[i][length] = '\0';
		i++;
		count += length;
	}
	out[i] = 0;
	return (out);
}

char	**ft_split(char const *s, char c)
{
	char	**out;
	int		wordcount;

	if (s == 0)
		return (0);
	wordcount = wrcount(s, c);
	out = malloc(sizeof(char *) * (wordcount + 1));
	if (!out)
		return (0);
	out = storage(wordcount, out, s, c);
	return (out);
}
