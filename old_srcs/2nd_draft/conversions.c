/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 15:43:26 by eliu              #+#    #+#             */
/*   Updated: 2018/04/19 16:55:43 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	*casting(t_printf conversions, char c)
{
	if (is_char_type(c))
	{
		return (char_type(c));
	}
	if (is_num_type(c))
	{
		return (num_type(c));
	}
	return (NULL);
}

/*
**	Return 0 if % is not ended by a conversion, returns 1 if
**	a conversion is found.
*/

int		is_conversion(t_printf conversions, char c)
{
	if (is_percent(conversions, c))
	{
		return (1);
	}
	if (is_char(conversions, c))
	{
		return (1);
	}
	else if (is_num(conversions, c))
	{
		return (1);
	}
	else if (is_flag(conversions, c))
	{
		return (0);
	}
	else if (is_modifier(conversions, c))
	{
		return (0);
	}
	return (0);
}
