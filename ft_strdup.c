/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: auzochuk <auzochuk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/20 12:26:18 by auzochuk      #+#    #+#                 */
/*   Updated: 2022/12/20 12:26:19 by auzochuk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *s)
{
	char	*p;
	int		i;

	i = 0;
	p = malloc((ft_strlen(s) + 1) * sizeof (char));
	if (!p)
		return (NULL);
	while (s[i] != 0)
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
