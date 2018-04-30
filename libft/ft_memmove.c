/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 23:29:17 by eliu              #+#    #+#             */
/*   Updated: 2018/04/12 09:07:26 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft_header.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	if (src < dst)
		return (ft_memcpy_bwd(dst, src, len));
	return (dst);
}
