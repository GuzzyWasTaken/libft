/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: auzochuk <auzochuk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/20 12:26:46 by auzochuk      #+#    #+#                 */
/*   Updated: 2022/12/20 12:26:47 by auzochuk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	const char	*p;

	p = str;
	while (n > 0)
	{
		n--;
		if (*p == c)
			return ((void *)p);
		p++;
	}
	return (NULL);
}
