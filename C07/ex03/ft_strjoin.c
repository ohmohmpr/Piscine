#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{

	*strs = (char *)malloc(size * sizeof(int));


	return (*strs);
}

int	main(void)
{
	char	*txt = "abcdefhgij";

	printf("%s", ft_strjoin(100, &txt, ","));
	return (0);
}
