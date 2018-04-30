/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/28 17:25:11 by eliu              #+#    #+#             */
/*   Updated: 2018/04/28 22:00:13 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

int		conversion_index(char f)
{
	int		i;

	i = 0;
	while (CONVERSIONS[i])
	{
		if (CONVERSIONS[i] == f)
			return (i);
		i++;
	}
		return (-1);
}

int		flag_index(char f)
{
	int		i;

	i = 0;
	while (FLAGS[i])
	{
		if (FLAGS[i] == f)
			return (i);
		i++;
	}
	return (-1);
}
