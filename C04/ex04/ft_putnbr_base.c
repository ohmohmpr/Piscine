#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else if (!*s1)
		return (-1 * (*s2));
	else if (!*s2)
		return (*s1);
	else
		return (*s1 - *s2);
}

int	ft_selfcmp(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if (i != j)
			{
				if (base[i] == base[j])
					return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_is_valid_base(char *base)
{
	int	num_base;

	num_base = 0;
	if (!(ft_selfcmp(base)))
		return (0);
	while (*base)
	{
		if (!(ft_strcmp(&base[num_base], "+")))
			return (0);
		if (!(ft_strcmp(&base[num_base], "-")))
			return (0);
		base++;
		num_base++;
	}
	if (num_base == 1)
		return (0);
	return (num_base);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	remainder;
	int		quotient;
	int		base_num;

	base_num = ft_is_valid_base(base);
	if (base_num == 0)
		return ;
	if (nbr == -2147483648)
	{
		ft_putnbr_base(nbr / base_num, base);
		ft_putnbr_base(-1 * (nbr % base_num), base);
		return ;
	}
	if (nbr < 0)
	{
		nbr = -1 * nbr;
		write(1, "-", 1);
	}
	quotient = nbr / base_num;
	remainder = base[nbr % base_num];
	if (quotient != 0)
	{
		ft_putnbr_base(quotient, base);
	}
	write(1, &remainder, 1);
}
