/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 23:25:13 by eliu              #+#    #+#             */
/*   Updated: 2018/04/12 09:04:05 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft_header.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (*s)
		f(i++, s++);
}
