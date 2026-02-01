/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 18:35:40 by evazquez          #+#    #+#             */
/*   Updated: 2023/01/26 21:11:00 by evazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*p_dst;
	unsigned const char	*p_src;

	if (dst < src)
		return (ft_memcpy(dst, src, len));
	p_dst = (unsigned char *)dst;
	p_src = (unsigned const char *)src;
	if (!len || p_dst == p_src)
		return (dst);
	while (len--)
		p_dst[len] = p_src[len];
	return (p_dst);
}
