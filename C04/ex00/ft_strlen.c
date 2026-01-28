int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (*str)
	{
		str++;
		c++;
	}
	return (c);
}








