/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: auzochuk <auzochuk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/20 12:26:43 by auzochuk      #+#    #+#                 */
/*   Updated: 2022/12/20 12:26:43 by auzochuk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*a;
	const unsigned char	*b;

	a = str1;
	b = str2;
	while (n > 0)
	{
		if (*a != *b)
			return (*a - *b);
		n--;
		a++;
		b++;
	}
	return (0);
}
