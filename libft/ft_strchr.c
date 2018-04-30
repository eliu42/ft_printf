/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 21:12:38 by eliu              #+#    #+#             */
/*   Updated: 2018/04/12 09:05:26 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft_header.h"

char	*ft_strchr(const char *s, int c)
{
	char *str;

	str = (char*)s;
	while (*str)
	{
		if (*str == (char)c)
			return (str);
		str++;
	}
	if (c == '\0' && *str == '\0')
		return (str);
	return (NULL);
}
