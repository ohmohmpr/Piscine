#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*new_elem;

	new_elem = malloc(1 * sizeof(t_list));
	new_elem->data = data;
	new_elem->next = NULL;
	return (new_elem);
}

int	main(void)
{
	t_list	*elem;

	elem = ft_create_elem("hello");
	printf("%s\n", (char *)elem->data);
	printf("%p\n", elem->next);
	return (0);
}
