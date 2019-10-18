/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_j_mod.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 20:08:52 by eliu              #+#    #+#             */
/*   Updated: 2018/04/20 20:09:52 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

bool	is_j_mod(char f, t_printf *conversions)
{
	if (f == 'j')
	{
		conversions->mod->j = true;
		return (true);
	}
	return (false);
}
