/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_i_conversions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 14:42:14 by eliu              #+#    #+#             */
/*   Updated: 2018/04/21 14:43:04 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

bool	is_i_conversion(char f, t_printf *conversions)
{
	if (f == 'i')
	{
		conversions->i = true;
		return (true);
	}
	return (false);
}
