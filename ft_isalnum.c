int	ft_isalnum(int a)
{
	if ((a >= '0') && (a <= '9'))
		return (1);
	else if (((a >= 'a') && (a <= 'z')) || ((a >= 'A') && (a <= 'Z')))
		return (1);
	return (0);
}
