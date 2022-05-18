/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 20:32:57 by rgrollma          #+#    #+#             */
/*   Updated: 2022/05/18 13:33:43 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t len)

{
	if (!len)
		return (0);
	while ((*s1 && (*s1 == *s2)) && --len)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
				s1++;
				s2++;
	}
	return (*s1 - *s2);
}

/* int	main(void)
{	
	case 1: s1 > s2 function returns +value
	char	s1[] = "icecream";
	char	s2[] = "chocolatecake";

	case 2: s1 < s2 function returns -value
	char	s1[] = "chocolatecake";
	char	s2[] = "icecream";

	case 3: s1 == s2 function returns 0
	char	s1[] = "Chocolatecake";
	char	s2[] = "ChocolatecakhfdfuewhfuewE";

	unsigned	int n;

	n = 14;
	ft_strncmp(s1, s2, n);
	printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%s\n", s1);
	printf("%s\n", s2);
	return (0);
} */
