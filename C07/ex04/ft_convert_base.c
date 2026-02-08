#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

	ft_atoi_base()



char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*res;
	int	nbr_atoi;

	nbr_atoi = ft_atoi_base(nbr, base_from);
	printf("%d\n", nbr_atoi);
	//nbr_base_10 = ft_convert_base_from(nbr_atoi, base_from);
	//res = ft_convert_base_to(nbr_base_10, base_to);

	return (res);
}

int	main(void)
{
	char	*txt1;

	txt1 = ft_convert_base("42", "0123456789", "01");
	return (0);
}
