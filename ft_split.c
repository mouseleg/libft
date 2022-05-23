/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 13:15:38 by rgrollma          #+#    #+#             */
/*   Updated: 2022/05/23 17:39:37 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	count_keep(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	while (s[i] && s[i] == c)
		i++;
	if (s[i] == '\0')
		return (0);
	count = 1;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != '\0')
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
	char	**array;

	i = 0;
	j = 0;
	
}

int main(void)
{
	char	str[] = "#####Diese#######Fun#ktion...#######";
	char	cut;

	cut = '#';
	printf("%s\n", ft_split(str, cut));
}