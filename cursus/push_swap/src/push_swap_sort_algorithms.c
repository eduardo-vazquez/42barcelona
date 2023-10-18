/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort_algorithms.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:30:29 by evazquez          #+#    #+#             */
/*   Updated: 2023/10/18 12:43:42 by evazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_radix_sort(node **stacks)
{
	//AGREGAR UN IF si es que hay numeros con con terminacion 0 .. 1. ..2 
	int m;
	int n;
	int result;
	int longitud;
	m = 10;
	n = 1;
	result = 0;
	while (stacks[0] != NULL)
	{
		longitud = ft_count_nodes(stacks[0]);
		while (longitud > 0)
		{
			if ((stacks[0]->value % m) / n == result)
			{
				ft_pb(stacks);
			}
			else
				ft_ra(stacks);
			longitud--;
		}
		result++;
	}
	m *= 10;
	n *= 10;
	result = 9;
	while (stacks[1] != NULL)
	{
		longitud = ft_count_nodes(stacks[1]);
		while (longitud > 0)
		{
			if ((stacks[1]->value % m) / n == result)
				ft_pa(stacks);
			else
				ft_rb(stacks);
			longitud--;
		}
		result--;
	}
	m *= 10;
	n *= 10;
	result = 0;
	while (stacks[0] != NULL)
	{
		longitud = ft_count_nodes(stacks[0]);
		while (longitud > 0)
		{
			if ((stacks[0]->value % m) / n == result)
				ft_pb(stacks);
			else
				ft_ra(stacks);
			longitud--;
		}
		result++;
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
