/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmakhzou <pmakhzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 14:16:28 by pmakhzou          #+#    #+#             */
/*   Updated: 2016/12/01 02:32:54 by pmakhzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_chrlen(const char *s, char c)
{
	int len;

	len = 0;
	while (*s != c && *s)
	{
		len++;
		s++;
	}
	return (len);
}

static int		ft_splitcount(const char *s, char c)
{
	int count;
	int in_substring;

	in_substring = 0;
	count = 0;
	while (*s)
	{
		if (in_substring == 1 && *s == c)
			in_substring = 0;
		if (in_substring == 0 && *s != c)
		{
			in_substring = 1;
			count++;
		}
		s++;
	}
	return (count);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**t;
	int		c_word;
	int		i;

	if (!s || !c)
		return (NULL);
	i = 0;
	c_word = ft_splitcount((const char *)s, c);
	t = (char **)malloc(sizeof(*t) * (ft_splitcount((const char *)s, c) + 1));
	if (!t)
		return (NULL);
	while (c_word--)
	{
		while (*s == c && *s != '\0')
			s++;
		t[i] = ft_strsub((const char *)s, 0, ft_chrlen((const char *)s, c));
		if (!t[i])
			return (NULL);
		s = s + ft_chrlen(s, c);
		i++;
	}
	t[i] = NULL;
	return (t);
}
