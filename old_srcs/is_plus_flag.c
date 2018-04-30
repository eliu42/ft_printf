/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_plus_flag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 20:55:36 by eliu              #+#    #+#             */
/*   Updated: 2018/04/20 20:56:13 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

bool	is_plus_flag(char f, t_printf *conversions)
{
	if (f == '+')
	{
		conversions->flag->plus = true;
		return (true);
	}
	return (false);
}
