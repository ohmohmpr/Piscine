#include <unistd.h>

int	check_ascending_order(int nb)
{
	int	quotient;
	int	remainder_quotient;
	int	remainder;
	int	is_ascending;

	is_ascending = 0;
	quotient = nb / 10;
	remainder_quotient = quotient % 10;
	remainder = nb % 10;
	if (quotient != 0)
	{
		if (remainder_quotient < remainder)
		{
			is_ascending = 1;
			is_ascending = check_ascending_order(quotient);
		}
	}
	else
	{
		is_ascending = 1;
	}
	return (is_ascending);
}

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

void	ft_print_combn(int n)
{
	char	i[1];

	i[0] = '0';
	while (n > 0)
	{
		write(1, &i, 1);
		i[0]++;
		n--;
	}
}

int	main(void)
{
	ft_print_combn(2);
	ft_putnbr(check_ascending_order(1000));
	ft_putnbr(check_ascending_order(1234));
	return (0);
}
