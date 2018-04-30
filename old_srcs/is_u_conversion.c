/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_u_conversion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 14:43:27 by eliu              #+#    #+#             */
/*   Updated: 2018/04/21 14:44:40 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

bool	is_u_conversion(char f, t_printf *conversions)
{
	if (f == 'u')
	{
		conversions->u = true;
		return (true);
	}
	return (false);
}
