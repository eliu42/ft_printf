/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:42:07 by eliu              #+#    #+#             */
/*   Updated: 2019/10/17 16:46:55 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_header.h"

char	*ft_ctof(char c)
{
	char	*str;

	str = ft_strnew(1);
	str[0] = c;
	return (str);
}
