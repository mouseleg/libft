/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 20:44:19 by rgrollma          #+#    #+#             */
/*   Updated: 2022/05/20 10:18:47 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n);

static int	len_count(int n)
{
	int	length;

	length = 1;
	if (n < 0)
	{
		n = n * -1;
		length++;
	}
	while (n /= 10)
	{
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*string;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = len_count(n);
	string = (char *)malloc(sizeof(*string) * (len + 1));
	if (!string)
		return (NULL);
	ft_bzero(string, len + 1);
	if (n < 0)
	{
		string[0] = '-';
		n = n * -1;
	}
	while (n > 9)
	{
		string[len - 1] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	string[len - 1] = (n % 10) + '0';
	return (string);
}

/*#include <stdio.h> 
int	main(void)
{
	printf("%s\n", ft_itoa(-5));
	return (0);
} */
