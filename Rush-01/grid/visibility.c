/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visibility.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 19:37:49 by parattan          #+#    #+#             */
/*   Updated: 2026/02/01 20:28:33 by parattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "visibility.h"

void	fill_highest(char *grid, int i, int side)
{
	int	c;

	c = 0;
	if (grid[i] == '0' || grid[i] == side + '0' - 2)
	{
		while (c < side)
		{
			if (grid[i + c] == '0')
				grid[i + c] = side + '0' - 2 - c;
			c++;
		}
	}
}

void	visibility_row(char *grid, int i, int side)
{
	int		row;
	int		vis;
	int		coun_vis;
	char	side_c;

	side_c = side + '0' - 2;
	row = i / side;
	vis = grid[row * side];
	coun_vis = grid[row * side + (side - 1)];
	if (vis == side_c)
	{
		fill_highest(grid, i, side);
	}
	coun_vis = 0;
	coun_vis = row * vis * coun_vis;
}

void	visibility_col(char *grid, int i, int side)
{
	int	col;
	int	vis_col;
	int	coun_vis_col;

	col = i % side;
	vis_col = grid[col];
	coun_vis_col = grid[(side - 1) * side + col];
	printf("%c,%c,%c\n", grid[i], vis_col, coun_vis_col);
}
