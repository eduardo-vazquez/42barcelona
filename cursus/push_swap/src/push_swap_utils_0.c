/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_0.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:52:54 by evazquez          #+#    #+#             */
/*   Updated: 2023/10/09 17:56:34 by evazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

node	*ft_create_node(int value)
{
	 node	*new;

	 new = (node *)malloc(sizeof(node));
	 if (new == NULL)
		 return (NULL);
	 ft_init_node(new, value, -1, NULL);
	 return (new);
}

void	ft_init_node(node *node_to_init, int value, int index, node *link)
{
	node_to_init->value = value;
	node_to_init->index = index;
	node_to_init->next = link;
}

void	ft_append_node(node *head, node *node_to_add)
{
	node	*tmp_node;

    if (head == NULL)
        return;
    tmp_node = head;
    while (tmp_node->next != NULL) 
        tmp_node = tmp_node->next;
    tmp_node->next = node_to_add;
}

void	ft_load_nodes(node *head, char **argv, int argc)
{
	int		i;
	node	*pt_index;
	char	**str_split;
	int		longitud;

	longitud = 0;
	pt_index = head;
	if (argc == 2)
	{
		i = 0;
		str_split = ft_split(argv[1], ' ');
		while (str_split[i] != NULL)
			i++;
		longitud = i;
		i = 0;
		pt_index->value = ft_atoi(str_split[i++]);
		pt_index->index = -1;
		while (i < longitud)
		{
			pt_index = ft_create_node(ft_atoi(str_split[i++]));
			ft_append_node(head, pt_index);
		}
	}
	if (argc > 3)
	{
		i = 1;
		pt_index->value = ft_atoi(argv[i++]);
		pt_index->index = -1;
		while (i < argc)
		{
			pt_index = ft_create_node(ft_atoi(argv[i++]));
			ft_append_node(head, pt_index);
		}
	}
	ft_print_list(head);
}

void	ft_free_mallocs(node **stacks)
{
	node *tmp;
	node *to_free;

	tmp = stacks[0];
	while (tmp != NULL)
	{
		to_free = tmp;
		tmp = tmp->next;
		free(to_free);
	}
	tmp = stacks[1];
	while (tmp != NULL)
	{
		to_free = tmp;
		tmp = tmp->next;
		free(to_free);
	}

}

int	ft_largest_value(node *stacks)
{
	node	*tmp;
	int		largest;

	tmp = stacks;
	largest = 0;
	while (tmp != NULL)
	{
		if (tmp->value > largest)
			largest = tmp->value;
		tmp = tmp->next;
	}
	return (largest);
}

int	ft_smallest_value(node *stacks)
{
	node	*tmp;
	int		smallest;

	tmp = stacks;
	smallest = ft_largest_value(stacks);
	while (tmp != NULL)
	{
		if (tmp->value < smallest)
			smallest = tmp->value;
		tmp = tmp->next;
	}
	return (smallest);
}

//ELIMINAR
void ft_print_list(node* head)
{
	printf("head_address %p\n", (void *)&head);
	if (head == NULL)
		printf("head_content: vacio\n");
	while (head)
	{
		printf("value: %d, index: %d, node_add: %p, next: %p\n", head->value, head->index, (void *)head, (void *)head->next);
		head = head->next;
	}
}
