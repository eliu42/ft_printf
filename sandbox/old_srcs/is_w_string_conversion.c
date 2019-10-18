/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_w_string.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 14:14:42 by eliu              #+#    #+#             */
/*   Updated: 2018/04/21 18:17:15 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

bool	is_w_string_conversion(char f, t_printf *conversions)
{
	if (f == '?')
	{
		conversions->w_string = true;
		return (true);
	}
	return (false);
}
