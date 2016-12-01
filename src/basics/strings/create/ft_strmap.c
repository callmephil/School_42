/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmakhzou <pmakhzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 23:47:21 by pmakhzou          #+#    #+#             */
/*   Updated: 2016/12/01 02:32:46 by pmakhzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
			tmp[i] = (*f)(s[i]);
			i++;
		}
		tmp[i] = '\0';
	}
	return (tmp);
}
