/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 14:13:55 by eliu              #+#    #+#             */
/*   Updated: 2018/04/21 14:14:36 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

bool	is_s_conversion(char f, t_printf *conversions)
{
	if (f == 's')
	{
		conversions->s = true;
		return (true);
	}
	return (false);
}
