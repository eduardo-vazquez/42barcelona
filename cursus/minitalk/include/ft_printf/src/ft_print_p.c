/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:29:01 by evazquez          #+#    #+#             */
/*   Updated: 2023/08/23 12:53:35 by evazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_print_p(unsigned long long ptr)
{
	int		num;

	num = 0;
	if (ptr > 15)
	{
		num += ft_print_p(ptr / 16);
		num += ft_print_p(ptr % 16);
	}
	else
		num += write(1, &"0123456789abcdef"[ptr], 1);
	return (num);
}
