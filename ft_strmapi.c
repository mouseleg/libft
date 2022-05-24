/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:33:10 by rgrollma          #+#    #+#             */
/*   Updated: 2022/05/24 21:41:45 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dst;
	int		i;
	int		len;

	i = 0;
	len = 0;
	if (!s)
		return (NULL);
	while (s[len] != '\0')
		len++;
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	while (s[i] != '\0')
	{
		dst[i] = f(i, s[i]);
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/* #include <stdio.h> 
int main(void)
{
	char	str[] = "kadfjaeifj";
	char	*res;

	res = ft_strmapi(str, up);
	printf("%s\n", res);
}
char	up(unsigned int c, char s)
{
	c = 32;
	if (s >= 'a' && s <= 'z')
	{
		s -= c;
	}
	return (s);
} */
