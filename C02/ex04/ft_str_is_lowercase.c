#include <stdio.h>
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	is_lowercase;

	is_lowercase = 1;
	while (*str != '\0')
	{
		if (!((*str >= 'a' && *str <= 'z')))
		{
			printf("%c", *str);
			is_lowercase = 0;
		}
		str++;
	}
	return (is_lowercase);
}

int	main(void)
{
	printf("%d\n", ft_str_is_lowercase("Contain 23only string"));
	printf("%d\n", ft_str_is_lowercase("lowercase"));
	printf("%d\n", ft_str_is_lowercase("Lower"));
	printf("%d\n", ft_str_is_lowercase("LSAFDSF"));
	printf("%d\n", ft_str_is_lowercase("aLLLs"));
	printf("%d\n", ft_str_is_lowercase(""));
	return (0);
}
