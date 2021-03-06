# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/18 16:36:57 by rgrollma          #+#    #+#              #
#    Updated: 2022/06/17 15:00:55 by rgrollma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isdigit.c ft_isprint.c ft_itoa.c ft_memset.c ft_memchr.c\
ft_putchar_fd.c ft_substr.c ft_atoi.c ft_putendl_fd.c ft_memmove.c\
ft_strlcpy.c ft_tolower.c ft_bzero.c ft_putnbr_fd.c ft_strlen.c\
ft_toupper.c ft_isalnum.c ft_strncmp.c ft_isalpha.c ft_memcpy.c\
ft_isascii.c ft_strdup.c ft_strlcat.c ft_strchr.c ft_calloc.c\
ft_strrchr.c ft_memcmp.c ft_strjoin.c ft_strtrim.c ft_split.c\
ft_strmapi.c ft_striteri.c ft_putstr_fd.c\

BONUS = ft_lstadd_back.c ft_lstadd_front.c \
		ft_lstlast.c ft_lstnew.c ft_lstsize.c ft_lstdelone.c ft_lstiter.c \
		ft_lstmap.c ft_lstclear.c

OBJS = ${SRCS:.c=.o}

OBJSBONUS = ${BONUS:.c=.o}

CC		= gcc
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

bonus:	${OBJS} ${OBJSBONUS}
		ar rcs ${NAME} ${OBJS} ${OBJSBONUS}

all:	${NAME}

clean:
		${RM} ${OBJS} ${OBJSBONUS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY:	bonus all clean fclean re