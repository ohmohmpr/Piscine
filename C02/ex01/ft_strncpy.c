//#include <stdio.h>
//#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	if (ft_strlen(dest) == 0 || ft_strlen(src) == 0)
		return (dest);
	if (dest == NULL || src == NULL)
		return (dest);
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
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
	//printf("NULL1 case:%s\n", ft_strncpy(NULL, "Test", 4));
	//printf(strncpy(dst1, NULL, 4));
//	printf("NULL2 case:%s\n", ft_strncpy(NULL, NULL, 4));
	printf("Case 1, LX: Equal size:%s\n", strncpy(dst1, "Test", 4));
	printf("Case 1, FT: Equal size:%s\n", ft_strncpy(dst1, "Test", 4));
	printf("Case 2, LX: Teeth> 4sz:%s\n", strncpy(dst2, "Teeth", 4));
	printf("Case 2, FT: Teeth> 4sz:%s\n", ft_strncpy(dst2, "Teeth", 4));
	printf("Case 3, LX: For  < 4sz:%s\n", strncpy(dst3, "For", 4));
	printf("Case 3, FT: For  < 4sz:%s\n", ft_strncpy(dst3, "For", 4));
	//printf("Case 4, LX: ""   < 4sz:%s\n", strncpy("", "For", 4));
	printf("Case 4, FT: ""   < 4sz:%s\n", ft_strncpy("", "For", 4));
	//printf("Case 5, LX: src""< 4sz:%s\n", strncpy("", "", 4));
	printf("Case 5, FT: src""< 4sz:%s\n", ft_strncpy("", "", 4));
	return (0);
}
*/
