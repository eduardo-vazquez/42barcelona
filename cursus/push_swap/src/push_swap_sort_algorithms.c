/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort_algorithms.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:30:29 by evazquez          #+#    #+#             */
/*   Updated: 2023/10/05 19:16:20 by evazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft/libft.h"
#include "../include/push_swap.h"

void	ft_bubble_sort(node **stacks)
{
	int longitud;
	int	i;
	int j;
	int	n;

	n = 1;
	longitud = ft_long_list(stacks[0]);
	i = longitud;
	while (longitud > 0)
	{
		j = ft_long_list(stacks[0]) - n;
		i = ft_long_list(stacks[0]);
		while (i > 0)
		{
			if (j > 0 && stacks[0]->value > (stacks[0]->next->value))
			{
				ft_sa(stacks);
				if (ft_is_sorted(stacks[0]))
					return;
			}
			ft_ra(stacks);
			if (ft_is_sorted(stacks[0]))
				return;
			i--;
			j--;
		}
		longitud--;
		n++;
	}
}

void	ft_small_sort(node **stacks)
{
	if (stacks[0]->value > stacks[0]->next->value)
		ft_sa(stacks);
	if (ft_is_sorted(stacks[0]))
		return;
	ft_pb(stacks);
	if (stacks[0]->value > stacks[0]->next->value)
		ft_sa(stacks);
	ft_pa(stacks);
	if (stacks[0]->value > stacks[0]->next->value)
		ft_sa(stacks);
}

void	ft_somesort(node **stacks)
{
	int smallest;
	int longitud;
	node *tmp;
	int largest;
	int moves;

	moves = 0;
	largest = ft_largest_value(stacks[0]);
	tmp = stacks[0];
	longitud = ft_long_list(stacks[0]);
	smallest = ft_smallest_value(stacks[0]);
	while (0 < ft_long_list(stacks[0]))
	{
		//if(ft_int_is_in_list)
		if (stacks[0]->value == smallest)
		{
			ft_pb(stacks);
			smallest++;
		}
		ft_ra(stacks);
	}
	while (0 < ft_long_list(stacks[1]))
		ft_pa(stacks);	
}

void	ft_divided_bubble(node **stacks)
{
	int 	middle;
	int		i;

	middle = (ft_smallest_value(stacks[0]) + ft_largest_value(stacks[0])) / 2;
	i = ft_long_list(stacks[0]) ;
	while (i >= 0)
	{
		if (stacks[0]->value <= middle)
			ft_pb(stacks);
		else
			ft_ra(stacks);
		i--;
	}
	ft_bubble_sort(&stacks[0]);
	ft_bubble_sort(&stacks[1]);
	i = middle;
	while (i > 0)
	{
		ft_rrb(stacks);
		ft_pa(stacks);
		i--;
	}
}
