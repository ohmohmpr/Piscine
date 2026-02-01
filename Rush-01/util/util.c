int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

int	ft_strlen_without_space(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		if (*str != 32)
			len++;
		str++;
	}
	return (len);
}
