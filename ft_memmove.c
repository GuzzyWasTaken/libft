/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: auzochuk <auzochuk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/20 12:26:38 by auzochuk      #+#    #+#                 */
/*   Updated: 2022/12/20 12:26:39 by auzochuk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t len)
{
	char	*sr;
	char	*ds;

	ds = dst;
	sr = src;
	if (dst == src)
		return (dst);
	if (src > dst)
		ft_memcpy(dst, sr, len);
	else
	{
		sr = src + (len - 1);
		ds = dst + (len - 1);
		while (len > 0)
		{
			*ds = *sr;
			ds--;
			sr--;
			len--;
		}
	}
	return (dst);
}
