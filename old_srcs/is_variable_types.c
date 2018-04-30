/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variable_types.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 13:26:40 by eliu              #+#    #+#             */
/*   Updated: 2018/04/21 15:50:36 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

bool	is_char_type(char f, t_printf *conversions)
{
	if (is_c_conversion(f, conversions))
	{
		return (true);
	}
	if (is_w_char_conversion(f, conversions))
	{
		return (true);
	}
	if (is_s_conversion(f, conversions))
	{
		return (true);
	}
	if (is_w_string_conversion(f, conversions))
	{
		return (true);
	}
	return (false);
}

bool	is_num_type(char f, t_printf *conversions)
{
	if (is_base_ten(f, conversions))
	{
		return (true);
	}
	if (is_not_base_ten(f, conversions))
	{
		return (true);
	}
	return (false);
}
