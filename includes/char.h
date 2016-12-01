/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmakhzou <pmakhzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 19:53:54 by pmakhzou          #+#    #+#             */
/*   Updated: 2016/11/30 21:38:35 by pmakhzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CHAR_H
# define _CHAR_H

/*
** Check
*/
int					ft_isalnum(int chr);
int					ft_isalpha(int chr);
int					ft_isascii(int chr);
int					ft_isdigit(int chr);
int					ft_islower(int chr);
int					ft_isprint(int chr);
int					ft_isspace(int chr);
int					ft_isupper(int chr);
/*
** Modify
*/
int					ft_toupper(int chr);
int					ft_tolower(int chr);
/*
** Output
*/
void				ft_putchar_fd(char c, int fd);
void				ft_putchar(char c);

#endif
