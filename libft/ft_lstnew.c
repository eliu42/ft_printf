/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 12:15:45 by eliu              #+#    #+#             */
/*   Updated: 2018/04/12 08:50:50 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft_header.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*node;

	node = (t_list*)malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	if (content == NULL)
	{
		node->content = NULL;
		node->content_size = 0;
	}
	else
	{
		if (!(node->content = (void*)malloc(content_size)))
			return (NULL);
		ft_memcpy((node->content), content, content_size);
		node->content_size = content_size;
	}
	node->next = NULL;
	return (node);
}
