/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 20:32:58 by rgrollma          #+#    #+#             */
/*   Updated: 2022/07/09 12:20:13 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{	
	size_t			i;
	unsigned char	*dest2;
	unsigned char	*src2;

	i = 0;
	dest2 = (unsigned char *) dest;
	src2 = (unsigned char *) src;
	if (!dest || !src)
		return (NULL);
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest);
}

/*  int	main(void)
{
	char	src[] = "XXXXXXXXXXXXXXXXXXXXXXXXXXX";
    char    dest[] = "ppppppppppppppppp";
	size_t	n;

	n = 5;
	ft_memcpy(dest, src, n);
    printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	return (0);
} */
