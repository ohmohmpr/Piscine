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
	int	max;
	int	begin;

	begin = 0;
	max = 1;
	while (n > 0)
	{
		max = max * 10;
		n--;
	}
	ft_putnbr(max);
	while (begin <= max)
	{
		if (check_ascending_order(begin))
		{
			ft_putnbr(begin);
			write(1, " ,", 1);
		}
		begin++;
	}
}

int	main(void)
{
	ft_print_combn(9);
	return (0);
}
