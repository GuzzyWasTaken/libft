/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: auzochuk <auzochuk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/20 12:26:21 by auzochuk      #+#    #+#                 */
/*   Updated: 2022/12/20 12:26:21 by auzochuk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *src, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = 0;
	while (src[i])
	{
		if (src[i] == c)
		{
			ptr = (char *)(src + i);
			return (ptr);
		}
		i++;
	}
	if (src[i] == c)
		ptr = (char *)(src + i);
	return (ptr);
}
