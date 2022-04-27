/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:31:30 by rgrollma          #+#    #+#             */
/*   Updated: 2022/04/27 13:32:23 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_tolower(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && 'z' >= str[i]))
			return (0);
		i++;
	}
	return (1);
}

/* int	main(void)
{
	printf("%d\n", ft_tolower("jhfdfgzefgahb"));
	return (0);
} */
