/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmakhzou <pmakhzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 23:20:46 by pmakhzou          #+#    #+#             */
/*   Updated: 2016/12/01 02:32:22 by pmakhzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;
	size_t			i;

	tmp1 = (unsigned char*)dst;
	tmp2 = (unsigned char*)src;
	i = 0;
	c = (unsigned char)c;
	while (i < n)
	{
		if ((*tmp1++ = *tmp2++) == c)
			return (tmp1);
		i++;
	}
	return (NULL);
}
