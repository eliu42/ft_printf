/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 01:37:12 by eliu              #+#    #+#             */
/*   Updated: 2018/04/12 09:10:38 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft_header.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (s == NULL)
		return (NULL);
	str = ft_strnew(len);
	if (!str)
		return (0);
	ft_strncpy(str, s + start, len);
	str[len] = '\0';
	return (str);
}
