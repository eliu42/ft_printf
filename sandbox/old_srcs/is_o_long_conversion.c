/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_o_long_conversion.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 14:50:53 by eliu              #+#    #+#             */
/*   Updated: 2018/04/21 14:51:37 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

bool	is_o_long_conversion(char f, t_printf *conversions)
{
	if (f == 'O')
	{
		conversions->o_long = true;
		return (true);
	}
	return (false);
}
