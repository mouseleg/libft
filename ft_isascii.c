/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 00:44:57 by rgrollma          #+#    #+#             */
/*   Updated: 2022/05/18 19:50:10 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include <ctype.h>
#include "libft.h"

int	ft_isascii(int c)
{
	while (c >= ' ' && c <= '~')
	{
		if (!(c >= ' ' && '~' >= c))
			return (0);
		c++;
	}
	return (1);
}

/* int main(void)
{ 
  	printf("%d    ", 'c');
    if (ft_isascii('c'))
	{
         printf("is the ascii value of the ascii character %c\n", 'c');
	}	
	else
	{
         printf("non ASCII character\n");
   	}
   return 0;
} */
