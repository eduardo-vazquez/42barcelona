/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:16:24 by evazquez          #+#    #+#             */
/*   Updated: 2023/10/06 12:34:59 by evazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct list
{
	int			value;
	int 		index;
	struct list	*next;

} node;

void	ft_init_node(node*, int, int, node*);
void	ft_load_nodes(node*, char**, int);
node	*ft_create_node(int);
void	ft_append_node(node *head, node *node);
void	ft_free_mallocs(node **stacks);

/*funciones*/
int		ft_long_list(node*);
int		ft_is_sorted(node*);

/*sorting algorithms*/
void	ft_bubble_sort(node**);
void	ft_small_sort(node**);
int		ft_smallest_value(node*);
int		ft_largest_value(node*);
void	ft_divided_bubble(node**);
void	ft_somesort(node**);
void	ft_radix_sort(node **);

/* operaciones*/
int		ft_swap(node**);
void	ft_sa(node**);
void	ft_sb(node**);
void	ft_ss(node**);

int		ft_push_node(node**, node**);
void 	ft_pa(node**);
void 	ft_pb(node**);

int		ft_rotate_node(node**);
void	ft_ra(node**);
void	ft_rb(node**);
void	ft_rr(node**);

int		ft_reverse_rotate(node**);
void	ft_rra(node**);
void	ft_rrb(node**);
void	ft_rrr(node**);

//ELIMINAR
void ft_print_list(node* head);

#endif
