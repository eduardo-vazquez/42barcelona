/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_errors_0.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:09:06 by evazquez          #+#    #+#             */
/*   Updated: 2023/10/18 11:19:38 by evazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int ft_is_wrong(int argc, char** argv)
{
	int		i;

	i = 0;
	if (!(ft_is_only_numbers(argc, argv)))
		return (1);
	if (ft_is_bigger_or_smaller_then_integer(argc, argv))
		return (1);
	if (ft_are_there_doubles(argc, argv))
		return (1);
	return (0);
}

int	ft_is_only_numbers(int argc, char** argv)
{
	int i;
	int	j;

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
	return (1);
}

int	ft_is_bigger_or_smaller_then_integer(int argc, char** argv)
{
	int 	i;
	char**	str_split;

	i = 0;
	if (argc == 2)
	{
		str_split = ft_split(argv[1], ' ');	
		while (str_split[i])
		{
			if (ft_atolong(str_split[i]) > INT_MAX ||\
				   	ft_atolong(str_split[i]) < INT_MIN)
				return (1); 
			i++;
		}
	}
	i = 1;
	while (argv[i])
	{
		if (ft_atolong(argv[i]) > INT_MAX || \
				ft_atolong(argv[i]) < INT_MIN)
			return (1);
		i++;
	}
	return (0);
}

int	ft_are_there_doubles(int argc, char **argv)
{ 
	int i;
	int j;
	char** str_split;

	i = 0;
	j = 0;
	if (argc > 2)
	{
		while (argv[i])
		{
			j = i + 1;
			while (argv[j])
				if (ft_atoi(argv[j++]) == ft_atoi(argv[i]))
					return (1);
			i++;
		}
	}
	str_split = ft_split(argv[1], ' ');
	while (str_split[i])	
	{
		j  = i + 1;
		while (str_split[j])
			if (ft_atoi(str_split[i]) == ft_atoi(str_split[j++]))
				return (1);
		i++;
	}
	return (0);
}
