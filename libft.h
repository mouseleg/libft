# ifndef libft
#define libft

#include <stddef.h>
#include <unistd.h>
#include <stdio.h>

int	ft_str_isalpha(char *str);
int	ft_str_isdigit(char *str);
int	ft_isprint(char *str);
int	ft_strlen(char *str);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
int	ft_tolower(char *str);
int	ft_toupper(char *str);

#endif