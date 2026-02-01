#include <stdio.h>
#include "util/util.h"
#include "grid/grid.h"
#include "grid/print.h"
#include "stdlib.h"

int	main(int argc, char *argv[])
{
	int		len;
	char	*grid;
	char	*input;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	input = argv[1];
	len = ft_strlen_without_space(input);
	grid = init_grid(len, input);
	//solve_grid(grid, input, len);
	print_grid(grid, len);
	free(grid);
	return (0);
}
