/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmakhzou <pmakhzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 23:17:45 by pmakhzou          #+#    #+#             */
/*   Updated: 2016/12/01 02:32:04 by pmakhzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*tmp;

	tmp = NULL;
	tmp = (void*)malloc(sizeof(void*) * size);
	if (!tmp)
		return (NULL);
	ft_memset(tmp, 0, size);
	return (tmp);
}
