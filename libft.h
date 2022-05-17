/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 21:22:47 by rgrollma          #+#    #+#             */
/*   Updated: 2022/05/17 21:24:55 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int	ft_isalpha(char *str);
int	ft_isdigit(char *str);
int	ft_isalnum(int c);
int	ft_isprint(char *str);
void	ft_putendl_fd(char *s, int fd);
int	ft_strlen(char *str);
int	ft_strncmp(char *s1, char *s2, size_t len);
int	ft_tolower(int c);
int	ft_toupper(int c);
int atoi(const char *nptr);
void ft_putchar_fd(char c, int fd);
int	isascii(int c);
char	*ft_memcpy(char *dest, char *src);
char ft_strnstr(const char *s1, const char *s2, size_t len);
char	 *ft_substr(char const *s, unsigned int start, size_t len);
int	ft_strlcpy(char *dst, const char *src, size_t size);
void ft_putnbr_fd(int n, int fd);
char	*ft_strdup(const char *s);
#endif

/* #ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <unistd.h>
# include <stdio.h> */
