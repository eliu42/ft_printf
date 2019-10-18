/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_hash_flag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 20:19:19 by eliu              #+#    #+#             */
/*   Updated: 2018/04/20 20:20:46 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

bool	is_hash_flag(char f, t_printf *conversions)
{
	if (f == '#')
	{
		conversions->flag->hash = true;
		return (true);
	}
	return (false);
}
