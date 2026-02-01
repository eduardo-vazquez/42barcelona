/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 01:14:24 by evazquez          #+#    #+#             */
/*   Updated: 2023/08/23 12:53:04 by evazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putchar(long int c)
{
	return (write(1, &c, 1));
}

int	ft_print_num(long int n)
{
	int		num;

	num = 0;
	if (n < -2147483647)
		return (ft_print_s("-2147483648"));
	if (n < 0)
	{
		if (ft_putchar('-') == -1)
			return (-1);
		n = n * -1;
		num++;
	}
	if (n > 9)
	{
		num += ft_print_num(n / 10);
		if (num == -1)
			return (-1);
	}
	if (ft_putchar((n % 10) + '0') == -1)
		return (-1);
	num++;
	return (num);
}
