/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:35:43 by evazquez          #+#    #+#             */
/*   Updated: 2023/10/02 19:59:24 by evazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft/libft.h"
#include "../include/push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	node *head_stack_a;
	node *head_stack_b;

	if (argc < 2)
		return (-1);
	head_stack_a = (node *)malloc(sizeof(node));
	head_stack_b = (node *)malloc(sizeof(node));
	ft_load_nodes(&head_stack_a, argv, argc);
	
	//ELIMINAR
	ft_init_node(head_stack_b, 99, 99, NULL);
	node	*tmp; 
	tmp = head_stack_a;
	
	//IMPRESION
	printf("stack a\n");
	ft_print_list(head_stack_a);
	printf("stack b\n");
	ft_print_list(head_stack_b);

	ft_push_a(&head_stack_b, &head_stack_a);	
	
	//IMPRESION
	printf("stack a\n");
	ft_print_list(head_stack_a);
	printf("stack b\n");
	ft_print_list(head_stack_b);


	
//	tmp = head_stack_a;
	return (0);
}
