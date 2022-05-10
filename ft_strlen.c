/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 20:32:46 by rgrollma          #+#    #+#             */
/*   Updated: 2022/05/01 19:21:58 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

/* #include <stddef.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i; //decalring the variable int i

	i = 0; //setting i to 0
	while (*(str + i) != '\0')
	//why is there a *pointer in front of the brackets?
	//whould *(str[i]) work also? no, but (str[i] != '\0') works
	{
		i++;
		// iterate through the string
	}
	return (i); //return statement, return the values of the index of the string
}
 */
/* int	main(void)
{
	char	*str;

	str = "15_Characters..";
	printf("String_with_15_chars (15): %d\n", ft_strlen(str));
} */
