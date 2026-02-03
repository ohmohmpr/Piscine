//#include <stdio.h>
//#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	if (dest == NULL || src == NULL)
		return (ft_strlen(src));
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
/*
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
*/
/*
int	main(void)
{
	char	dst1[200];
	char	dst2[200];
	char	dst3[200];
//	char	dst4[200];
//	char	dst5[200];

	// NULL
	//strncpy(NULL, "Test", 4);
	printf("NULL1 case:%d \n", ft_strlcpy(NULL, "Test", 4));
	//printf(strlcpy(dst1, NULL, 4));
	printf("NULL2 case:%d \n", ft_strlcpy(NULL, NULL, 4));
//	printf("Case 1, LX: Equal size:%d \n", strlcpy(dst1, "Test", 4));
	printf("Case 1, FT: Equal size:%d \n", ft_strlcpy(dst1, "Test", 4));
//	printf("Case 2, LX: Teeth> 4sz:%d \n", strlcpy(dst2, "Teeth", 4));
	printf("Case 2, FT: Teeth> 4sz:%d \n", ft_strlcpy(dst2, "Teeth", 4));
//	printf("Case 3, LX: For  < 4sz:%d \n", strlcpy(dst3, "For", 4));
	printf("Case 3, FT: For  < 4sz:%d \n", ft_strlcpy(dst3, "For", 4));
	//printf("Case 4, LX: ""   < 4sz:%s \n", strncpy("", "For", 4));
	printf("Case 4, FT: ""   < 4sz:%d \n", ft_strlcpy("", "For", 4));
	//printf("Case 5, LX: src""< 4sz:%s \n", strncpy("", "", 4));
	printf("Case 5, FT: src""< 4sz:%d \n", ft_strlcpy("", "", 4));
	return (0);
}
*/
