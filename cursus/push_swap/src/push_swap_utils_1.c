/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:20:57 by evazquez          #+#    #+#             */
/*   Updated: 2023/10/04 18:31:14 by evazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft/libft.h"
#include "../include/push_swap.h"

int	ft_long_list(node *list)
{
	int		longitud;
	node	*lista;

	longitud = 0;
	lista = list;
	while (lista != NULL)
	{
		lista = lista->next;
		longitud++;
	}
	return (longitud);
}

int	ft_is_sorted(node *list)
{
	node	*tmp;

	tmp = list;
	while (list != NULL)
	{
		if (list->next != NULL && list->value > list->next->value)
			return (0);
		list = list->next;
	}
	return (1);
}
