/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 20:51:18 by rgrollma          #+#    #+#             */
/*   Updated: 2022/05/19 21:01:05 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		srclen;
	char	*dest;

	srclen = 0;
	i = 0;
	while (s[srclen] != '\0')
		srclen++;
	dest = (char *)malloc(sizeof(char) * (srclen + 1));
	if (!dest)
		return (NULL);
	while (i < srclen)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* int main(void)
{	
	char src[] = "WASCOOLES###";
	char *dest;
	dest = ft_strdup(src);
	printf("%s\n", dest);
	return (0);
} */
