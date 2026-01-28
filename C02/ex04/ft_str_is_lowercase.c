int	ft_str_is_lowercase(char *str)
{
	int	is_lowercase;

	is_lowercase = 1;
	while (*str != '\0')
	{
		if (!((*str >= 'a' && *str <= 'z')))
		{
			is_lowercase = 0;
		}
		str++;
	}
	return (is_lowercase);
}
