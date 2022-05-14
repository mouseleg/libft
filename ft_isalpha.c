/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:45:21 by rgrollma          #+#    #+#             */
/*   Updated: 2022/05/13 13:54:39 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

int	ft_isalpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 'A' && 'Z' >= str[i]) || \
		(str[i] >= 'a' && 'z' >= str[i])))
			return (0);
		i++;
	}
	return (1);
}

 int	main(void)
{
	printf("%d\n", ft_isalpha(""));
	return (0);
}
