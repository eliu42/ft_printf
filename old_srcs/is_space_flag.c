/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_space_flag.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 20:56:18 by eliu              #+#    #+#             */
/*   Updated: 2018/04/20 20:57:38 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

bool	is_space_flag(char f, t_printf *conversion)
{
	if (f == ' ')
	{
		conversion->flag->space = true;
		return (true);
	}
	return (false);
}
