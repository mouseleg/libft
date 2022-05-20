/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 18:32:43 by rgrollma          #+#    #+#             */
/*   Updated: 2022/05/20 19:21:36 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;

	str = (char *)malloc (size * (nmemb + 1));
	if (!str)
		return (NULL);
	while (nmemb--)
		str[nmemb] = '\0';
	return (str);
}

/* 
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	size_t n;
	size_t i;
	char	*dest;

	n = 10;
	i = 1;
	dest = ft_calloc(n, i);
	printf("%s\n", dest);
	dest[8] = 65;
	printf("%s\n", dest + 8);
	free(dest);
	return (0);
} */
