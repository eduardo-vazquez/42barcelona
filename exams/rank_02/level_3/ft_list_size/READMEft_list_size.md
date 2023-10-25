###subject
```
Assignment name  : ft_list_size
Expected files   : ft_list_size.c, ft_list.h
Allowed functions:
--------------------------------------------------------------------------------

Write a function that returns the number of elements in the linked list that's
passed to it.

It must be declared as follows:

int	ft_list_size(t_list *begin_list);

You must use the following structure, and turn it in as a file called
ft_list.h:

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;
```
### code
ft_list.h
```
typedef struct	s_list
{
	struct s_list	*next;
	void			*data;
}	t_list;

```
ft_list_size.c
```
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
```
