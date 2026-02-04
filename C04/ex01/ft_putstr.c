#include <unistd.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		c++;
	}
	return (c);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int	main(void)
{
	ft_putstr("ABCDEFHIJ");
	return (0);
}
