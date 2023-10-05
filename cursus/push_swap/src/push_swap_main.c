/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:35:43 by evazquez          #+#    #+#             */
/*   Updated: 2023/10/05 16:02:32 by evazquez         ###   ########.fr       */
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
	if (ft_is_sorted(stacks[0]))
	{
		printf("esta ordenado\n");
		return (0);
	}
	if (argc <= 4)
		ft_small_sort(stacks);
	else
		ft_divided_bubble(stacks);
//		ft_bubble_sort(stacks);
//	else if (argc <= 6)
//		ft_bubble_sort(stacks);
//	else if (argc <= 101)
//		ft_bubble_sort(stacks);
//	else if (argc <= 501)
//		ft_bubble_sort(stacks);
//	else
//		ft_bubble_sort(stacks);
//	ELIMINAR##################################desde aqui
//	IMPRESION
	
//	printf("RESULTADO\n");
//	printf("stack a\n");
//	ft_print_list(stacks[0]);
	if (ft_is_sorted(stacks[0]))
		printf("esta ordenado\n");
//	printf("stack b\n");
//	ft_print_list(stacks[1]);
//	printf("el mas chico: %d\n", ft_smallest_value(stacks[0]));
//	printf("el mas grande: %d\n", ft_largest_value(stacks[0]));
	ft_free_mallocs(stacks);
	return (0);
}


