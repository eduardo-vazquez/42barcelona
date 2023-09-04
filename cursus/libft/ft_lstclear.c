/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 16:52:11 by evazquez          #+#    #+#             */
/*   Updated: 2023/03/05 18:27:22 by evazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*actual;

	if (!del || !lst || !*lst)
		return ;
	while (*lst && lst)
	{
		actual = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = actual;
	}
}
