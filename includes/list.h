/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmakhzou <pmakhzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 21:14:48 by pmakhzou          #+#    #+#             */
/*   Updated: 2016/11/30 21:59:30 by pmakhzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIST_H
# define _LIST_H

/*
** Structures
*/
typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;
/*
** Create
*/
void				ft_lstadd(t_list **alst, t_list *new);
/*
** Delete
*/
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
/*
** Iterate
*/
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);
/*
** Modify
*/
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

#endif
