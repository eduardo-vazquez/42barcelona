/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:51:55 by evazquez          #+#    #+#             */
/*   Updated: 2023/08/23 17:29:50 by evazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h" 

int	ft_arg_type(char const c, va_list list)
{
	int	n;

	n = 0;
	if (c == 'c')
		n = ft_print_c(va_arg(list, int));
	else if (c == 's')
		n = ft_print_s(va_arg(list, char *));
	else if (c == 'p')
	{
		n = write(1, "0x", 2);
		if (n < 2)
			return (-1);
		n += ft_print_p(va_arg(list, unsigned long long));
	}
	else if (c == 'x' || c == 'X')
		n = ft_print_hex(va_arg(list, int), c);
	else if (c == 'i' || c == 'd')
		n = ft_print_num(va_arg(list, int));
	else if (c == 'u')
		n = ft_print_num(va_arg(list, unsigned int));
	else if (c == '%')
		n = write(1, "%", 1);
	return (n);
}

int	ft_iter(char const *arg, va_list list, int n, int aux_n)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if (arg[i] == '%')
		{
			i++;
			aux_n = ft_arg_type(arg[i], list);
			if (aux_n == -1)
				return (-1);
			n += aux_n;
		}
		else
		{
			aux_n = write(1, &arg[i], 1);
			if (aux_n == -1)
				return (-1);
			n += aux_n;
		}
		i++;
	}
	return (n);
}

int	ft_printf(char const *arg, ...)
{
	va_list	list;
	int		n;
	int		aux_n;

	n = 0;
	aux_n = 0;
	va_start(list, arg);
	n = ft_iter(arg, list, n, aux_n);
	va_end(list);
	return (n);
}
