/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmakhzou <pmakhzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 23:53:42 by pmakhzou          #+#    #+#             */
/*   Updated: 2016/12/01 02:33:37 by pmakhzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i1;
	size_t i2;

	i1 = 0;
	if (!*s2)
		return ((char*)s1);
	while (i1 < n && s1[i1] != '\0')
	{
		if (s1[i1] == *s2)
		{
			i2 = 0;
			while (s1[i1 + i2] == s2[i2] && i1 + i2 < n)
			{
				i2++;
				if (!s2[i2])
					return ((char*)&s1[i1]);
			}
		}
		i1++;
	}
	return (NULL);
}
