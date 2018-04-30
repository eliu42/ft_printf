/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_z_mod.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 20:10:37 by eliu              #+#    #+#             */
/*   Updated: 2018/04/20 20:53:09 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

bool	is_z_mod(char f, t_printf *conversions)
{
	if (f == 'z')
	{
		conversions->mod->z = true;
		return (true);
	}
	return (false);
}
