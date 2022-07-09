/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 00:44:57 by rgrollma          #+#    #+#             */
/*   Updated: 2022/07/09 12:19:42 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
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
