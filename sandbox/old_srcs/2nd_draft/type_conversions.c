/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_conversions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 16:32:38 by eliu              #+#    #+#             */
/*   Updated: 2018/04/19 22:59:32 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	*char_type(char c)
{
	if (c == 'c')
	{
		return (char);
	}
	else if (c == 'C')
	{
		return (w_char);
	}
	else if (c == 's')
	{
		return (char *);
	}
	else if (c == 'S')
	{
		return (w_char*);
	}
}

void	*num_type(char c)
{
	if (c == 'i' || c == 'd')
	{
		return (int);
	}
	if (c == 'D')
	{
		return (long int);
	}
	if (c == 'o' || c == 'p' || c == 'u' || c == 'x' || c == 'X')
	{
		return (unsigned int);
	}
	if (c == 'O' || c == 'U')
	{
		return (unsigned long);
	}
	if (c == 'f')
	{
		return (float);
	}
	return (NULL);
}
