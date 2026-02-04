#include <stdlib.h>
#include <stdio.h>

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

int	is_space_or_allow(char *str)
{
	int	allow;

	allow = 0;
	if (*str >= '\t' && *str <= '\r')
		allow = 1;
	if (*str == ' ')
		allow = 1;
	if (*str == '+')
		allow = 1;
	return (allow);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	value;
	int	num_base;

	sign = 1;
	value = 0;
	num_base = ft_is_valid_base(base);
	while (*str)
	{
		if (value == 0 && *str == '-')
			sign = -1 * sign;
		else if (value == 0 && is_space_or_allow(str) == 1)
			value = value;
		else if (ft_get_base(str, base) != -1)
			value = value * num_base + ft_get_base(str, base);
		else
			return (sign * value);
		str++;
	}
	return (sign * value);
}
/*
int     main(void)
{
        printf("%d\n", ft_atoi_base("   ---+--+1234ab567", "0123456789"));
        printf("%d\n", ft_atoi_base("\r\t---+--+1234r\r567", "01"));
        printf("%d\n", ft_atoi_base(" --+1234\r\t567", "0123456789ABCDEF"));
        printf("%d\n", ft_atoi_base("   ---+--+1234  567", "poneyvif"));
        return (0);
}*/
