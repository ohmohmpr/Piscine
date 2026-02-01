#include "print.h"
#include "unistd.h"

void	print_grid(char *grid, int len)
{
	int	i;
	int	j;
	int	grid_size;

	i = 0;
	j = 0;
	grid_size = len / 4 + 2;
	while (i < grid_size)
	{
		j = 0;
		while (j < grid_size)
		{
			write(1, &grid[grid_size * i + j], 1);
			if (j != grid_size - 1)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
