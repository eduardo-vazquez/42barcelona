/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort_algorithms.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:30:29 by evazquez          #+#    #+#             */
/*   Updated: 2023/10/19 17:59:29 by evazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_quicksort(node **stacks)
{
	printf("indice: %d\n", ft_quicksort_range(stacks, 0, 10));
}

int	ft_quicksort_range(node** stacks, int first, int last)
{
	int	index;
	int pivot;
	int moves;
	int min_moves;

	moves = last - first;
	min_moves = 0;
	index = first;
	while (index > 0)
	{
		ft_ra(stacks);
		index--;
	}
	pivot = stacks[0]->value;
	while (moves > 0)
	{
		if (stacks[0]->value >= pivot)
			ft_pb(stacks);
		else
		{
			ft_ra(stacks);
			min_moves++;
		}
		moves--;
	}
	printf("pivot: %d\n", pivot);
	while (stacks[1])
		ft_pa(stacks);
	while (min_moves > 0)
	{
		ft_rra(stacks);
		min_moves--;
	}
	return (index);
}

void	ft_radix_sort(node **stacks)
{
	int m;
	int n;
	int sorting_digit;
	int longitud;
	m = 10;
	n = 1;
	sorting_digit = 0;
	while (stacks[0] != NULL)
	{
		longitud = ft_count_nodes(stacks[0]);
		while (longitud > 0)
		{
			if ((stacks[0]->value % m) / n == sorting_digit)
				ft_pb(stacks);
			else
				ft_ra(stacks);
			longitud--;
		}
		sorting_digit++;
	}
	m *= 10;
	n *= 10;
	sorting_digit = 9;
	while (stacks[1] != NULL)
	{
		longitud = ft_count_nodes(stacks[1]);
		while (longitud > 0)
		{
			if ((stacks[1]->value % m) / n == sorting_digit)
				ft_pa(stacks);
			else
				ft_rb(stacks);
			longitud--;
		}
		sorting_digit--;
	}
	m *= 10;
	n *= 10;
	sorting_digit = 0;
	while (stacks[0] != NULL)
	{
		longitud = ft_count_nodes(stacks[0]);
		while (longitud > 0)
		{
			if ((stacks[0]->value % m) / n == sorting_digit)
				ft_pb(stacks);
			else
				ft_ra(stacks);
			longitud--;
		}
		sorting_digit++;
	}
	while (stacks[1] != NULL)
		ft_pa(stacks);	
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
