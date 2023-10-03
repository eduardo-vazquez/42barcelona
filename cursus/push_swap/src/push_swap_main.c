/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:35:43 by evazquez          #+#    #+#             */
/*   Updated: 2023/10/03 19:29:26 by evazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft/libft.h"
#include "../include/push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	node *stacks[2];

	if (argc < 2)
		return (-1);
	stacks[0] = (node *)malloc(sizeof(node));
	stacks[1] = (node *)malloc(sizeof(node));
	ft_load_nodes(stacks[0], argv, argc);

	//ELIMINAR##################################desde aqui
	ft_init_node(stacks[1], 99, 99, NULL);
	
	//IMPRESION
	printf("stack a\n");
	ft_print_list(stacks[0]);
	printf("stack b\n");
	ft_print_list(stacks[1]);
	printf("\n");

	ft_pb(stacks);
	ft_rra(stacks);
	//IMPRESION
	printf("stack a\n");
	ft_print_list(stacks[0]);
	printf("stack b\n");
	ft_print_list(stacks[1]);
	
	return (0);
}
