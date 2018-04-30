/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ghetto_gnl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 19:33:11 by eliu              #+#    #+#             */
/*   Updated: 2018/04/16 01:52:07 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/get_next_line_header.h"

static int			end_of_file(char **line, char *str)
{
	if (*str)
	{
		*line = ft_strdup(str);
		ft_strclr(str);
		return (1);
	}
	return (0);
}

static int			find_line(t_ins ins, char **str, char **line)
{
	size_t			i;
}

/*
**	Passing in struct, current fd, and line that was read.
*/

int					ghetto_next_line(t_ins ins, const int fd, char **line)
{
	int				i;
	char			buf[BUFF_SIZE + 1];
	static char		*str = NULL;

	if (fd < 0 || !line || read(fd, buf, 0) < 0)
		return (-1);
	if (!str)
	{
		str = ft_strnew(BUFF_SIZE + 1);
		get_instructions(ins, str, fd);
	}
	if (find_line(&str, line))
		return (1);
	while ((i = read(fd, buf, BUFF_SIZE) > 0))
	{
		buf[i] = '\0';
		str = ft_strjoin_memdel(str, buffer);
		if (find_line(&str, line))
			return (1);
	}
	if (end_of_file(line, str))
		return (1);
	return (0);
}
