/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_operations.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:29:30 by evazquez          #+#    #+#             */
/*   Updated: 2023/10/03 19:20:04 by evazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft/libft.h"
#include "../include/push_swap.h"

int	ft_swap(node **head)
{
	node	*pt_tmp;
	
	if (!*head || !((*head)->next))
		return (0);
	pt_tmp = *head;
	*head = pt_tmp->next;
	pt_tmp->next = (*head)->next;
	(*head)->next = pt_tmp;
	return (1);
}

int	ft_push_node(node **pp_stack_a, node **pp_stack_b)
{
	node *pt_tmp;
	node *pt_next;
	if (!(*pp_stack_b))
		return (0);
	pt_tmp = *pp_stack_a;
	pt_next = (*pp_stack_b)->next;
	*pp_stack_a = *pp_stack_b;
	(*pp_stack_a)->next = pt_tmp;
	*pp_stack_b = pt_next;	
	return (1);
}

int	ft_rotate_node(node **head)
{
	node	*first_node;
	node	*last_node;
	node	*penu_node;

	if (!*head || !((*head)->next))
		return (0);
	first_node = *head;
	last_node = *head;
	while (last_node->next != NULL)
		last_node = last_node->next;
	penu_node = *head;
	while (penu_node->next->next != NULL)
		penu_node = penu_node->next;
	*head = first_node->next;
	last_node->next = first_node;
	first_node->next = NULL;
	return (1);
}

int	ft_reverse_rotate(node **head)
{
	node	*first_node;
	node	*last_node;
	node	*penu_node;

	if (!*head || !((*head)->next))
		return (0);
	first_node = *head;
	last_node = *head;
	while (last_node->next != NULL)
		last_node = last_node->next;
	penu_node = *head;
	while (penu_node->next->next != NULL)
		penu_node = penu_node->next;
	*head = last_node;
	(*head)->next = first_node;
	penu_node->next = NULL;
	return (1);
}
