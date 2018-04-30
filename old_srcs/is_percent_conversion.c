/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_percent.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 14:13:35 by eliu              #+#    #+#             */
/*   Updated: 2018/04/21 18:29:16 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

bool	is_percent(char f, t_printf *conversions)
{
	if (f == '%')
	{
		conversions->percent = true;
		return (true);
	}
	return (false);
}
