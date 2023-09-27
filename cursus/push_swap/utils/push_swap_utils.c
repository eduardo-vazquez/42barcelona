/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:52:54 by evazquez          #+#    #+#             */
/*   Updated: 2023/09/27 18:04:14 by evazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_create_node(int value)
{
	 t_list	*new;

	 new = (t_list *)malloc(sizeof(t_list));
	 if (new = NULL)
		 return (NULL);
	 new->value = value;
	 new->index = -1;
	 new->next = NULL;
	 return (NULL);
}

void	ft_append_node(t_list **head, t_list *node)
{
	t_list	*tmp;
    if (*head == NULL) {
        *head = nodo;
        return;
    }

    tmp = *head;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }

    tmp->next = node;
}
