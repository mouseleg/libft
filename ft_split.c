/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 13:15:38 by rgrollma          #+#    #+#             */
/*   Updated: 2022/05/23 13:26:12 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_split(char const *s, char c)
{
	
}

int main(void)
{
	char	str[] = "#####Diese#######Fun#ktion...#######";
	char	cut;

	cut = '#';
	printf("%s\n", ft_split(str, cut));
}