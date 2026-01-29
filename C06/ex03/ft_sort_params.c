#include <unistd.h>

void	ft_writestr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else if (!*s1)
		return (-1 * (*s2));
	else if (!*s2)
		return (*s1);
	else
		return (*s1 - *s2);
}

void	ft_swap(char *a[], char *b[])
{
	char	*tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

void	ft_sort(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i < argc)
	{
		j = 1;
		while (j < argc - i)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
				ft_swap(&argv[j], &argv[j + 1]);
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	ft_sort(argc, argv);
	while (i < argc)
	{
		ft_writestr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
