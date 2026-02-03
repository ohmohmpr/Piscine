#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	j;
	int	test;

	test = 0;
	i = 0;
	j = 0;
	size = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	range = (int **)malloc(sizeof(int) * (max - min));
	while (i < min * max)
	{
		printf("%d, %p\n", i,*range);
		*range++;
		i++;
	}
	return (min * max);
}

int	main(void)
{
	int	**test;

	printf("%d\n", ft_ultimate_range(test, 4, 5));
	return (0);
}
