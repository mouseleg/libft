/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 14:01:55 by rgrollma          #+#    #+#             */
/*   Updated: 2022/07/09 12:57:54 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_needle;

	i = 0;
	j = 0;
	len_needle = 0;
	if (needle[i] == '\0')
		return ((char *) haystack);
	if (len == 0)
		return (NULL);
	while (needle[len_needle] != '\0')
		len_needle++;
	while (i < len && haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (j == len_needle - 1)
				return ((char *) &haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>
int main (void)
{
	char 	*strn;

	strn = ft_strnstr("Hallo ihr da draußen", "draußen", 30);
	printf("%s\n", strn);
	return (0);
} */
