/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 09:47:24 by rgrollma          #+#    #+#             */
/*   Updated: 2022/05/20 10:40:01 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if (!dest || !src)
		return (NULL);
	d = dest;
	s = src;
	if (d < s)
	{
		while (n--)
		{
			*d++ = *s++;
		}
	}
	else
	{
		while (n--)
			*(d + n) = *(s + n);
	}
	return (dest);
}

/* #include <stdio.h>
int main(void)
{
	size_t len;
	char	src[] = "XXXXXXXXXXXXXXxxxxxxxxxxxxxxxxxx";
	char	dest[] = "aaaaaaaaaaaaaaaaaaaaaaa";

	len = 20;
	ft_memmove(src, dest, len);
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	return (0);
} */
