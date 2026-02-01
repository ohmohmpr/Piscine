/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 13:48:11 by parattan          #+#    #+#             */
/*   Updated: 2026/02/01 18:45:47 by parattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "util/util.h"
#include "grid/grid.h"
#include "grid/print.h"

int	main(int argc, char *argv[])
{
	int		len;
	char	grid[200];

	len = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	len = ft_strlen_without_space(argv[1]);
	init_grid(grid, len, argv[1]);
	solve_grid(grid, len);
	print_grid(grid, len);
	return (0);
}
