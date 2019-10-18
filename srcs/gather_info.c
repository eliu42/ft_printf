/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gather_info.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 12:09:17 by eliu              #+#    #+#             */
/*   Updated: 2019/10/17 16:17:29 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

t_printf	*find_store_flags(t_printf *info, const char *fmt)
{
	if (*fmt == '#')
		info->flags->hash = 1;
	else if (*fmt == '0')
		info->flags->zero = 1;
	else if (*fmt == '-')
		info->flags->minus = 1;
	else if (*fmt == '+')
		info->flags->plus = 1;
	else if (*fmt == ' ')
		info->flags->space = 1;
	return (info);
}

t_printf	*find_store_mods(t_printf *info, const char *fmt)
{
	if (*fmt++ == 'l')
		if (*fmt == 'l')
			info->mod->ll = 1;
		else
			info->mod->l = 1;
	else if (*fmt++ == 'h')
	{
		if (*fmt == 'h')
			info->mod->hh = 1;
		else
			info->mod->h = 1;
	}
	return (info);
}
