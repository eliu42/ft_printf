/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_ll_mod.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 20:50:57 by eliu              #+#    #+#             */
/*   Updated: 2018/04/20 20:52:36 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

bool	is_ll_mod(char f, t_printf *conversions)
{
	if (f == 'l')
	{
		if (conversions->mod->l == true)
		{
			conversions->mod->l = false;
			conversions->mod->double_l = true;
			return (true);
		}
	}
	return (false);
}
