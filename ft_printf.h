/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 13:39:30 by eliu              #+#    #+#             */
/*   Updated: 2017/07/12 23:35:28 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <wchar.h>

typedef struct		s_flags
{
	int				alternate;
	int				zero_padding;
	int				left_justified;
	int				space;
	int				sighned;
	int				field_width;
	int				precision;
	int				p_modifier;
	int				bytes_printed;
}					t_flags;

typedef struct		s_vars
{
	char			specifier;
}					t_vars;

int		is_flag(char flag);
int		ft_printf(const char *str, ...);

int		set_foundation(t_flags, *flags, const char *str, va_list *va_list);
#endif
