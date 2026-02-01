#include "draw.h"
#include <stdio.h>

void	draw_inside(char *grid, int grid_size)
{
	int		i;
	int		j;
	char	default_char;

	i = 1;
	j = 1;
	default_char = '0';
	while (i < grid_size - 1)
	{
		j = 1;
		while (j < grid_size - 1)
		{
			grid[grid_size * i + j] = default_char;
			j++;
		}
		i++;
	}
}

void	draw_corner(char *grid, int grid_size)
{
	grid[0] = '/';
	grid[grid_size * 0 + grid_size - 1] = '\\';
	grid[grid_size * (grid_size - 1) + 0] = '\\';
	grid[grid_size * (grid_size - 1) + grid_size - 1] = '/';
}

char	*filter_input(char* filtered_input, char *input)
{
	int	i;

	i = 0;
	while (*input)
	{
		if (*input != 32)
		{
			filtered_input[i] = input[i]; 
			printf("%c ", input[i]);
		}
		input++;
	}
	filtered_input[i] = '\0';
	return (filtered_input);
}

void	draw_outside(char *grid, int grid_size, char *input)
{
	int		i;
	char	*filtered_input;

	filter_input(filtered_input, input);
	while (*grid)
	{
		grid++;
	}
	i = grid_size;
	while (*input)
	{
		i++;
		input = input + 1;
	}
}
