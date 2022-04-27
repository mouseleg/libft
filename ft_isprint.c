/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:15:29 by rgrollma          #+#    #+#             */
/*   Updated: 2022/04/27 20:34:16 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_isprint(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= ' ' && '~' >= str[i]))
			return (0);
		i++;
	}
	return (1);
}

/* int	main(void)
{
	printf("%d\n", ft_isprint("元気ですか"));
	return (0);
} */