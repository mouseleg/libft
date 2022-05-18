/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 22:24:11 by rgrollma          #+#    #+#             */
/*   Updated: 2022/05/18 13:40:42 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include <string.h>

size_t	strlcpy(char *restrict d, const char *restrict s, size_t dstsize)
//int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (*(s + i) != '\0')
	{
		(*d[i]++ = *s[i]++);
	}
	i++;
	return (i);
}

int	main(void)
{
	char	*s;

	s[] = "this is for YOU";
	d[] = "Thanks";
	printf("%s\n", ft_strlcpy(d));
}
