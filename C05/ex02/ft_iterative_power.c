#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;
	int	pow_i;

	pow_i = 0;
	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (pow_i < power)
	{
		res = res * nb;
		pow_i++;
	}
	return (res);
}
/*
int	main(void)
{
	printf("%d\n", ft_iterative_power(2, 3));
	return (0);
}*/
