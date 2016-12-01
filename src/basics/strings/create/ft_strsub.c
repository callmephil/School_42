/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmakhzou <pmakhzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 23:54:16 by pmakhzou          #+#    #+#             */
/*   Updated: 2016/12/01 02:32:57 by pmakhzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	char	*tmp2;
	size_t	i;

	tmp = NULL;
	tmp2 = NULL;
	i = 0;
	tmp = (char*)malloc(sizeof(char) * (len) + 1);
	tmp2 = tmp;
	if (!(tmp))
		return (NULL);
	while (i < len && s)
	{
		tmp[i] = (char)s[start];
		start++;
		i++;
	}
	tmp[i] = '\0';
	return (tmp2);
}
