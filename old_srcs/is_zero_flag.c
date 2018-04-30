/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_zero_flag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 20:54:27 by eliu              #+#    #+#             */
/*   Updated: 2018/04/20 20:55:17 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

bool	is_zero_flag(char f, t_printf *conversions)
{
	if (f == '0')
	{
		conversions->flag->zero = true;
		return (true);
	}
	return (false);
}
