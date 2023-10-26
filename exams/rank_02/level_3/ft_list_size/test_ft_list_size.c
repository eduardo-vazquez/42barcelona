#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

int	ft_list_size(t_list *begin_list);

int	main()
{
	t_list	*head;
	t_list	elem1;
	t_list	elem2;
	t_list	elem3;
	int		size;

	head 		= &elem1;
	elem1.next 	= &elem2;
	elem2.next 	= &elem3;
	elem3.next 	= NULL;

	size = ft_list_size(head);

	printf("Tamaño de la lista: %d\n", size);
	return (0);
}
