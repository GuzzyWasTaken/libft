/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: auzochuk <auzochuk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/20 12:26:36 by auzochuk      #+#    #+#                 */
/*   Updated: 2022/12/20 12:26:36 by auzochuk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *dest, int val, size_t n)
{
	unsigned char	*p;

	p = dest;
	while (n > 0)
	{
		n--;
		*p = val;
		p++;
	}
	return (dest);
}
