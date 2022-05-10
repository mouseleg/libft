NAME = libft.a


OBJECT = ft_isalnum.o \
    ft_isascii.o \
    ft_isdigit.o \
    ft_islower.o \
    ft_isprint.o \
    ft_isupper.o \
    ft_memchr.o \
    ft_memcmp.o \
    ft_memcpy.o \
    ft_memmove.o \
    ft_memset.o \
    ft_strchr.o \
    ft_strlcat.o \
    ft_strlcpy.o \
    ft_strlen.o \
    ft_strncmp.o \
    ft_strnstr.o \
    ft_strrchr.o \
    ft_tolower.o \
    ft_toupper.o

CFLAGS = -Wall -Werror -Wextra

CC = gcc

all: $(NAME)

$(NAME): $(OBJECT)
    ar rcs $@ $^

$(OBJECT): %.o: %.c
    cc $(CFLAGS) -c $<

clean:
    rm -f $(OBJECT)

fclean: clean
    rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re