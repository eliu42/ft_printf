/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_minus_flag.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 20:20:55 by eliu              #+#    #+#             */
/*   Updated: 2018/04/20 20:42:39 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

bool	is_minus_flag(char f, t_printf *conversions)
{
	if (f == '-')
	{
		conversions->flag->minus = true;
		return (true);
	}
	return (false);
}
