#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*sr;
	char		*ds;

	ds = dst;
	sr = src;
	if (src > dst)
	{
		ft_memcpy(dst, sr, len);
	}
	ft_memcpy(dst, sr, len);
	return (dst);
}
