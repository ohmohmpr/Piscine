#include <unistd.h>

void	ft_writestr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_writestr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
