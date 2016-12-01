/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmakhzou <pmakhzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 17:54:10 by pmakhzou          #+#    #+#             */
/*   Updated: 2016/12/01 02:33:00 by pmakhzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		ft_istrimablespace(int chr)
{
	return (chr == ' ' || chr == '\n' || chr == '\t');
}

static char		*ft_emptystring(void)
{
	char	*tmp;

	tmp = (char *)malloc(sizeof(char) * 1);
	if (!tmp)
		return (NULL);
	*tmp = '\0';
	return (tmp);
}

char			*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		size;
	char	*tmp;

	i = 0;
	j = 0;
	if (s)
	{
		size = ft_strlen(s);
		while (ft_istrimablespace(s[i]))
			i++;
		if (s[i] == '\0')
			return (ft_emptystring());
		while (ft_istrimablespace(s[size - 1]))
			size--;
		tmp = (char *)malloc(sizeof(char) * (size - i + 1));
		if (!tmp)
			return (NULL);
		while (i < size)
			tmp[j++] = s[i++];
		tmp[j] = '\0';
		return (tmp);
	}
	return (NULL);
}
