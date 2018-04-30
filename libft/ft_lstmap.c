/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 12:46:48 by eliu              #+#    #+#             */
/*   Updated: 2018/04/12 08:50:41 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft_header.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *list;

	if (!lst)
		return (NULL);
	list = f(lst);
	if (list == NULL)
		return (NULL);
	new = list;
	while (lst->next)
	{
		lst = lst->next;
		if (!(list->next = f(lst)))
		{
			free(list->next);
			return (NULL);
		}
		list = list->next;
	}
	return (new);
}
