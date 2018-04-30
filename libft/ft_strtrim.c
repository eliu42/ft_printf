/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 04:30:28 by eliu              #+#    #+#             */
/*   Updated: 2018/04/12 09:10:49 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft_header.h"

static size_t	ft_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

static size_t	ft_allspace(const char *s)
{
	while (*s)
	{
		if (!ft_space(*s))
			return (0);
		s++;
	}
	return (1);
}

char			*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	len;

	i = 0;
	if (s)
	{
		len = ft_strlen(s) - 1;
		if (ft_allspace(s))
			return (ft_strnew(0));
		while (ft_space(s[i]))
			i++;
		while (ft_space(s[len]))
			len--;
		return (ft_strsub(s, i, len - i + 1));
	}
	return (NULL);
}
