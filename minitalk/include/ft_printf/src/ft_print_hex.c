/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 01:17:59 by evazquez          #+#    #+#             */
/*   Updated: 2023/08/23 17:29:46 by evazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_print_hex(unsigned int n, char x)
{
	int		num;
	int		i;
	char	*hex_digits;
	int		tmp;

	hex_digits = (char *)malloc(16 * sizeof(char));
	if (hex_digits == NULL)
		return (-1);
	i = 0;
	num = 0;
	i = ft_load_hex(n, x, hex_digits);
	while (i >= 0)
	{
		tmp = write(1, &hex_digits[i--], 1);
		if (tmp < 1)
		{
			free(hex_digits);
			return (-1);
		}
		num += tmp;
	}
	free(hex_digits);
	return (num);
}

int	ft_load_hex(unsigned int n, char x, char *hex_digits)
{
	char	*base;
	int		i;

	i = 0;
	base = "0123456789abcdef";
	if (x == 'X')
		base = "0123456789ABCDEF";
	if (n == 0)
	{
		hex_digits[0] = '0';
		i = 1;
	}
	else
	{
		while (n > 0)
		{
			hex_digits[i++] = base[n % 16];
			n /= 16;
		}
	}
	i--;
	return (i);
}
