/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:56:09 by evazquez          #+#    #+#             */
/*   Updated: 2023/03/05 16:33:31 by evazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*actual;

	actual = *lst;
	if (*lst)
	{
		while (actual->next != NULL)
				actual = actual->next;
		actual->next = new;
	}
	if (!*lst)
		*lst = new;
}
