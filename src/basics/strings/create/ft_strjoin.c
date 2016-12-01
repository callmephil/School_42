/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmakhzou <pmakhzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 23:41:49 by pmakhzou          #+#    #+#             */
/*   Updated: 2016/12/01 02:32:44 by pmakhzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	int		size;

	if (!(s1) || !(s2))
		return (NULL);
	tmp = NULL;
	size = ft_strlen(s1) + ft_strlen(s2);
	tmp = (char*)malloc(sizeof(char) * (size + 1));
	if (tmp)
	{
		ft_strcpy(tmp, (char*)s1);
		ft_strcat(tmp, s2);
		return (tmp);
	}
	return (NULL);
}
