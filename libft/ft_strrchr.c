/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 21:14:26 by eliu              #+#    #+#             */
/*   Updated: 2018/04/12 09:13:10 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft_header.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return ((char*)&s[len]);
		len--;
	}
	return (NULL);
}
