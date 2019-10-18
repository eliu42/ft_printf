/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_info.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 12:14:33 by eliu              #+#    #+#             */
/*   Updated: 2019/10/17 17:20:22 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void	init_modifiers(t_printf *info)
{
	info->mod = ft_memalloc(sizeof(t_mod));
	info->mod->hh = 0;
	info->mod->h = 0;
	info->mod->l = 0;
	info->mod->ll = 0;
}

static void	init_flags(t_printf *info)
{
	info->flags = ft_memalloc(sizeof(t_flags));
	info->flags->hash = 0;
	info->flags->zero = 0;
	info->flags->minus = 0;
	info->flags->plus = 0;
	info->flags->space = 0;
}
	

t_printf*	init_info(t_printf *info)
{
	info = ft_memalloc(sizeof(t_printf));
	ft_putstr("inside init\n");
	info->conversion = (t_list*)malloc(sizeof(t_list));
	ft_putstr("after alloc\n");
	init_flags(info);
	if (!(info->mod = ft_memalloc(sizeof(t_mod))))
		return (NULL);
	init_modifiers(info);
	info->conversion = NULL;
	info->mod = NULL;
	info->flags = NULL;
	return (info);
}
