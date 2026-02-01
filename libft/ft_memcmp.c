/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 00:43:37 by evazquez          #+#    #+#             */
/*   Updated: 2023/02/03 22:39:57 by evazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*src;
	unsigned char	*dst;

	src = (unsigned char *)s1;
	dst = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (src[i] == dst[i])
			i++;
		else
			return (src[i] - dst[i]);
	}
	return (0);
}
