#include <stdio.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	is_numeric;

	is_numeric = 1;
	while (*str != '\0')
	{
		if (!((*str >= '0' && *str <= '9')))
		{
			printf("%c", *str);
			is_numeric = 0;
		}
		str++;
	}
	return (is_numeric);
}

int	main(void)
{
	printf("%d\n", ft_str_is_numeric("Contain 23only string"));
	printf("%d\n", ft_str_is_numeric("012312312"));
	printf("%d\n", ft_str_is_numeric("0123456789"));
	printf("%d\n", ft_str_is_numeric("9AZaz0"));
	printf("%d\n", ft_str_is_numeric(""));
	return (0);
}
