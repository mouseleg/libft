/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 18:32:43 by rgrollma          #+#    #+#             */
/*   Updated: 2022/07/09 12:12:58 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	mem;
	size_t	i;

	i = 0;
	mem = count * size;
	str = malloc(count * size);
	if (!str)
		return (NULL);
	while (i < mem)
	{
		str[i] = 0;
		i++;
	}
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
