#include <stdlib.h>
#include <stdio.h>

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

char	*ft_strdup(char *src)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)malloc(ft_strlen(src) * sizeof(char));
	while (*src)
	{
		ptr[i] = *src;
		i++;
		src++;
	}
	ptr[i] = '\0';
	return (ptr);
}
