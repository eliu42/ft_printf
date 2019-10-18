/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_field_width.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/27 17:33:24 by eliu              #+#    #+#             */
/*   Updated: 2018/04/27 17:53:46 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

char	*store_field_width(char *format, t_printf *conversions)
{
	if (is_digit(*format) && conversions->field_width->exists == false)
	{
		conversions->field_width->exists = true;
		if ((*format == '0'))
		{
			conversions->zero = true;
			format++;
		}
		while (is_digit(*format))
		{
			conversions->field_width->final_width *= 10;
			conversions->field_width->final_width += (*format) - '0';
			format++;
		}
	}
	ft_putnbr(conversions->field_width->final_width);
	return (format);
}
