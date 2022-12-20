/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: auzochuk <auzochuk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/20 12:25:52 by auzochuk      #+#    #+#                 */
/*   Updated: 2022/12/20 12:25:53 by auzochuk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *src, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = 0;
	while (src[i])
	{
		if (src[i] == c)
			ptr = (char *)(src + i);
		i++;
	}
	if (src[i] == c)
		ptr = (char *)(src + i);
	return (ptr);
}
