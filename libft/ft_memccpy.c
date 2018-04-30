/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 15:25:29 by eliu              #+#    #+#             */
/*   Updated: 2018/04/12 08:51:09 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft_header.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	*ptr2;

	i = -1;
	ptr2 = (unsigned char*)src;
	ptr = (unsigned char*)dst;
	while (++i < n)
	{
		ptr[i] = ptr2[i];
		if (ptr2[i] == (unsigned char)c)
			return (&dst[i + 1]);
	}
	return (NULL);
}
