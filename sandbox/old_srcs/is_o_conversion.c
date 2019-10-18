/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_o_conversion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 14:49:54 by eliu              #+#    #+#             */
/*   Updated: 2018/04/21 14:50:45 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

bool	is_o_conversion(char f, t_printf *conversions)
{
	if (f == 'o')
	{
		conversions->o = true;
		return (true);
	}
	return (false);
}
