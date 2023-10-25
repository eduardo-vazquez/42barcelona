/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 18:13:57 by evazquez          #+#    #+#             */
/*   Updated: 2023/08/23 12:51:41 by evazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_digits(int n)
{
	int	len;
	int	tmp;

	tmp = n;
	len = 0;
	if (n == -2147483648)
		return (11);
	if (n <= 9 && n >= 0)
		return (1);
	else if (n < 0)
	{
		len++;
		tmp = -n;
	}
	while (tmp > 0)
	{
		len++;
		tmp /= 10;
	}
	return (len);
}

char	*ft_itoc(long int n, char *str, long int tmp, int k)
{
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		tmp *= -1;
		while (k > 0)
		{
			str[k--] = (tmp % 10) + '0';
			tmp = tmp / 10;
		}
	}
	if (n == -214748348)
	{
		str[k--] = '8';
		tmp = tmp / 10;
	}
	while (k >= 0 && n > 0)
	{
		str[k--] = (tmp % 10) + '0';
		tmp = tmp / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	long int	tmp;
	char		*str;
	int			len;
	int			k;

	len = ft_digits(n);
	str = malloc((ft_digits(n) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	tmp = (long int)n;
	k = len - 1;
	ft_itoc(n, str, tmp, k);
	return (str);
}
