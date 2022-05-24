/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 13:15:38 by rgrollma          #+#    #+#             */
/*   Updated: 2022/05/24 18:28:21 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_keep(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	if ((s == 0) || (s[0] == '\0'))
		return (0);
	count = 1;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		begin;
	char	**cutstring;

	begin = 0;
	cutstring = (char **)ft_calloc(sizeof(char *), (count_keep(s, c) + 1));
	if (!cutstring || !s)
		return (NULL);
	i = 0;
	j = 0;
	while (s[j])
	{
		while (s[j] == c)
			j++;
		i = j;
		while (s[j] != c && s[j] != '\0')
			j++;
		if (i != j)
		{
			cutstring[begin] = ft_substr(s, i, (j - i));
			begin++;
		}
	}
	return (cutstring);
}

/* #include <stdio.h>
//Zeile 26 && s[i + 1] != '\0')
int main(void)
{
	char	str[] = "#####Diese#######Fun#ktion...#######";
	char	cut;

	cut = '#';
	printf("%s\n", ft_split(str, cut));
} */