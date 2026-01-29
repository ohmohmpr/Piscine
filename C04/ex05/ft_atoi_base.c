int	ft_selfcmp(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if (i != j)
			{
				if (base[i] == base[j])
					return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_is_valid_base(char *base)
{
	int	num_base;

	num_base = 0;
	if (!(ft_selfcmp(base)))
		return (0);
	while (*base)
	{
		if (*base == '+' || *base == '-')
			return (0);
		num_base++;
		base++;
	}
	if (num_base == 1)
		return (0);
	return (num_base);
}

int	ft_get_base(char *str, char *base)
{
	int	i;

	i = 0;
	while (*base)
	{
		if (*str == *base)
			return (i);
		i++;
		base++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	value;
	int	num_base;

	num_base = ft_is_valid_base(base);
	sign = 1;
	value = 0;
	while (*str)
	{
		if (*str == '-')
			sign = -1 * sign;
		else if (ft_get_base(str, base) != -1)
			value = value * num_base + ft_get_base(str, base);
		else if (value > 0 && *str == ' ')
			return (sign * value);
		else if ((*str < '0' || *str > '9') && *str != ' ' && *str != '+')
			return (sign * value);
		str++;
	}
	return (sign * value);
}
