/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_d_conversion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 14:28:39 by eliu              #+#    #+#             */
/*   Updated: 2018/04/21 14:39:06 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

bool	is_d_conversion(char f, t_printf *conversions)
{
	if (f == 'd')
	{
		conversions->d = true;
		return (true);
	}
	return (false);
}
