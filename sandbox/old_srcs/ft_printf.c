/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 13:48:54 by eliu              #+#    #+#             */
/*   Updated: 2018/04/21 21:02:37 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

/*
**	I need to call va_arg inside after I find out what the conversions are.
**	Format = conversions and everything else stored inside printf.
**	Conversions are the struct that hold and determine which flag is which.
**	Va_args are the second half of the printf parameters, the values to be
**	converted.
*/

int		ft_printf(const char * restrict format, ...)
{
	va_list		va_args;
	t_printf	*conversions;
	
	va_start(va_args, format);
	conversions = ft_memalloc(sizeof(conversions));
	while (*format)
	{
		zero_struct(conversions);
		if (*format == '%')
		{
			while (parse((char*)format, conversions, va_args))
				format++;
/*			while (!is_conversion(conversions, *format))
				format++;
			temp = casting(conversions, *format);
			va_arg(va_args, temp);
*/			// take the inputted variable size and the va_arg to print out.
		}
		ft_putchar(*format);
		format++;
	}
	va_end(va_args);
	return (0);
}
