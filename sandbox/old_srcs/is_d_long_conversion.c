/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_d_long_conversion.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 14:39:16 by eliu              #+#    #+#             */
/*   Updated: 2018/04/22 14:53:36 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

bool	is_d_long_conversion(char f, t_printf *conversions)
{
	if (f == 'D')
	{
		conversions->d_long = true;
		return (true);
	}
	return (false);
}
