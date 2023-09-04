/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 07:59:26 by evazquez          #+#    #+#             */
/*   Updated: 2023/08/23 12:54:04 by evazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h" 

int	ft_print_s(char *ptr)
{
	int	n;

	n = 0;
	if (!ptr)
		return (write(1, "(null)", 6));
	while (ptr[n])
	{
		if (write(1, &ptr[n], 1) == -1)
			return (-1);
		n++;
	}
	return (n);
}
