/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:56:02 by rgrollma          #+#    #+#             */
/*   Updated: 2022/05/18 16:31:16 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*source;

	source = s;
	while (n--)
		*source++ = '0';
}

/* #include <stdio.h>
int main(void)
{	
	size_t	n;
	char	scr[] = "XXXX";	

	//n = sizeof(scr)-1;//-1 !=Müll, nur bei sizeof
	n = 42;
	ft_bzero(scr, n);
	printf("%s\n", scr);
	return (0);
} */
