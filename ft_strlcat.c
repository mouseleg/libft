/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 11:27:08 by rgrollma          #+#    #+#             */
/*   Updated: 2022/05/20 18:08:15 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	count;
	size_t	dlen;
	size_t	slen;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	count = 0;
	if (!src || !dst)
		return (slen + dlen);
	if (dstsize < dlen + 1)
		return (slen + dstsize);
	while (src[count] && dstsize > dlen + count + 1)
	{
		dst[dlen + count] = src[count];
		count++;
	}
	dst[count + dlen] = '0';
	return (slen + dlen);
}

/*  #include <stdio.h>
int	main(void)
{	
	char dst[] = "dkjfeijeifjaie";
	char src[] ="XXXXXXXXXXXXXXXXX";
	size_t dstsize = 20;

	printf("ORIG:%zu\n", ft_strlcat(dst, src, dstsize));
	printf("ORIG %s\n", dst);
	printf("MINE %zu\n", ft_strlcat(dst, src, dstsize));
	printf("MINE %s\n", dst);
	return (0);
} */
