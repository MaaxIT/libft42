/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:27:59 by mpeharpr          #+#    #+#             */
/*   Updated: 2021/11/06 14:11:10 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>

typedef struct s_list {
	void			*content;
	struct s_list	*next;
}	t_list;

size_t	ft_strlen(char *str);
int		ft_tolower(int ch);
int		ft_toupper(int ch);
char	*ft_strchr(char const *str, int c);
char	*ft_strdup(char const *str);
char	*ft_strrchr(char const *str, int c);
size_t	ft_strlcat(char *dest, char const *src, size_t n);
char	*ft_strnstr(char const *b, char const *l, size_t len);
int		ft_atoi(char const *str);
void	ft_bzero(void *s, size_t n);
size_t	ft_strlcpy(char *dest, char const *src, size_t n);
void	*ft_calloc(size_t eCount, size_t eSize);
int		ft_isalnum(int ch);
int		ft_isalpha(int ch);
int		ft_isascii(int ch);
int		ft_isdigit(int ch);
int		ft_isprint(int ch);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_strncmp(char const *str1, char const *str2, size_t n);
int		ft_memcmp(char const *str1, char const *str2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *addr, int ch, size_t n);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
