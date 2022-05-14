/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 18:58:22 by rgrollma          #+#    #+#             */
/*   Updated: 2022/05/13 22:13:06 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}

int main()
{
    int    fd;
    
    fd = open("42", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
    if (fd == -1)
	{
		printf("open() error");
	}

	ft_putendl_fd("fdjffjewfewof", fd);
   	if (close(fd) == -1)
	{
		printf("close() error");
	}
	return (0);
}
