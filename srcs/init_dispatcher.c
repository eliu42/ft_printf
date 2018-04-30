/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_dispatcher.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/29 00:07:30 by eliu              #+#    #+#             */
/*   Updated: 2018/04/29 00:07:48 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

t_dispatch g_dispatcher[] =
{
	{'c', &print_c},
	{'C', &print_c_wide},
	{'s', &print_s},
	{'s', &print_s_wide},
	{'d', &print_d},
	{'D', &print_d_long},
	{'i', &print_i},
	{'o', &print_o},
	{'O', &print_o_big},
	{'u', &print_u},
	{'x', &print_x},
	{'X', &print_x_big},
	{'p', &print_p},
	{'n', &print_n},
	{'%', &print_percent}
};

t_append_flag g_flags[] =
{
	{'#', &append_hash},
	{' ', &append_space},
	{'+', &append_plus},
	{'0', &append_zero},
	{'-', &append_minus},
	{'.', &append_precision}
};