void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp[1000];
	int	start;

	start = 0;
	while (start < size)
	{
		tmp[start] = tab[size - start - 1];
		start++;
	}
	start = 0;
	while (start < size)
	{
		tab[start] = tmp[start];
		start++;
	}
}
