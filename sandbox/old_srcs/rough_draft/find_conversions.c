/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 14:52:10 by eliu              #+#    #+#             */
/*   Updated: 2018/04/19 11:03:13 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

int		is_conversion(t_printf conflag, char c)
{
	if (c == '%')
	{
		store_flag();
		return (0);
	}
	else if (!is_alpha(c))
	{
		if (!is_char(c) || !is_string(c))
		{
			if (!is_w_char(c))
				something();
		}
		return (0);
	}
	else if (!is_number(c))
	{
		if (!is_signed(c))
			signed_conversions();
		else if (!is_unsigned(c))
			unsigned_conversion();
		else if (!is_baseten(c))
			no_base_mod();
		else if (!is_not_baseten(c))
			change_base();
	}

}

int		is_modifier(u_printf conversion, char c)
{
	if (c == 'h')
	{
		h++;
		if (h > 2)
		{
			no_mod_on_conversion();
		}
		store_modifier();
	}
	if (c == 'h')
	{

	}
	else if (c == 'l')
	{

	}
	else if (c == 'j')
	{

	}
	else if (c == 'j')
	{

	}
	else if (c == 'z')
	{

	}
	return (1);
}

/*
**	Conversion is only finding the size of the conversion type. Not looking for
**	alphabet or digit because all conversions are dioux (chars).
*/

int		is_conversion(t_printf con, char c)
{
}

int		is_flag(t_printf conflag, char c)
{
	
}
