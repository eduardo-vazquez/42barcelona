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

#include "../include/push_swap.h"

int ft_is_wrong(int argc, char** argv)
{
	char 	**str_split;
	int		i;

	i = 0;
	if (!(ft_is_only_numbers(argc, argv)))
		return (1);
	if (argc == 2)
	{
		str_split = ft_split(argv[1], ' ');	
		while (str_split[i])
		{
			if (ft_atolong(str_split[i]) > INT_MAX)
				return (1);
			if (ft_atolong(str_split[i]) < INT_MIN)
				return (1); 
			i++;
		}
	}
	if (argc > 2)
	{
		i = 1;
		while (argv[i])
		{
			if (ft_atolong(argv[i]) > INT_MAX)
				return (1);
			if (ft_atolong(argv[i]) < INT_MIN)
				return (1);
			i++;
		}
	}
	if (ft_are_there_doubles(argc, argv))
		return (1);
	return (0);
}

long	ft_atolong(const char *str)
{
	long	i;
	long	j;

	i = 0;
	j = 1;
	while (*str == ' ' || *str == '\r' || *str == '\t'\
			|| *str == '\n' || *str == '\v' || *str == '\f')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			j *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		i = i * 10 + *str - '0';
		str++;
	}
	return (i * j);
}


int	ft_is_bigger_then_integer(long valor)
{
	return valor > (long)INT_MAX;
}


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
////////// trabajaar en esto//////
int	ft_are_there_doubles(int argc, char **argv)
{
	int i;
	int j;
	int num;

	i = 0;
	j = 0;
	num = 0;
	printf("chequedo de dobles \n");
	if (argc > 2)
	{
		while (argv[i])
		{
			num = ft_atoi(argv[i]);
			while (argv[j])
			{
				j = i + 1;
				if (ft_atoi(argv[j]) == num)
				{
					printf("errroooori\n");
					return (1);
				}
				j++;
			}
			i++;
		}
	}
	(void) argc;
	(void) argv;
	return(0);
}
