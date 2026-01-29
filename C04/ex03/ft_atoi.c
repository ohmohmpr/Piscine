int	ft_atoi(char *str)
{
	int	sign;
	int	value;

	sign = 1;
	value = 0;
	while (*str)
	{
		if (*str == '-')
			sign = -1 * sign;
		else if (*str >= '0' && *str <= '9')
		{
			value = value * 10;
			value = value + *str - '0';
		}
		else if (value > 0 && *str == ' ')
			return (sign * value);
		else if ((*str < '0' || *str > '9') && *str != ' ' && *str != '+')
			return (sign * value);
		str++;
	}
	return (sign * value);
}
