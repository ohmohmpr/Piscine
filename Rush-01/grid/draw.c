/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 13:48:41 by parattan          #+#    #+#             */
/*   Updated: 2026/02/01 17:44:27 by parattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../util/util.h"
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

char	*filter_input(char *filtered_input, char *input)
{
	int	i;

	i = 0;
	while (*input)
	{
		if (*input != 32)
		{
			filtered_input[i] = *input;
			i++;
		}
		input++;
	}
	filtered_input[i] = '\0';
	return (filtered_input);
}

void	draw_outside(char *grid, int g_s, char *input)
{
	int		i;
	int		inner_side;
	char	f_input[200];

	i = 0;
	inner_side = g_s - 2;
	filter_input(f_input, input);
	while (f_input[i] != '\0')
	{
		if (i / (g_s - 2) == 0)
			grid[i + 1] = f_input[i];
		if (i / (g_s - 2) == 1)
			grid[g_s * (inner_side) + i + 3] = f_input[i];
		if (i / (g_s - 2) == 2)
			grid[(i % (inner_side) + 1) * g_s] = f_input[i];
		if (i / (g_s - 2) == 3)
			grid[(i % (inner_side) + 1) * g_s + g_s - 1] = f_input[i];
		i++;
	}
}
