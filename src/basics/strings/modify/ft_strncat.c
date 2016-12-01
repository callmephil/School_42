/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmakhzou <pmakhzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 23:50:09 by pmakhzou          #+#    #+#             */
/*   Updated: 2016/12/01 02:34:01 by pmakhzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t tmp;
	size_t i;

	i = 0;
	tmp = ft_strlen(s1);
	while (s2[i] && i < n)
	{
		s1[i + tmp] = s2[i];
		i++;
	}
	s1[i + tmp] = '\0';
	return (s1);
}
