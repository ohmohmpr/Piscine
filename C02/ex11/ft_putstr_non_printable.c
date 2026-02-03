#include <unistd.h>

void	print_hexadecimal(char *str)
{
	unsigned int	quotient;
	unsigned int	remainder;
	char			*str_hex;

	str_hex = "0123456789abcdef";
	quotient = (*str / 16) % 16;
	remainder = *str % 16;
	write(1, "\\", 1);
	write(1, &str_hex[quotient], 1);
	write(1, &str_hex[remainder], 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str >= 0 && *str < 32)
			print_hexadecimal(str);
		else if (*str > 126)
			print_hexadecimal(str);
		else
			write(1, str, 1);
		str++;
	}
}
/*
int	main(void)
{
	ft_putstr_non_printable("\n\t\a");
	return (0);
}
*/
