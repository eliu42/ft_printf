/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_h_mod.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 20:01:02 by eliu              #+#    #+#             */
/*   Updated: 2018/04/20 21:02:59 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

bool	is_h_mod(char f, t_printf *conversions)
{
	if (f == 'h')
	{
		conversions->mod->h = true;
		return (true);
	}
	return (false);
}
