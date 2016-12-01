/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmakhzou <pmakhzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 23:27:16 by pmakhzou          #+#    #+#             */
/*   Updated: 2016/12/01 02:32:24 by pmakhzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	int		i;
	char	*cs1;
	char	*cs2;

	i = 0;
	cs1 = s1;
	cs2 = (char*)s2;
	while (n != '\0')
	{
		cs1[i] = cs2[i];
		n--;
		i++;
	}
	return (cs1);
}
