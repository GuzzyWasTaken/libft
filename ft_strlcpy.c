/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: auzochuk <auzochuk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/20 12:26:06 by auzochuk      #+#    #+#                 */
/*   Updated: 2022/12/20 12:26:07 by auzochuk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = ft_strlen(src);
	if (i == 0)
	{
		*dst = '\0';
		return (i);
	}
	if (dstsize == 0)
		return (i);
	if (i + 1 < dstsize)
		ft_memmove(dst, (void *)src, i + 1);
	else
	{
		ft_memmove(dst, (void *)src, dstsize);
		dst[dstsize - 1] = '\0';
	}
	return (i);
}
