/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cinstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 16:26:48 by eliu              #+#    #+#             */
/*   Updated: 2018/04/12 16:29:07 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft_header.h"

int		ft_cinstr(char *str, char c)
{
	if (str == NULL)
		return (ft_error("cinstr string is null"));
	while (*str)
	{
		if (c == *str)
			return (0);
		str++;
	}
	return (1);
}
