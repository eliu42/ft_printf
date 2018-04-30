/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <eliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 18:03:07 by eliu              #+#    #+#             */
/*   Updated: 2018/04/19 14:36:00 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft_header.h"

int		ft_atoi(const char *str)
{
	int	num;
	int	negative;

	if (str == NULL)
		return (ft_error("str is null"));
	while (ft_isspace(*str))
		str++;
	negative = 1;
	if (*str == '-')
		negative = -1;
	if (*str == '-' | *str == '+')
		str++;
	num = 0;
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + *str - '0';
		str++;
	}
	return (negative * num);
}
