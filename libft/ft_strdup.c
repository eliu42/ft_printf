/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <eliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 23:39:38 by eliu              #+#    #+#             */
/*   Updated: 2018/04/12 09:04:26 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft_header.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;

	i = -1;
	if (!(str = (char*)malloc(sizeof(char) * ft_strlen(s1) + 1)))
		return (NULL);
	while (s1[++i])
		str[i] = s1[i];
	str[i] = '\0';
	return (str);
}
