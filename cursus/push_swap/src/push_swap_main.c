/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:35:43 by evazquez          #+#    #+#             */
/*   Updated: 2023/10/23 23:15:26 by evazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	node *stacks[2];

	if (argc == 1)
		return (-1);
	stacks[0] = (node *)malloc(sizeof(node));
	stacks[1] = NULL;
	if (ft_is_wrong(argc, argv))
	{
 		fprintf(stderr, "Error\n"); 
		return (0);
	}
	ft_load_nodes(stacks[0], argv, argc);
	if (ft_is_sorted(stacks[0]))
		return (0);
	if (ft_count_nodes(stacks[0]) <= 3)
		ft_small_sort(stacks);
	else if (ft_count_nodes(stacks[0]) < 6)
		ft_bubble_sort(stacks);
	else
		ft_quicksort(stacks, 0, ft_count_nodes(stacks[0]) - 1);
//	printf("RESULTADO\n");
//	printf("stack a\n");
//	ft_print_list(stacks[0]);
//	if (ft_is_sorted(stacks[0]))
//		printf("esta ordenado\n");
//	printf("stack b\n");
//	ft_print_list(stacks[1]);
	
	return (0);
}


