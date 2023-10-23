/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:16:24 by evazquez          #+#    #+#             */
/*   Updated: 2023/10/23 23:15:27 by evazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "../include/libft/libft.h"
#include <stdio.h>
#include <limits.h>

typedef struct list
{
	int			value;
	struct list	*next;

} node;


// utils_0
node	*ft_create_node(int);
void	ft_init_node(node*, int, node*);
void	ft_append_node(node *head, node *node);
void	ft_load_nodes(node*, char**, int);
void	ft_free_mallocs(node **stacks);
int		ft_largest_value(node*);
int		ft_smallest_value(node*);
void 	ft_print_list(node* head); //ELIMINAR

// utils_1
int		ft_count_nodes(node*);
int		ft_is_sorted(node*);
long	ft_atolong(const char*);

// errors_0
int		ft_is_wrong(int, char**);
int		ft_is_only_numbers(int, char**);
int		ft_is_bigger_or_smaller_then_integer(int, char**);
int		ft_are_there_doubles(int, char**);

/*sorting algorithms*/
void	ft_quicksort(node**);
int		ft_quicksort_range(node**, int, int);
void	ft_bubble_sort(node**);
void	ft_small_sort(node**);

/* operaciones*/
int		ft_swap(node**);
int		ft_sa(node**);
int		ft_sb(node**);
int		ft_ss(node**);

int		ft_push_node(node**, node**);
int 	ft_pa(node**);
int		ft_pb(node**);

int		ft_rotate_node(node**);
int		ft_ra(node**);
int		ft_rb(node**);
int		ft_rr(node**);

int		ft_reverse_rotate(node**);
int		ft_rra(node**);
int 	ft_rrb(node**);
int		ft_rrr(node**);

#endif
