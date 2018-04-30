/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_hh_mod.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 20:42:50 by eliu              #+#    #+#             */
/*   Updated: 2018/04/20 20:49:59 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

bool	is_hh_mod(char f, t_printf *conversions)
{
	if (f == 'h')
	{
		if (conversions->mod->h == true)
		{
			conversions->mod->h = false;
			conversions->mod->double_h = true;
			return (true);
		}
	}
	return (false);
}
