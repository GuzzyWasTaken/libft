/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: auzochuk <auzochuk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/20 12:26:56 by auzochuk      #+#    #+#                 */
/*   Updated: 2022/12/20 12:26:56 by auzochuk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int a)
{
	if ((a >= 0) && (a <= 127))
		return (1);
	else
		return (0);
}
