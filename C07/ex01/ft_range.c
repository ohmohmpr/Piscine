#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	size;

	size = 0;
	while (*src)
	{
		size++;
		src++;
	}
	return (size);
}

int	*ft_range(int min, int max)
{
	int		i;
	int		*ptr;

	if (min >= max)
	{
		return (NULL);
	}
	i = 0;
	ptr = (int *)malloc((max - min) * sizeof(int));
	while (min < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	ptr[i] = '\0';
	return (ptr);
}
