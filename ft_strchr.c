char	strchr(const char *src, int c)
{
	while (*src)
	{
		if (*src == c)
			return (src);
		src++;
	}
	return (NULL);
}
