/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/28 14:32:16 by eliu              #+#    #+#             */
/*   Updated: 2018/04/30 00:12:01 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

/*
**	Remember that code is not static, solid to the point that it is
**	unbreakable. However it is instead flowing like water flows in a stream,
**	or electricity through its' circuits. It must be adaptable; so that when
**	you revisit it again you can remold it with ease, and that its shape
**	is ever changing. Although you will not be able to get it to the point
**	where you want it right now, when you come back it will be here for you.
*/


/*
**	I need to call va_arg inside after I find out what the conversions are.
**	Format = conversions and everything else stored inside printf.
**	Conversions are the struct that hold and determine which flag is which.
**	Va_args are the second half of the printf parameters, the values to be
**	converted.
*/



int		ft_printf(const char * restrict format, ...)
{
	t_dispatch g_dispatcher[] =
{
	{'c', &print_c},
	{'C', &print_c_wide},
	{'s', &print_s},
	{'s', &print_s_wide},
	{'d', &print_d},
	{'D', &print_d_long},
	{'i', &print_i},
	{'o', &print_o},
	{'O', &print_o_big},
	{'u', &print_u},
	{'x', &print_x},
	{'X', &print_x_big},
	{'p', &print_p},
	{'n', &print_n},
	{'%', &print_percent}
};

t_append_flag g_flags[] =
{
	{'#', &append_hash},
	{' ', &append_space},
	{'+', &append_plus},
	{'0', &append_zero},
	{'-', &append_minus},
	{'.', &append_precision}
};
	int			i;
	va_list		va_args;
	t_printf	*conversions;
	
	i = 0;
	va_start(va_args, format);
	conversions = ft_memalloc(sizeof(conversions));
	while (format[i])
	{
		zero_struct(conversions);
		if (format[i] == '%')
		{
			while (parse((char*)format, conversions))
			{
				while (ft_isdigit(*format))
				{
					conversions->field_width *= 10;
					conversions->field_width += (*format) - '0';
					i++;
				}
				i++;
			}
//			Current work area


			g_dispatcher[conversion_index(*format)].convert(conversions, va_args);
			g_flags[3].append(conversions, "%", 1);

		}
		ft_putchar(format[i]);
		i++;
	}
	va_end(va_args);
	return (0);
}
