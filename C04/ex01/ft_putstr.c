#include <unistd.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (*str)
	{
		str++;
		c++;
	}
	return (c);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}
