/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 15:10:28 by eliu              #+#    #+#             */
/*   Updated: 2019/10/17 17:01:07 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	store_char(t_printf *info, char c)
{
	info->conversion->content = ft_strcat(info->conversion->content, &c);
	info->conversion->content_size += 1;
}

void	store_flag(t_printf *info, char c)
{
	if (c == '#')
		info->flags->hash = 1;
	else if (c == '0')
		info->flags->zero = 1;
	else if (c == '-')
		info->flags->minus = 1;
	else if (c == '+')
		info->flags->plus = 1;
	else if (c == ' ')
		info->flags->plus = 1;
}

void	store_mod(t_printf *info, char c)
{
	if (c == 'l')
		if (info->mod->l == 1)
		{
			info->mod->l = 0;
			info->mod->ll = 1;
		}
		else
			info->mod->l = 1;
	else if (c == 'h')
	{
		if (info->mod->h == 1)
		{
			info->mod->h = 0;
			info->mod->hh = 1;
		}
	}
	else
		ft_printf("Error in store modifier\n");
}
