#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	remainder;
	int		quotient;
	int		base;

	base = 10;
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(-1 * (nb % 10));
		return ;
	}
	if (nb < 0)
	{
		nb = -1 * nb;
		write(1, "-", 1);
	}
	quotient = nb / base;
	remainder = nb % base + '0';
	if (quotient != 0)
	{
		ft_putnbr(quotient);
	}
	write(1, &remainder, 1);
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}*/
