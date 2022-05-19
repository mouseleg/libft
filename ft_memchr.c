/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 23:31:05 by rgrollma          #+#    #+#             */
/*   Updated: 2022/05/20 00:10:39 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*search;

	search = (unsigned char *) s;
	while (n--)
	{
		if (*search == (unsigned char) c)
			return ((void*)s);
		search++;
		s++; 
	}
	return (NULL);
}

/* #include <stdio.h>
int main(void)
{
	int		i;
	size_t	len;
	char	src[] = "XXXX0XXXXX";

	i = '0';
	len = 8;
	printf("%s\n", ft_memchr(src, i, len));
	return (0);
}
 */