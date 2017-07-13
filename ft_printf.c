/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 16:20:54 by eliu              #+#    #+#             */
/*   Updated: 2017/07/12 23:34:26 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* specfiers are the actual variable type, while flags are modifiers
 * to the variables themselves
*/


static	void	initiate_flags(t_flags *flags)
{
	flags->bytes_printed = 0;
	flags->alternate = 0;
	flags->zero_padding = 0;
	flags->left_justified = 0;
	flags->space = 0;
	flags->sighned = 0;
	flags->field_width = 0;
	flags->precision = 0;
	flags->p_modifier = 0;
}

int				ft_printf(const char *str, ...)
{
	int			i;
	t_flags		flags;
	va_list		valist;

	i = -1;
	va_start(valist, str);
	initiate_flags(&flags);
	// parsing through the string
	while (str[++i])
		if (str[i] == '%')
			set_foundation(&flags, str, &valist);	
		//check for flags, or conversions
		
		//why does this condition need an if statement? why does
		// not print in certain cases?
		else if (flags.bytes_printed++ >= 0)
			write(1, str + i, 1);
	va_end(valist);
	return (flags.bytes_printed);
}
