/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 23:27:06 by evazquez          #+#    #+#             */
/*   Updated: 2023/02/03 23:50:24 by evazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*f;

	i = 0;
	f = (unsigned char *)s;
	while (i < n)
	{
		if (f[i] == (unsigned char)c)
			return ((void *)(f + i));
		else
			i++;
	}
	return (NULL);
}
