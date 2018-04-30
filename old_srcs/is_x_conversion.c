/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_x_conversion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 14:51:43 by eliu              #+#    #+#             */
/*   Updated: 2018/04/21 14:52:39 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

bool	is_x_conversion(char f, t_printf *conversions)
{
	if (f == 'x')
	{
		conversions->x = true;
		return (true);
	}
	return (false);
}
