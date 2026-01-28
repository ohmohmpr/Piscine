int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*s1 == *s2 && *s1 && *s2 && i < n - 1)
	{
		i++;
		s1++;
		s2++;
	}
	if (*s1 == *s2 || n == 0)
		return (0);
	else if (!*s1)
		return (-1 * (*s2));
	else if (!*s2)
		return (*s1);
	else
		return (*s1 - *s2);
}

unsigned int	ft_strlen(char *to_find)
{
	unsigned int	count;

	count = 0;
	while (*to_find)
	{
		count++;
		to_find++;
	}
	return (count);
}

char	*ft_strstr(char *str, char *to_find)
{
	int				i;
	int				j;
	unsigned int	len_to_find;

	i = 0;
	j = 0;
	len_to_find = ft_strlen(to_find);
	if (!(*to_find))
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			if (ft_strncmp(&str[i], &to_find[j], len_to_find) == 0)
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
