#include <unistd.h>

void	print_hexadecimal(char *str)
{
	int		quotient;
	int		remainder;
	char	*str_hex;

	str_hex = "0123456789abcdef";
	quotient = *str / 16;
	remainder = *str % 16;
	write(1, "\\", 1);
	if (quotient == 0)
		write(1, "0", 1);
	if (quotient == 1)
		write(1, "1", 1);
	if (remainder < 10)
		write(1, &str_hex[remainder], 1);
	if (remainder >= 10)
		write(1, &str_hex[remainder], 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str > 0 && *str < 16)
			print_hexadecimal(str);
		else if (*str > 15 && *str < 32)
			print_hexadecimal(str);
		else
			write(1, str, 1);
		str++;
	}
}
