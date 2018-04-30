/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_l_mod.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 20:03:36 by eliu              #+#    #+#             */
/*   Updated: 2018/04/20 20:10:29 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

bool	is_l_mod(char f, t_printf *conversions)
{
	if (f == 'l')
	{
		conversions->mod->l = true;
		return (true);
	}
	return (false);
}
