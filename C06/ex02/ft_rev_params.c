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

	i = argc;
	while (i > 1)
	{
		ft_writestr(argv[i - 1]);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
