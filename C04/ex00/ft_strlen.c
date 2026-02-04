//#include <stdio.h>

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
/*
int	main(void)
{
	printf("len: %d \n", ft_strlen("0123456789"));
	return (0);
}*/
