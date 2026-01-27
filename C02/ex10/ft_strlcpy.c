#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_src;

	i = 0;
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	len_src = 0;
	while (src[len_src])
	{
		len_src++;
	}
	return (len_src);
}

//int	main(void)
//{
//	char	dest1[10];
//	char	dest2[10];
//	char	dest3[5];
//	char	dest5[10];
//	char	dest6[1];

//	printf("%d\n", ft_strlcpy(dest1, "World!", 10));        //Expected "World!"    (len  6), got "World!"     (len 11)
//	printf("%d\n", ft_strlcpy(dest2, "Hello, World!", 10)); //Expected "Hello, Wo" (len 13), got "Hello, Wor" (len 11)
//	printf("%d\n", ft_strlcpy(dest3, "Hello, World!", 5));  //Expected "Hell"      (len 13), got "Hello"      (len 6)
//	printf("%d\n", ft_strlcpy(dest5, "", 5));               //Expected ""          (len  0), got ""           (len 6)
//	printf("%d\n", ft_strlcpy(dest6, "Hello, World!", 1));  //Expected ""          (len 13), got "H"          (len 2)

//	return (0);
//}
