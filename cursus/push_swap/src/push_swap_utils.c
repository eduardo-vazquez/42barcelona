/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:52:54 by evazquez          #+#    #+#             */
/*   Updated: 2023/09/29 19:29:28 by evazquez         ###   ########.fr       */
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
	 new->value = value;
	 new->index = -1;
	 new->next = NULL;
	 return (new);
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
