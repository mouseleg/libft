/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 20:32:57 by rgrollma          #+#    #+#             */
/*   Updated: 2022/07/11 22:51:04 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)

{
	size_t			i;
	unsigned char	*string1;
	unsigned char	*string2;

	string1 = (unsigned char *)s1;
	string2 = (unsigned char *)s2;
	i = 0;
	while (i < len && (string1[i] != '\0' || string2[i] != '\0'))
	{
		if (*(string1 + i) != *(string2 + i))
			return (*(string1 + i) - *(string2 + i));
		i++;
	}
	return (0);
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
