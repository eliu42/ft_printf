/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 21:29:21 by eliu              #+#    #+#             */
/*   Updated: 2018/04/13 17:10:12 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft_header.h"

static size_t	word_len(char const *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i++] != c && s[i++])
			len++;
	}
	return (len);
}

static size_t	str_c(char const *s, char c)
{
	size_t	i;
	size_t	strs;

	i = 0;
	strs = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] != c && s[i])
			strs++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (strs);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	if (!s || !(split = (char**)malloc(sizeof(char*) * (str_c(s, c) + 1))))
		return (NULL);
	while (s[i] && i < str_c(s, c))
	{
		k = 0;
		if (!(split[i] = ft_strnew(word_len(&s[j], c) + 1)))
			return (NULL);
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			split[i][k++] = s[j++];
		split[i][k] = '\0';
		i++;
	}
	split[i] = NULL;
	return (split);
}
