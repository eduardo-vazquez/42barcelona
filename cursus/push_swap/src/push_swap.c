/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:15:43 by evazquez          #+#    #+#             */
/*   Updated: 2023/09/08 16:56:58 by evazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc < 2)
		printf("Error\n");
	while (i < argc)
		printf("numero %s\n", argv[i++]);
	printf("hola mundo\n");
	return (0);
}
