#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	find_min_idx(int *tab, int size)
{
	int	min;
	int	idx;
	int	min_idx;

	min = 2147483647;
	idx = 0;
	min_idx = 0;

	while (idx < size)
	{
		if (tab[idx] < min)
		{
			min_idx = idx;
			min = tab[idx];
		}
		idx++;
	}
	printf("min: %d ", min);
	return (min_idx);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	start_idx;
	int	min_idx;

	start_idx = 0;
	while (start_idx < size)
	{
		min_idx = find_min_idx(&tab[start_idx], size);
		printf("here:%d\n", min_idx);
		start_idx++;
	}
}

int	main(void)
{
	int	size;
	int	begin;
	int	idx;

	idx = 0;
	size = 10;
	int tab[] = {10, 20, -3, 40, 50, 1, 2, 3, 4, -10};

	begin = 0;
	while (begin < size)
	{
		printf("%d\n", tab[begin]);
		begin++;
	}

	ft_sort_int_tab(tab, size);
	return (0);
}
