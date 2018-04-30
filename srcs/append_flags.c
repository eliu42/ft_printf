/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_flags.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/28 17:23:10 by eliu              #+#    #+#             */
/*   Updated: 2018/04/28 17:24:21 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf_header.h"

/*
**	I think hash needs it's own dispatch table. Disgusting.
*/

/*
void	append_hash_x(t_printf *conversions, char *str, int conv_len)
{
	conversions->buf = ft_strnew(conv_len + 2);
	buf[0] = '0';
	ft_strcat(buf, str);
	buf[conv_len + 1] = '\0';
	free(buf);
}

void	append_hash(t_printf *conversions, char *str, int conv_len)
{
	conversions->buf = ft_strnew(conv_len + 2);
	buf[0] = '0';
	ft_strcat(buf, str);
	buf[conv_len + 1] = '\0';
	free(buf);
}
*/

/*
**	So does mofo precision for numerical and alphabetical.
*/

void	append_precision(t_printf *conversions, char *str, int conv_len)
{
	str = NULL;
	conv_len = 0;
	conversions->buf = ft_strnew(conversions->precision);

}

void	append_hash(t_printf *conversions, char *str, int conv_len)
{
	conversions->buf = ft_strnew(conv_len + 2);
	conversions->buf[0] = '0';
	ft_strcat(conversions->buf, str);
	conversions->buf[conv_len + 1] = '\0';
	free(conversions->buf);
}

/*
**	Error: if field width is less than the original string length we will seg
**	fault.
*/

void	append_zero(t_printf *conversions, char *str, int conv_len)
{
	int		i;

	i = 0;
	conversions->buf = ft_strnew(conversions->field_width + 1);
	while (i < conversions->field_width - conv_len)
	{
		conversions->buf[i] = '0';
	}
	ft_strcat(conversions->buf, str);
	conversions->buf[i] = '\0';
	free(conversions->buf);
}

/*
**	Error: if field width is less than the original string length we will seg
**	fault.
*/

void	append_minus(t_printf *conversions, char *str, int conv_len)
{
	int		i;

	i = 0;
	conversions->buf = ft_strnew(conversions->field_width + 1);
	ft_strcpy(conversions->buf, str);
	while (conv_len < conversions->field_width)
	{
		conversions->buf[conv_len] = ' ';
		conv_len++;
	}
	conversions->buf[conversions->field_width] = '\0';
	free(conversions->buf);
}

/*
**	Error: if field width is less than the original string length we will seg
**	fault.
*/

void	append_plus(t_printf *conversions, char *str, int conv_len)
{
	conversions->buf = ft_strnew(conv_len + 2);
	if (str[0] == '-')
		conversions->buf[0] = '-';
	else 
		(conversions->buf[0] = '+');
	ft_strcat(conversions->buf, str);
	conversions->buf[conv_len + 1] = '\0';
	free(conversions->buf);
}

/*
**	Error: if field width is less than the original string length we will seg
**	fault.
*/

void	append_space(t_printf *conversions, char *str, int conv_len)
{
	conversions->buf = ft_strnew(conv_len + 2);
	conversions->buf[0] = ' ';
	ft_strcat(conversions->buf, str);
	conversions->buf[conv_len + 1] = '\0';
	free(conversions->buf);
}

