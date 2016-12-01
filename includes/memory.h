/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmakhzou <pmakhzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 19:53:46 by pmakhzou          #+#    #+#             */
/*   Updated: 2016/11/30 21:40:57 by pmakhzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MEMORY_H
# define _MEMORY_H

/*
** Create
*/
void				*ft_memalloc(size_t size);
/*
** Delete
*/
void				ft_memdel(void **ap);
/*
** Iterate
*/
void				*ft_memchr(const void *src, int c, size_t len);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
/*
** Modify
*/
void				ft_bzero(void *dst, size_t len);
void				*ft_memccpy(void *dst, const void *src, int c, size_t len);
void				*ft_memcpy(void *dst, const void *src, size_t len);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memset(void *dst, int data, size_t len);

#endif
