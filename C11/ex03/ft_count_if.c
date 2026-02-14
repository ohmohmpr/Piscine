#include <stdio.h>

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (i < length)
	{
		if (f(tab[i]))
			c++;
		i++;
	}
	return (c);
}

int	gt_3(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	if (i > 4)
		return (1);
	return (0);
}

int	main(void)
{
	char	*tab[] = {"hello", "world", "test", "catcat"};

	printf("%d \n", ft_count_if(tab, 4, gt_3));
	return (0);
}
