/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_conversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 15:22:33 by eliu              #+#    #+#             */
/*   Updated: 2018/04/28 14:24:34 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

/*
long	print_char_type(char f, t_printf *conversions)
{
	if (print_c_conversion(f, conversions))
	{
		return (true);
	}
	if (print_w_char_conversion(f, conversions))
	{
		return (true);
	}
	if (print_s_conversion(f, conversions))
	{
		return (true);
	}
	if (print_w_string_conversion(f, conversions))
	{
		return (true);
	}
	return (false);
}

long	print_num_type(char f, t_printf *conversions)
{
	if (print_base_ten(f, conversions))
	{
		return (true);
	}
	if (print_not_base_ten(f, conversions))
	{
		return (true);
	}
	return (false);
}

long	print_variable_type(char *format, t_printf *conversions, va_list va_args)
{
	if (print_percent(f, conversions))
	{
		return (true);
	}
	if (print_char_type(f, conversions))
	{
		return (true);
	}
	if (print_num_type(f, conversions))
	{
		return (true);
	}
	return (false);
}
*/






/*
**	After storing all conversions inside the struct, the only thing left to do
**	is to grab the conversion values using va_arg and store them in the final
**	variable type. Then find any flags and append them afterwards.
*/

long	print(char *format, t_printf *conversions, va_list va_args)
{
	print_variable_type(format, conversions, va_args);

	format = NULL;
	conversions = NULL;
	va_args = NULL;
	return (0);
}
