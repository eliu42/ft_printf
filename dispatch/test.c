/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/28 14:03:27 by eliu              #+#    #+#             */
/*   Updated: 2018/04/28 14:11:25 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void			hello_world(void)
{
	printf("hello world\n");
}

void			goodbye_world(void)
{
	printf("goodbye world\n");
}


typedef struct	s_handler
{
	char		name;
	void		(*func)(void);
}				t_handler;

t_handler		g_conv_table[] = 
{
	{'h', &hello_world},
	{'g', &goodbye_world}
};

int				find_index(char c)
{
	if (c == 'h')
		return (0);
	if (c == 'g')
		return (1);
	return (-1);
}


int		main(int argc, char **argv)
{
	g_conv_table[find_index(argv[1][0])].func();
	
}
