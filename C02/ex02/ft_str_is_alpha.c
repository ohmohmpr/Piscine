#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	is_alpha;

	is_alpha = 1;
	while (*str != '\0')
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
		{
			printf("%c", *str);
			is_alpha = 0;
		}
		str++;
	}
	return (is_alpha);
}

int	main(void)
{
	printf("%d\n", ft_str_is_alpha("Contain only string"));
	printf("%d\n", ft_str_is_alpha("Contain .only string"));
	printf("%d\n", ft_str_is_alpha("AZaz"));
	printf("%d\n", ft_str_is_alpha(""));
	return (0);
}
