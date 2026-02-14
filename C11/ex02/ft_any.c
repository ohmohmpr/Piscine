#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_any(char **tab, int (*f)(char*))
{
	while (*tab)
	{
		if (f(*tab) != 0)
			return (1);
		tab++;
	}
	return (0);
}

int	show_ascii(char *str)
{
	return (*str);
}

int	main(void)
{
	//char	*test[] = {"hello", "world", "test", NULL};
	char	*test[] = {"", "", "", NULL};

	printf("%d\n", ft_any(test, show_ascii));
	return (0);
}
