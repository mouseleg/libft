/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 00:54:49 by rgrollma          #+#    #+#             */
/*   Updated: 2022/07/09 12:21:23 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	slen;
	char	*substr;

	i = 0;
	slen = 0;
	while (s[slen] != '\0')
	slen++;
	if (start >= slen)
		return ("\0");
	if (len > slen)
		len = slen - start;
	substr = (char *)malloc (sizeof (char) * (len + 1));
	if (!substr)
		return (NULL);
	while (i < len)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return ((char *)substr);
}

/* int main (void)
{	
	char s[] = "";

	unsigned int start = 1;
	int len = 40;
	
	printf("%s\n", ft_substr(s, start, len));
	return (0);
} */
