char	*ft_strchr(const char *src, int c)
{
	while (*src)
	{
		if (*src == c)
			return ((char *)src);
		src++;
	}
	return (0);
}
