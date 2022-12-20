/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: auzochuk <auzochuk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/20 12:27:06 by auzochuk      #+#    #+#                 */
/*   Updated: 2022/12/20 12:27:07 by auzochuk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_memset(void *dest, int val, size_t n);

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
