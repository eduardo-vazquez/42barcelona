/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:52:54 by evazquez          #+#    #+#             */
/*   Updated: 2023/10/02 19:59:29 by evazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft/libft.h"
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

void	ft_append_node(node **head, node *node_to_add)
{
	node	*tmp_node;

    if (*head == NULL)
        return;
    tmp_node = *head;
    while (tmp_node->next != NULL) {
        tmp_node = tmp_node->next;
    }
    tmp_node->next = node_to_add;
}

void	ft_load_nodes(node **head, char **argv, int argc)
{
	int		i;
	node	*pt_index;
	i = 1;
	pt_index = *head;
	pt_index->value = ft_atoi(argv[i++]);
	pt_index->index = -1;
	while (i < argc)
	{
		pt_index = ft_create_node(ft_atoi(argv[i++]));
		ft_append_node(head, pt_index);
	}
}

//ELIMINAR
void ft_print_list(node* head)
{
	printf("head_address %p\n", (void *)&head);
	if (head == NULL)
		printf("head_content: vacio");
	while (head)
	{
		printf("value: %d, index: %d, node_add: %p, next: %p\n", head->value, head->index, (void *)head, (void *)head->next);
		head = head->next;
	}
}
