/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 21:26:44 by eliu              #+#    #+#             */
/*   Updated: 2018/04/12 09:08:56 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft_header.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	dif;

	dif = 0;
	while (dif == 0 && n--)
	{
		dif = ((int)(unsigned char)*s1 - (int)(unsigned char)*s2);
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (dif);
}
