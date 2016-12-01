/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmakhzou <pmakhzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 23:48:00 by pmakhzou          #+#    #+#             */
/*   Updated: 2016/12/01 02:32:49 by pmakhzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*tmp;
	size_t	i;

	i = 0;
	if (s)
	{
		tmp = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (!f || !tmp)
			return (NULL);
		while (s[i] != '\0')
		{
			tmp[i] = (*f)(i, s[i]);
			i++;
		}
		tmp[i] = '\0';
	}
	return (tmp);
}
