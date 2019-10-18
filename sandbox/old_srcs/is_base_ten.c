/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_base_ten.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 14:15:40 by eliu              #+#    #+#             */
/*   Updated: 2018/04/21 14:24:51 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

bool	is_base_ten(char f, t_printf *conversions)
{
	if (is_d_conversion(f, conversions))
	{
		return (true);
	}
	if (is_d_long_conversion(f, conversions))
	{
		return (true);
	}
	if (is_i_conversion(f, conversions))
	{
		return (true);
	}
	if (is_u_conversion(f, conversions))
	{
		return (true);
	}
	if (is_u_long_conversion(f, conversions))
	{
		return (true);
	}
	return (false);
}
