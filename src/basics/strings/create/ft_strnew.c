/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmakhzou <pmakhzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 23:50:40 by pmakhzou          #+#    #+#             */
/*   Updated: 2016/12/01 02:32:51 by pmakhzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	size += 1;
	str = (char*)malloc(sizeof(char) * size);
	if (!str)
		return (NULL);
	while (size)
	{
		size--;
		str[size] = 0;
	}
	return (str);
}
