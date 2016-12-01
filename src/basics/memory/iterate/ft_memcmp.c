/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmakhzou <pmakhzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 23:25:40 by pmakhzou          #+#    #+#             */
/*   Updated: 2016/12/01 02:32:15 by pmakhzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *cs1;
	unsigned char *cs2;

	cs1 = (unsigned char*)s1;
	cs2 = (unsigned char*)s2;
	if (!n)
		return (0);
	while (n - 1 && *cs1 == *cs2)
	{
		cs1++;
		cs2++;
		n--;
	}
	return (*cs1 - *cs2);
}
