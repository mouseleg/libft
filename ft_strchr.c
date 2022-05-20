/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 13:15:37 by rgrollma          #+#    #+#             */
/*   Updated: 2022/05/20 13:43:12 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int ch)
{
	unsigned char	c;
	char			*s;
	int				i;

	s = (char *)string;
	c = (unsigned char)ch;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	if (c == '\0')
	{
		return (s + i);
	}
	return (NULL);
}

/* #include <stdio.h>
int main(void)
{
	char str[] = "XXX1XXXXXXXXXXx";
	int chr = '1';
	// char	 *p;
	if (ft_strchr(str, chr))
		printf("there is 1\n");
	else
		printf("no 1\n");
	// p = ft_strchr(string, c);
	// printf("%s\n", p);
	return (0);
} */
