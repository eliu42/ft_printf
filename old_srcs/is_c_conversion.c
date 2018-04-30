/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 13:49:51 by eliu              #+#    #+#             */
/*   Updated: 2018/04/21 15:51:48 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

bool	is_c_conversion(char f, t_printf *conversions)
{
	if (f == 'c')
	{
		conversions->c = true;
		return (true);
	}
	return (false);
}
