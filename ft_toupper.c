/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:25:36 by rgrollma          #+#    #+#             */
/*   Updated: 2022/05/17 21:24:36 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}

/* int	main(void)
{
	char c = 'a';
	printf("%c\n"); 
	ft_toupper(c));
	return (0); ft_toupper(c); wieso geht das nicht wenn ich dieses Argument eine Zeile nach oben oder unter versetzte?
} 

int	main(void)
{
	char	c = 'a';
	printf("%c\n", ft_toupper(c));
	//ft_toupper(c); wieso geht das nicht wenn ich dieses Argument eine Zeile nach oben oder unter versetzte?
	return (0);
}*/
