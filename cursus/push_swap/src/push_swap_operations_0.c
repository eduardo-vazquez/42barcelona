/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_operations_0.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:29:30 by evazquez          #+#    #+#             */
/*   Updated: 2023/10/04 19:49:52 by evazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft/libft.h"
#include "../include/push_swap.h"

void	ft_sa(node **stacks)
{
	if	(ft_swap(&stacks[0]))
		write(1, "sa\n", 3);
}

void	ft_sb(node **stacks)
{
	if (ft_swap(&stacks[1]))
		write(1, "sb\n", 3);
}

void	ft_ss(node **stacks)
{
	if (ft_swap(&stacks[0]) && ft_swap(&stacks[1]))
	   write(1, "ss\n", 3);	
}

void	ft_pa(node **stacks)
{
	if (ft_push_node(&stacks[0], &stacks[1]))
		write(1, "pa\n", 3);
}

void	ft_pb(node **stacks)
{
	if (ft_push_node(&stacks[1], &stacks[0]))
		write(1, "pb\n", 3);
}

void	ft_ra(node **stacks)
{
	if (ft_rotate_node(&stacks[0]))
		write(1, "ra\n", 3);
}

void	ft_rb(node **stacks)
{
	if (ft_rotate_node(&stacks[1]))
		write(1, "rb\n", 3);
}

void	ft_rr(node **stacks)
{
	if (ft_rotate_node(&stacks[0]) && ft_rotate_node(&stacks[1]))
		write(1, "rr\n", 3);
}

void	ft_rra(node **stacks)
{
	if (ft_reverse_rotate(&stacks[0]))
			write(1, "rra\n", 4);
}

void	ft_rrb(node **stacks)
{
	if (ft_reverse_rotate(&stacks[1]))
			write(1, "rrb\n", 4);
}

void	ft_rrr(node **stacks)
{
	if (ft_reverse_rotate(&stacks[0]) && ft_reverse_rotate(&stacks[1]))
			write(1, "rrr\n", 4);
}
