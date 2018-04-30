/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_u_long_conversion.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 14:44:57 by eliu              #+#    #+#             */
/*   Updated: 2018/04/21 14:49:41 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

bool	is_u_long_conversion(char f, t_printf *conversions)
{
	if (f == 'U')
	{
		conversions->u_long = true;
		return (true);
	}
	return (false);
}
