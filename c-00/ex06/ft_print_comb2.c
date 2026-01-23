#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	remainder;
	int		quotient;
	int		base;

	base = 10;
	quotient = nb / base;
	remainder = nb % base + '0';
	if (quotient != 0)
	{
		ft_putnbr(quotient);
	}
	write(1, &remainder, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			if (i < 10)
				write(1, "0", 1);
			ft_putnbr(i);
			write(1, " ", 1);
			if (j < 10)
				write(1, "0", 1);
			ft_putnbr(j);
			if (!(i == 98 && j == 99))
				write(1, ", ", 1);
			j++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
