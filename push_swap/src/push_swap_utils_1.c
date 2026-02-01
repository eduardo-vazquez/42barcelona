/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:20:57 by evazquez          #+#    #+#             */
/*   Updated: 2023/10/18 11:43:54 by evazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_count_nodes(node *list)
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

long	ft_atolong(const char *str)
{
	long	i;
	long	j;

	i = 0;
	j = 1;
	while (*str == ' ' || *str == '\r' || *str == '\t'\
			|| *str == '\n' || *str == '\v' || *str == '\f')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			j *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		i = i * 10 + *str - '0';
		str++;
	}
	return (i * j);
}
