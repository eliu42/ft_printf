/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 21:35:15 by eliu              #+#    #+#             */
/*   Updated: 2018/04/12 09:09:34 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft_header.h"

size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t i;

	i = 0;
	while (s[i] && i < maxlen)
		i++;
	return (i);
}
