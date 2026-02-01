/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 13:50:32 by parattan          #+#    #+#             */
/*   Updated: 2026/02/01 20:28:46 by parattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "draw.h"
#include "../util/util.h"
#include "visibility.h"

int	check_zeros(char *grid, int length_inner)
{
	int	i;
	int	power;
	int	zero;

	i = 0;
	zero = 0;
	power = (length_inner + 2) * (length_inner + 2);
	while (i < power)
	{
		if (grid[i] == '0')
			zero++;
		i++;
	}
	if (zero == 0)
		return (1);
	return (0);
}

void	loop(char *grid, int inner_side)
{
	int	i;
	int	side;
	int	row;
	int	col;

	i = 0;
	side = inner_side + 2;
	while (i < side * side)
	{
		row = i / side;
		col = i % side;
		if (col != 0 && col != side -1 && row != 0 && row != side - 1)
		{
			visibility_row(grid, i, side);
		}
		i++;
	}
}

void	solve_grid(char *grid, int length_input)
{
	int	stop;

	stop = 0;
	length_input = length_input / 4;
	while (!stop)
	{
		loop(grid, length_input);
		stop = check_zeros(grid, length_input) + 1;
	}
}

char	*init_grid(char *grid, int len, char *input)
{
	int		grid_size;

	grid_size = 0;
	grid_size = len / 4 + 2;
	draw_inside(grid, grid_size);
	draw_outside(grid, grid_size, input);
	draw_corner(grid, grid_size);
	return (grid);
}
