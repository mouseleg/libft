/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 22:24:11 by rgrollma          #+#    #+#             */
/*   Updated: 2022/05/18 17:53:04 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	i = 0;
	while (i < size)
	{
		(*(d + i) = *(s + i));
	}
	i++;
	return (i);
}

/*
#include <stdio.h> 
int	main(void)
{
	char	s[] = "this is for YOU";
	char	d[] = "Thanks";
	printf("%zu\n", ft_strlcpy(s, d, 5));
} */
