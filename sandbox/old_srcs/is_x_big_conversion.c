/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_x_big_conversions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 14:52:49 by eliu              #+#    #+#             */
/*   Updated: 2018/04/21 14:53:41 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

bool	is_x_big_conversion(char f, t_printf *conversions)
{
	if (f == 'X')
	{
		conversions->x_big = true;
		return (true);
	}
	return (false);
}
