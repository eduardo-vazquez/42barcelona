/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_errors_0.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:09:06 by evazquez          #+#    #+#             */
/*   Updated: 2023/10/09 17:56:36 by evazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft/libft.h"
#include "../include/push_swap.h"

int	ft_is_only_numbers(int argc, char** argv)
{
	int	num_bol;
	int i;
	int	j;

	num_bol = 1;
	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
		{
			if (!ft_isdigit(argv[j][i]) \
					&& argv[j][i] != ' ' \
					&& argv[j][i] != '+' \
					&& argv[j][i] != '-')
				return (0);
			i++;
		}
		j++;	
	}	
	return (num_bol);
}

int	ft_is_bigger_then_integer(long valor)
{
	return valor > (long)INT_MAX;
}

int ft_is_wrong(int argc, char** argv)
{
	int	wrong;

	wrong = 0;
	if (!(ft_is_only_numbers(argc, argv)))
		return (1);
	return (wrong);
}
