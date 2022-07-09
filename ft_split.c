/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 13:15:38 by rgrollma          #+#    #+#             */
/*   Updated: 2022/07/09 12:34:30 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if ((s == 0) || (s[0] == '\0'))
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
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

	i = 0;
	j = 0;
	cutstring = (char **)ft_calloc(sizeof(char *), (word_count(s, c) + 1));
	if (!cutstring || !s)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		begin = i;
		while (s[i] && s[i] != c)
			i++;
		if (begin != i)
		{
			cutstring[j] = ft_substr(s, begin, i - begin);
			j++;
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