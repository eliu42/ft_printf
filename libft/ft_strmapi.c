/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 00:31:00 by eliu              #+#    #+#             */
/*   Updated: 2018/04/12 09:08:40 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft_header.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	size_t			index;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	str = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	index = 0;
	while (s[i])
	{
		str[i] = f(index, s[i]);
		i++;
		index++;
	}
	str[i] = '\0';
	return (str);
}
