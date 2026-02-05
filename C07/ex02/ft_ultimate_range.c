#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	n;
	int	res;

	res = max - min;
	n = 0;
	if (res <= 0)
	{
		*range = NULL;
		range = NULL;
		return (0);
	}
	*range = (int *)malloc(1 * sizeof(int *));
	range[0] = malloc((res) * sizeof(int));
	while (n < res)
	{
		range[0][n] = min + n;
		n++;
	}
	return (res);
}
/*
int	main(void)
{
	int	*test;
	int	min;
	int	max;
	int	n;

	n = 0;
	min = -10;
	max = -15;

	printf("str %d\n", ft_ultimate_range(&test, min, max)); 
	printf("ptr %p\n", test); 

	while (n < max - min)
	{
		printf("idx: %d, %d \n", n, test[n]);
		n++;
	}
	return (0);
}*/
