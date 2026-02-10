#include <stdio.h>
#include <stdlib.h>

typedef struct	s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}	t_stock_str;

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	char		*txt;
	t_stock_str	*res;

	txt = "test";
	res = malloc(ac * sizeof(t_stock_str));
	i = 1;
	while (i < ac)
	{
		res[i].size = ft_strlen(av[i]);
		res[i].str = av[i];
		res[i].copy = txt;
		i++;
	}
	return (res);
}

int	main(int argc, char *argv[])
{
	//ft_strs_to_tab(argc, argv);
	char *strs[] = {"hello", "world", "this", "is", "a", "test"};
	int size = sizeof(strs) / sizeof(char *);
	struct s_stock_str *result = ft_strs_to_tab(size, strs);

	if (result == NULL)
	{
		printf("Error: ft_strs_to_tab returned NULL\n");
	}
	
	for (int i = 0; i < size; i++)
	{
		printf("%s\n", result[i].copy);
	}
	return (0);
}
