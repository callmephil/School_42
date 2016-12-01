/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmakhzou <pmakhzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 19:53:41 by pmakhzou          #+#    #+#             */
/*   Updated: 2016/11/30 22:04:27 by pmakhzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _STRINGS_H
# define _STRINGS_H

/*
** Create
*/
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strnew(size_t size);
char	**ft_strsplit(char const *s, char c);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s);
/*
** Delete
*/
void	ft_strdel(char **as);
/*
** Iterate
*/
char	*ft_strchr(const char *s, int c);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strequ(char const *s1, char const *s2);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *s));
size_t	ft_strlen(const char *s1);
int		ft_strncmp(const char *s1, const char *s2, size_t len);
int		ft_strnequ(char const *s1, char const *s2, size_t len);
char	*ft_strnstr(const char *s1, const char *s2, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *s1, const char *s2);
/*
** Modify
*/
char	*ft_strcat(char *s1, const char *s2);
void	ft_strclr(char *s);
char	*ft_strcpy(char *dst, const char *src);
size_t	ft_strlcat(char *dst, const char *src, size_t len);
char	*ft_strncat(char *s1, const char *s2, size_t len);
char	*ft_strncpy(char *dst, const char *src, size_t len);
/*
** Output
*/
void	ft_putendl_fd(char const *s, int fd);
void	ft_putendl(char const *s);
void	ft_putnbr_fd(intmax_t n, int fd);
void	ft_putnbr(int nbr);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putstr(char const *s);

#endif
