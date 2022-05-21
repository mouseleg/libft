/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 15:23:33 by rgrollma          #+#    #+#             */
/*   Updated: 2022/05/21 18:59:00 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*newstring;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	newstring = (char *) malloc (ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!newstring)
		return (0);
	while (s1[i] != '\0')
	{
		newstring[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		newstring[i + j] = s2[j];
		j++;
	}
	newstring[i + j] = '\0';
	return (newstring);
}

/* #include <stdio.h>
int main (void)
{
	char	prefix[] = "String";
	char	suffix[] = " join";
	char	*rv;

	rv = ft_strjoin(prefix, suffix);
	printf("%s\n", rv);
} */
