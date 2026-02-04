//#include <stdlib.h>
//#include <stdio.h>

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

int	ft_atoi(char *str)
{
	int	sign;
	int	value;

	sign = 1;
	value = 0;
	while (*str)
	{
		if (value == 0 && *str == '-')
			sign = -1 * sign;
		else if (value == 0 && is_space_or_allow(str) == 1)
			value = value;
		else if (*str >= '0' && *str <= '9')
			value = value * 10 + *str - '0';
		else
			return (sign * value);
		str++;
	}
	return (sign * value);
}
/*
int	main(void)
{
	printf("%d\n", atoi("   ---+--+1234ab567"));
	printf("%d\n", ft_atoi("   ---+--+1234ab567"));
	printf("%d\n", atoi("\r\t---+--+1234r\r567"));
	printf("%d\n", ft_atoi("\r\t---+--+1234r\r567"));
	printf("%d\n", atoi("   ---+--+1234\r\t567"));
	printf("%d\n", ft_atoi("   ---+--+1234\r\t567"));
	printf("%d\n", atoi("   ---+--+1234  567"));
	printf("%d\n", ft_atoi("   ---+--+1234  567"));
	return (0);
}*/
