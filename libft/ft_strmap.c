/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 23:37:44 by eliu              #+#    #+#             */
/*   Updated: 2018/04/12 09:08:34 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft_header.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	size_t	i;

	if (s == NULL || f == NULL)
		return (NULL);
	str = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
