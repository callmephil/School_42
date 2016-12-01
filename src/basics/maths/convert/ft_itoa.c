/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmakhzou <pmakhzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 17:53:30 by pmakhzou          #+#    #+#             */
/*   Updated: 2016/12/01 02:31:58 by pmakhzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	char	sign;
	int		tmp;
	size_t	len;

	sign = (n < 0) ? -1 : 1;
	len = 2 + (n < 0);
	tmp = n;
	while ((tmp = tmp / 10))
		len++;
	if ((str = (char *)malloc(sizeof(char) * len--)) == NULL)
		return (NULL);
	str[len--] = '\0';
	str[len--] = sign * (n % 10) + '0';
	while ((n = n / 10))
		str[len--] = sign * (n % 10) + '0';
	if (sign < 0)
		str[len] = '-';
	return (str);
}
