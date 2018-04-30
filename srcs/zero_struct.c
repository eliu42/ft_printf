/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zero_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/28 14:38:18 by eliu              #+#    #+#             */
/*   Updated: 2018/04/28 14:38:21 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"
/*
static void	zero_field_width(t_field_width *width)
{
	width->exists = 0;
	width->final_width = 0;
}
*/
static void	zero_flag(t_flag *flag)
{
	flag->hash = false;
	flag->zero = false;
	flag->plus = false;
	flag->minus = false;
	flag->space = false;
	flag->precision = false;
//	flag->field_width = ft_memalloc(sizeof(flag->field_width));
//	zero_field_width(flag->field_width);
}

static void	zero_mod(t_mod *mod)
{
	mod->j = false;
	mod->z = false;
	mod->h = false;
	mod->l = false;
	mod->double_h = false;
	mod->double_l = false;
}

void		zero_struct(t_printf *conversions)
{
	conversions->buf = NULL;
//	conversions->pad = 32;
	conversions->mod = ft_memalloc(sizeof(conversions->mod));
	zero_mod(conversions->mod);
	conversions->flag = ft_memalloc(sizeof(conversions->flag));
	zero_flag(conversions->flag);
}
