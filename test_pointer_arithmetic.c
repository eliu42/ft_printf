/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_pointer_arithmetic.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 12:51:11 by eliu              #+#    #+#             */
/*   Updated: 2019/10/17 12:52:27 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		main()
{
	char 	*str = "llhh";

	printf("%c\n", *str);
	printf("%c\n", *str++);
	printf("%c\n", *str++);
	printf("%c\n", *str++);
}