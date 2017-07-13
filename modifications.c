/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modifications.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 23:08:59 by eliu              #+#    #+#             */
/*   Updated: 2017/07/12 23:19:17 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	set_flags(t_flags flags, char c)
{
	if (c == '-')
		flags->left_justified = 1;
	else if (c == '+')
		flags->sighned = 1;
	else if (c == ' ')
		flags->space = 1;
	else if (c == '#')
		flags->alternate = 1;
	else if (c == '0')
		flags->zero_padding = 1;
}

int		set_foundation(t_flags *flags, const char *str, va_list *valist)
{
	int		i;
	int		decimal;

	i = 0;
	decimal = 0;
	if (*str == 0)
		return (0);
//	while is not a variable type
	while (is_flag(str[i]) || str[i] >= '0' || str[i] <= '9')
	{
		while (str[i] && is_flag(str[i]))
		{
			set_flags(e, str[i++]);
		}
	}

}


