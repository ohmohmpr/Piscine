#include <stdlib.h>
#include <stdio.h>

int	ft_strcmp(char *str, char *charset)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (charset[j])
		{
			if (str[i] == charset[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

char	*ft_strcut(char *str, char *res, char *charset)
{
	int	i;
	int	shift_i;

	i = 0;
	shift_i = 0;
	shift_i = ft_strcmp(str, charset);
	while (i < shift_i)
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	str = str + shift_i;
	return (str);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		shift_i;
	char	**res;

	res = (char **)malloc(20 * sizeof(char *));
	i = 0;
	shift_i = 0;
	while (*str)
	{
		shift_i = ft_strcmp(str, charset);
		if (shift_i > 0)
		{
			res[i] = (char *)malloc((shift_i) * sizeof(char));
			str = ft_strcut(str, res[i], charset);
			i++;
		}
		str++;
	}
	res[i] = (char *)malloc(1 * sizeof(char));
	res[i] = '\0';
	return (res);
}
/*
int	main(void)
{
	char	**txt1;
	char	**txt2;
	//char    **txt3;
	int	i;

	i = 0;
	txt1 = ft_split(",,hello,world,,", ",");
	while (txt1[i])
	{
		printf("%s\n", txt1[i]);
		free(txt1[i]);
		i++;
	}
	free(txt1);
	printf("-------------------\n");
	i = 0;
	txt2 = ft_split("hello,,,,world", ",");
	while (txt2[i])
	{
		printf("%s\n", txt2[i]);
		free(txt2[i]);
		i++;
	}
	free(txt2);

	printf("-------------------\n");
	i = 0;
	txt3 = ft_split("aaabbbaaaccc", "ab");
	while (txt3[i])
	{
		printf("%s\n", txt3[i]);
		free(txt3[i]);
		i++;
	}
	free(txt3);
	return (0);
}*/
