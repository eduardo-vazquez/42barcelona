/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_operations.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:29:30 by evazquez          #+#    #+#             */
/*   Updated: 2023/10/02 19:59:31 by evazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft/libft.h"
#include "../include/push_swap.h"

//sa (swap a): Swap the first 2 elements at the top of stack a.
//Do nothing if there is only one or no elements.
void	ft_swap_a(node **head)
{
	node	*pt_tmp;
	
	if(!*head || !((*head)->next))
		return;
	pt_tmp = *head;
	*head = pt_tmp->next;
	pt_tmp->next = (*head)->next;
	(*head)->next = pt_tmp;
	write(1, "sa\n", 3);
}

void	ft_swap_b(node **head)
{
	node	*pt_tmp;
	
	if(!*head || !((*head)->next))
		return;
	pt_tmp = *head;
	*head = pt_tmp->next;
	pt_tmp->next = (*head)->next;
	(*head)->next = pt_tmp;
	write(1, "sb\n", 3);
}

void	ft_swap_swap(node **head_a, node **head_b)
{
	ft_swap_a(head_a);
	ft_swap_b(head_b);
}

void	ft_push_a(node **pp_stack_a, node **pp_stack_b)
{
	node *pt_tmp;
	node *pt_next;
	if(!(*pp_stack_b))
		return;
	pt_tmp = *pp_stack_a;
	pt_next = (*pp_stack_b)->next;
	*pp_stack_a = *pp_stack_b;
	(*pp_stack_a)->next = pt_tmp;
	*pp_stack_b = pt_next;	
	write(1, "pa\n", 3);
}

void	ft_push_b(node **pp_stack_b, node **pp_stack_a)
{
	node *pt_tmp;
	if(!(*pp_stack_a))
		return;
	pt_tmp = *pp_stack_b;
	*pp_stack_b = *pp_stack_a;
	(*pp_stack_b)->next = pt_tmp;
	*pp_stack_a = NULL;	
	write(1, "pb\n", 3);
}
