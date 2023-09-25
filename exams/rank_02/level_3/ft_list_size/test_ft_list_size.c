#include <stdlib.h>
#include <stdio.h>
#include "ft_list_size.h"

int	ft_list_size(t_list *begin_list);

int	main()
{
	t_list	*list;
	t_list	elem1;
	t_list	elem2;
	t_list	elem3;
	int		size;

	list = &elem1;
	elem1.next = &elem2;
	elem2.next = &elem3;
	elem3.next = NULL;

	size = ft_list_size(list);

	printf("Tamaño de la lista: %d\n", size);
	return (0);
}
