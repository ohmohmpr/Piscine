#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	i;
	int	res;

	res = 1;
	i = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		res = res * i;
		i++;
	}
	return (res);
}
/*
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(6));
	return (0);
}*/
