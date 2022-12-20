/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: auzochuk <auzochuk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/20 12:26:41 by auzochuk      #+#    #+#                 */
/*   Updated: 2022/12/20 12:26:41 by auzochuk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char			*d;
	const unsigned char		*s;

	d = dest;
	s = src;
	if (d == NULL && s == NULL)
		return (0);
	while (n > 0)
	{
		n--;
		*d = *s;
		d++;
		s++;
	}
	return (dest);
}
