/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 16:49:55 by eliu              #+#    #+#             */
/*   Updated: 2018/04/19 15:26:30 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

/*
**	Seperates conversions into strings/chars, and number types (int, long, etc).
*/


int		is_conversion(t_printf conflag, char c)
{
/*	if (c == '%')
		;
	else if (is_string(format))
	{
		find_alpha(format);
	}
	else if (is_number(format))
	{
		find_bytes(format);
		find_sign(format);
		find_base(format);
	}
*/	
}

/*
**	Twenty lines.
*/

int		is_flag(t_printf conflag, char c)
{
	if (c == '#')
		;
	else if (c == '+')
		;
	else if (c == '-')
		;
	else if (c == ' ')
		;
//	else if (c == 'hh')
//		;
	else if (c == 'h')
		;
	else if (c == 'l')
		;
//	else if (c == 'll')
//		;
	else if (c == 'j')
		;
	else if (c == 'z')
		;
}

int		end_conversion(t_printf conversion, char c)
{
	if (!is_conversion(c))
	{
		store_conversion();
		return (1);
	}
	else if (!is_flag(c))
	{
		store_flag();
		return (0);
	}
	else if (!is_modifier(c))
	{
		store_modifier();
		return (0);
	}
	return (1);
}

/*
**	Format contains all of the conversions symbols '%' and flags eg. sdoiu.
**	The elipse contains all of the subsequent variables to be converted by
*/

int		ft_printf(const char * restrict format, ...)
{
	char		var;
	va_list		ap;
	u_printf	conversion;

	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			// search for a conversion so i can grab the next va_arg and 'convert'
			// for now and print out onto screen.
			while (!end_conversion(conversion, *format))
			{
				format++;
			}

		}
		ft_putchar(*format);
		format++;
	}
	va_end(ap);
	return (0); // if everything was gucci
}
