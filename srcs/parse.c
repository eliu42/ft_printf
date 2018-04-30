/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/28 15:59:46 by eliu              #+#    #+#             */
/*   Updated: 2018/04/28 16:40:57 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

static bool		is_modifier(char f, t_printf *conversions)
{
	if (is_h_mod(f, conversions))
	{
		return (true);
	}
	if (is_hh_mod(f, conversions))
	{
		return (true);
	}
	if (is_l_mod(f, conversions))
	{
		return (true);
	}
	if (is_ll_mod(f, conversions))
	{
		return (true);
	}
	if (is_j_mod(f, conversions))
	{
		return (true);
	}
	if (is_z_mod(f, conversions))
	{
		return (true);
	}
	return (false);
}

static bool		is_flag(char f, t_printf *conversions)
{
	if (is_hash_flag(f, conversions))
	{
		return (true);
	}
	if (is_minus_flag(f, conversions))
	{
		return (true);
	}
	if (is_zero_flag(f, conversions))
	{
		return (true);
	}
	if (is_plus_flag(f, conversions))
	{
		return (true);
	}
	if (is_space_flag(f, conversions))
	{
		return (true);
	}
	if (is_precision_flag(f, conversions))
	{
		return (true);
	}
	return (false);
}

static int		is_conversion(char f)
{
	if (f == '%' || f == 'c' || f == 'C' || f == 's' || f == 'S' || \
		f == 'd' || f == 'D' || f == 'i' || f == 'o' || f == 'O' || \
		f == 'u' || f == 'x' || f == 'X' || f == 'p' || f == 'n')
		return (0);
	return (1);
}

int				parse(char *format, t_printf *conversions)
{
	if (!is_conversion(*format))
	{
		conversions->conversion = (*format);
		return (0);
	}
	is_modifier(*format, conversions);
	is_flag(*format, conversions);
	return (1);
}
