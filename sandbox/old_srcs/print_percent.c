/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_percent.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 20:17:01 by eliu              #+#    #+#             */
/*   Updated: 2018/04/27 19:13:29 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

static void	find_final_flag(t_flag flag)
{

}

static void	percent_conversion(t_flag flag, t_mod mod, va_list va_args)
{
	
}

/*
**	Before I printf the final conversion, I need to do any modifiers (which
**	don't exist for '%'. Also, I don't need to do a va_arg grab because
**	there is no parameter for the '%' conversion. However, I do need to
**	Manage the flags that are for the '%'.
*/

long		print_percent(char f, t_printf *conversions, va_list va_args)
{

	if (f == '%')
	{
		if (conversions->flags->zero)
			conversions->pad = 48;
		if (conversions->flags->minus)
			conversions->pad = 32;
	}
}
