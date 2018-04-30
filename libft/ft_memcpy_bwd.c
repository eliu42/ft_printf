/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_bwd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 23:42:40 by eliu              #+#    #+#             */
/*   Updated: 2018/04/12 09:07:43 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft_header.h"

void	*ft_memcpy_bwd(void *dst, const void *src, size_t len)
{
	unsigned char *source;
	unsigned char *dest;

	if (src == dst | len == 0)
		return (dst);
	source = (unsigned char*)src;
	dest = (unsigned char*)dst;
	while (len--)
		dest[len] = source[len];
	return (dst);
}
