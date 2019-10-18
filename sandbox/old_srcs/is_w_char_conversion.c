/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_w_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 14:13:07 by eliu              #+#    #+#             */
/*   Updated: 2018/04/21 15:52:47 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

bool	is_w_char_conversion(char f, t_printf *conversions)
{
	if (f == '?')
	{
		conversions->w_char = true;
		return (true);
	}
	return (false);
}
