/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_percent.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/28 16:51:45 by eliu              #+#    #+#             */
/*   Updated: 2018/04/28 22:54:55 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

/*
**	Why am I using a dispatcher for flags? I can add a check statement for 
**	all varaible conversions and see which ones to actually apply for flags.
*/

int		print_percent(t_printf *conversions, va_list va_args)
{
	va_args = NULL;
	if (conversions->field_width)
	{
		if (conversions->flag->zero && !conversions->flag->minus)
			g_flags[3].append(conversions, "%", 1);
		else if (conversions->flag->minus)
			g_flags[4].append(conversions, "%", 1);
	}
//		g_flags[flag_index(conversions->flag)].print(conversions, va_args);
	else
		write(1, "%", 1);
	return (0);
}
