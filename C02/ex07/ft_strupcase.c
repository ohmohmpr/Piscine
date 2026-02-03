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

char	*ft_strupcase(char *str)
{
	int	i;

	if (str == NULL)
		return (0);
	if (ft_strlen(str) == 0)
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
//	printf("STR empty: %s\n", ft_strupcase(""));
//	printf("STR NULL : %s\n", ft_strupcase(NULL));
	char	tmp[] = "sdcm-f42mfmklfsd mklf SADOFend";

	printf("%s\n", ft_strupcase(tmp));
	return (0);
}
*/
