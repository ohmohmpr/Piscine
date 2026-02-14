#include <stdlib.h>
#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_cmp(int nbr1, int nbr2)
{
	return (nbr1 - nbr2);
}

int	main(void)
{
	//int	tab[] = {1, 2, 3, 4, 5};
	int	tab[] = {1, 2, 6, 4, 5};

	printf("%d\n", ft_is_sort(tab, 5, ft_cmp));
	return (0);
}
