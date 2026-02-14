#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*res;

	i = 0;
	res = malloc(length * sizeof(int));
	while (i < length)
	{
		res[i] = f(tab[i]);
		i++;
	}
	return (res);
}

// function pointer
int	mul(int nbr)
{
	return (nbr * 2);
}

int	main(void)
{
	int		i;
	int		tab[] = {1, 2, 3, 4, 5};
	int		*res;

	i = 0;
	res = ft_map(tab, 5, &mul);
	while (i < 5)
	{
		printf("%d\n", res[i]);
		i++;
	}
	return (0);
}
