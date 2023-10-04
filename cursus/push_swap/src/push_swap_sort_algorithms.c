/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort_algorithms.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:30:29 by evazquez          #+#    #+#             */
/*   Updated: 2023/10/04 19:49:48 by evazquez         ###   ########.fr       */
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
