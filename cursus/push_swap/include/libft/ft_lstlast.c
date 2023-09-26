/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:43:08 by evazquez          #+#    #+#             */
/*   Updated: 2023/03/05 15:55:49 by evazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*actual;

	actual = lst;
	if (actual == NULL || lst == NULL)
		return (NULL);
	if (actual->next == NULL)
		return (actual);
	while (actual != NULL)
	{
		if (actual->next == NULL)
			return (actual);
		actual = actual->next;
	}
	return (actual);
}
