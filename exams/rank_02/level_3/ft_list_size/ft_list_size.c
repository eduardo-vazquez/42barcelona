#include <stdio.h>
#include <stdlib.h>
#include "ft_list_size.h"
     
int	ft_list_size(t_list	*begin_list)
{
	int		i;
	t_list	*current;

	i = 0;
	current = begin_list;
	while (current != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}
