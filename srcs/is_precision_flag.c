/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_precision_flag.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/28 20:59:34 by eliu              #+#    #+#             */
/*   Updated: 2018/04/28 20:59:36 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

bool	is_precision_flag(char f, t_printf *conversions)
{
	if (f == '.')
	{
		conversions->flag->precision = true;
		return (true);
	}
	return (false);
}
