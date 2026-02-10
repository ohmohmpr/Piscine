#include <unistd.h>

#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H

int	EVEN(int nbr)
{
	if (nbr % 2 == 0)
		return (1);
	else
		return (0);
}
#define t_bool int
#define FALSE 0
#define TRUE 1
#define EVEN_MSG "I have an even number of arguments."
#define ODD_MSG "I have an odd number of arguments."
#define SUCCESS 0
#endif /*FT_BOOLEAN_H */
