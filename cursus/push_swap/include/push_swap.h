/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:16:24 by evazquez          #+#    #+#             */
/*   Updated: 2023/10/02 19:59:27 by evazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include <stdio.h>

typedef struct list
	{
		int			value;
		int 		index;
		struct list	*next;

	} node;

void	ft_init_node(node*, int, int, node*);
void	ft_load_nodes(node **head, char **argv, int argc);
node	*ft_create_node(int value);
void	ft_append_node(node **head, node *node);

/* operaciones*/
void	ft_swap_a(node**);
void	ft_swap_b(node**);
void	ft_swap_swap(node**, node**);
void	ft_push_a(node**, node**);
void	ft_push_b(node**, node**);

//ELIMINAR
void	ft_print_list(node*);

#endif
