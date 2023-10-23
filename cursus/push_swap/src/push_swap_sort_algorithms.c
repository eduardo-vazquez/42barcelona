/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort_algorithms.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:30:29 by evazquez          #+#    #+#             */
/*   Updated: 2023/10/23 23:15:20 by evazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_quicksort(node **stacks, int start_index, int last_index)
{
	printf("pivot_index: %d\n", ft_quicksort_range(stacks, start_index, last_index));
}

int	ft_quicksort_range(node** stacks, int pivot_index, int last_index)
{
	int pivot_value;
	int moves;
	int ra_moves;

	ra_moves = 0;
	moves = last_index + 1;
	while (pivot_index-- > 0)
		ra_moves += ft_ra(stacks);
	pivot_value = stacks[0]->value;
	last_index -= ra_moves;
	while (last_index >= 0)
	{
		if (stacks[0]->value <= pivot_value)
			ft_pb(stacks);
		else
			ra_moves += ft_ra(stacks);
		last_index--;
	}
	while (stacks[1])
		last_index += ft_pa(stacks);
	pivot_index = ra_moves - 1;
	while (ra_moves > 0)
		ra_moves -= ft_rra(stacks);
	return (pivot_index + 1);
}

void	ft_bubble_sort(node **stacks)
{
	int longitud;
	int	i;
	int j;
	int	n;

	n = 1;
	longitud = ft_count_nodes(stacks[0]);
	i = longitud;
	while (longitud > 0)
	{
		j = ft_count_nodes(stacks[0]) - n;
		i = ft_count_nodes(stacks[0]);
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
	{
		if (stacks[0]->next->value < stacks[0]->next->next->value)
		{
			if (stacks[0]->value > stacks[0]->next->next->value)
				ft_ra(stacks);
			else if (stacks[0]->value < stacks[0]->next->next->value)
				ft_sa(stacks);
		}
		else if (stacks[0]->next->value > stacks[0]->next->next->value)
		{
			ft_ra(stacks);
			ft_sa(stacks);
		}
	}
	else if (stacks[0]->value < stacks[0]->next->value)
	{
		if (stacks[0]->value > stacks[0]->next->next->value)
			ft_rra(stacks);
		else if (stacks[0]->value < stacks[0]->next->next->value)
		{
			ft_rra(stacks);
			ft_sa(stacks);
		}
	}	
}
