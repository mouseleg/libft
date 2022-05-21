/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 13:48:03 by rgrollma          #+#    #+#             */
/*   Updated: 2022/05/21 14:48:44 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = s1;
	p2 = s2;
	i = 0;
	if (n != 0)
	{
		while (i < n)
		{
			if (p1[i] != p2[i])
				return (p1[i] - p2[i]);
			i++;
		}
	}
	return (0);
}

/* #include <stdio.h>
int main (void)
{
	size_t n;
	char string1[] = "Y";
	char string2[] = "";

	n = 3;
	ft_memcmp(string1, string2, n);
	printf("%ld\n", n);

} */
