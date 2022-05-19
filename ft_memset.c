/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 22:40:44 by rgrollma          #+#    #+#             */
/*   Updated: 2022/05/19 23:25:52 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char	*replace;

	replace = (unsigned char *) s;
	while (n)
	{
		*replace++ = c;
		n--;
	}
	return (s);
}

/* #include <stdio.h>
int main (void)
{
	int 	c;
	size_t	n;
	char	src[] = "XXXXXXXXXXXXXXXXXXX";

	c = '5';
	n = 10;
	ft_memset(src, c, n);
	printf("%s\n", src);
	return (0);
} */
