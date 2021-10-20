char	*ft_strchr(const char *src, int c)
{
	if (c == 0)
		return (0);
	while (*src)
	{
		if (*src == c)
			return ((char *)src);
		src++;
	}
	return (0);
}
