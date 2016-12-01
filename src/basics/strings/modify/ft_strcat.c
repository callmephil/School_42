/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmakhzou <pmakhzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 12:47:10 by pmakhzou          #+#    #+#             */
/*   Updated: 2016/12/01 02:33:50 by pmakhzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *src, const char *dest)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
		j++;
	while (dest[i] != '\0')
	{
		src[j] = dest[i];
		i++;
		j++;
	}
	src[j] = '\0';
	return (src);
}
