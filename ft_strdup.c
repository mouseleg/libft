/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 20:51:18 by rgrollma          #+#    #+#             */
/*   Updated: 2022/05/16 22:14:38 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int i;
	int srclen;
	char *cpy;
	
	srclen = 0;
	i = 0;
	while (s[srclen] != '\0') //for malloc, to check length
		srclen++;
	cpy = (char *)malloc(sizeof(char) * (srclen + 1));
	if (!cpy)
		return (NULL);
	while (i < srclen)
	{
		cpy[i] = s[i];
		i++;
	}
	return(cpy);
}

int main(void)
{	
	char src[] = "WASCOOLES###";
	char *cpy;
	cpy = ft_strdup(src);
	printf("%s\n", cpy);
	return (0);
}
