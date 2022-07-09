/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:31:30 by rgrollma          #+#    #+#             */
/*   Updated: 2022/07/09 12:21:33 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}

/* #include <stdio.h>
int	main(void)
{
	char	c;

	c = 'A';
	printf("%c\n", ft_tolower(c));
	return (0);
} */
