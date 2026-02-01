#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "draw.h"

void	queue(char *input)
{
	while (*input)
	{
		input++;
	}
}

//void	fill_highest(char *grid,)
//{

//}

//void	fill_lowest()
void	solve_grid(char *grid, char *input, int length_input)
{
	int	i;

	i = 0;
	while (i < length_input)
	{
		write(1, &input[i], 1);
		i++;
	}
	i = 0;
	while (i < length_input)
	{
		write(1, &grid[i], 1);
		i++;
	}
}

char	*init_grid(int len, char *input)
{
	int		grid_size;
	char	*grid;

	grid_size = len / 4 + 2;
	grid = (char *)malloc(sizeof(char) * len);
	draw_inside(grid, grid_size);
	draw_outside(grid, grid_size, input);
	draw_corner(grid, grid_size);
	return (grid);
}
