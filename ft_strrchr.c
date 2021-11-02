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
