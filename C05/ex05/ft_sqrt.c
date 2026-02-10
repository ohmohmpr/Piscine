#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (res <= 2147483647 && res <= nb)
	{
		res = i * i;
		if (res > nb)
			return (0);
		if (res == nb)
			return (i);
		i++;
	}
	return (res);
}
/*
int	main(void)
{
//	printf("%d\n", 2147483647 - 46340 * 46340);
	printf("%d\n", ft_sqrt(4));
	return (0);
}*/
