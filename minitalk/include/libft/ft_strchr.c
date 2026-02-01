/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 21:48:46 by evazquez          #+#    #+#             */
/*   Updated: 2023/03/01 23:35:07 by evazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	int				flag;
	unsigned char	uc;
	unsigned char	*us;

	i = 0;
	flag = 0;
	uc = (unsigned char)c;
	us = (unsigned char *)s;
	while (us[i])
	{
		if (us[i] == uc)
			return ((char *)&s[i]);
		i++;
	}
	if (us[i] == uc)
		return ((char *)&s[i]);
	if (uc < 0 || uc > 127)
		return ((char *)&s[0]);
	return (NULL);
}
