/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 21:58:11 by eliu              #+#    #+#             */
/*   Updated: 2018/04/12 09:04:43 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft_header.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	i;
	size_t	len;

	i = -1;
	len = ft_strlen(src) + 1;
	while (++i < len)
		dst[i] = src[i];
	return (dst);
}
