/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 21:25:53 by eliu              #+#    #+#             */
/*   Updated: 2018/04/12 09:04:49 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft_header.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int		dif;

	dif = 0;
	while (dif == 0)
	{
		dif = ((int)(unsigned char)*s1 - (unsigned char)*s2);
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (dif);
}
