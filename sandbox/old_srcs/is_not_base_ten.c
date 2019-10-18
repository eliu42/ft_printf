/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_not_base_ten.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 14:20:31 by eliu              #+#    #+#             */
/*   Updated: 2018/04/21 18:18:49 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

bool	is_not_base_ten(char f, t_printf *conversions)
{
	if (is_o_conversion(f, conversions))
	{
		return (true);
	}
	if (is_o_long_conversion(f, conversions))
	{
		return (true);
	}
	if (is_x_conversion(f, conversions))
	{
		return (true);
	}
	if (is_x_big_conversion(f, conversions))
	{
		return (true);
	}
	if (is_p_conversion(f, conversions))
	{
		return (true);
	}
	return (false);
}
