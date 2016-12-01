/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmakhzou <pmakhzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 23:24:31 by pmakhzou          #+#    #+#             */
/*   Updated: 2016/12/01 02:32:12 by pmakhzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	src;

	i = 0;
	dst = (unsigned char*)s;
	src = (unsigned char)c;
	while (i < n)
	{
		if (dst[i] == src)
			return (&dst[i]);
		i++;
	}
	return (NULL);
}
