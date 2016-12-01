/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmakhzou <pmakhzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 23:28:28 by pmakhzou          #+#    #+#             */
/*   Updated: 2016/12/01 02:32:27 by pmakhzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char *tmp;

	tmp = (unsigned char*)malloc(sizeof(unsigned char) * n);
	if (tmp)
	{
		ft_memcpy(tmp, s2, n);
		ft_memcpy(s1, tmp, n);
		free(tmp);
	}
	return (s1);
}
