/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:35:43 by evazquez          #+#    #+#             */
/*   Updated: 2023/09/29 19:29:26 by evazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft/libft.h"
#include "../include/push_swap.h"
#include <stdio.h>

void	ft_load_nodes(node **head, char **argv, int argc)
{
	int		i;
	node	*tmp;

	i = 1;
	tmp = *head;
	while (i < argc)
	{
		tmp = ft_create_node(ft_atoi(argv[i++]));
		ft_append_node(head, tmp);
	}
}

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
	node	*tmp; 
	tmp = head_stack_a;
	while (tmp != NULL)
	{
		printf("value: %d, index: %d\n", tmp->value, tmp->index);
		tmp = tmp->next;
	}
	return (0);
}
