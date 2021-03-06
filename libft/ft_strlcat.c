/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 21:10:41 by eliu              #+#    #+#             */
/*   Updated: 2018/04/12 09:08:18 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft_header.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	j = ft_strlen(dst);
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size < dst_len + 1)
		return (src_len + size);
	else if (size > dst_len + 1)
	{
		while (j < size - 1)
			*(dst + j++) = *(src + i++);
		*(dst + j) = '\0';
	}
	return (dst_len + src_len);
}
