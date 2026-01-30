#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;

	size = 0;	
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	range = (int **)malloc((max - min) * sizeof(int));
	return (min * max);
}

int	main(void)
{
	int	*test[10];

	printf("%d\n", ft_ultimate_range(test, 4, 5));
	return (0);
}
