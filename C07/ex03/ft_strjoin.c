#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}

int	ft_strcmp(int idx, char *dest, char *src)
{
	while (*src)
	{
		dest[idx] = *src;
		src++;
		idx++;
	}
	return (idx);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		m;
	int		i;
	char	*res;

	i = 0;
	m = 0;
	if (size == 0)
	{
		res = (char *)malloc(1 * sizeof(char));
		return (res);
	}
	res = (char *)malloc(100 * sizeof(char));
	while (m < size)
	{
		i = ft_strcmp(i, res, strs[m]);
		if (m < size - 1)
			i = ft_strcmp(i, res, sep);
		m++;
	}
	res[i] = '\0';
	return (res);
}
/*
int	main(void)
{
	char	*txt0[] = {NULL};
	char	*txt1[] = { "Hello" };
	char	*txt2[] = { "Hello", "world", "!" };
	char	*txt3[] = { "", "Hello", "", "world" };
	char	*txt4[] = { "Hello", "world" };
	char	*txt;
	int	i;

	i = 0;

	txt = ft_strjoin(0, txt0, ",");
	printf("1:%s\n",txt);
	free(txt);
	printf("2:%s\n", ft_strjoin(1, txt1, ","));
	printf("3:%s\n", ft_strjoin(3, txt2, ", "));
	printf("4:%s\n", ft_strjoin(4, txt3, "-"));
	printf("5:%s\n", ft_strjoin(2, txt4, ""));

	return (0);
}*/
