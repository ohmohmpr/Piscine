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
