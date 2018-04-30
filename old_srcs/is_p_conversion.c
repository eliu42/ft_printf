/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_p_conversion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 14:54:09 by eliu              #+#    #+#             */
/*   Updated: 2018/04/21 14:54:59 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

bool	is_p_conversion(char f, t_printf *conversions)
{
	if (f == 'p')
	{
		conversions->p = true;
		return (true);
	}
	return (false);
}
