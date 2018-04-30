/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:55:05 by eliu              #+#    #+#             */
/*   Updated: 2018/04/12 09:03:55 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft_header.h"

/*
** check later if (n == 0 || dst = src) if true,  return (s1)
**  also check if we need to assign a second pointer (*source) or can use src
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *dest;
	unsigned char *source;

	if (dst == src | n == 0)
		return (dst);
	dest = (unsigned char*)dst;
	source = (unsigned char*)src;
	while (n--)
		*dest++ = *source++;
	return (dst);
}
