/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 20:39:03 by rgrollma          #+#    #+#             */
/*   Updated: 2022/05/20 21:03:16 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	int		len;
	char	*s;

	s = (char *)str;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char)c)
		{
			return (s + len);
		}
		len--;
	}
	return (NULL);
}

/* int main(void)
{
	const char string[] = "HHHHHHHHHcLLLLLc";
	const char ch = '\0';
	char		*p;

	p = ft_strrchr(string, ch);
	printf("string starting from last occurence %c is: %s\n", ch, p);
} */