/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 11:29:25 by rgrollma          #+#    #+#             */
/*   Updated: 2022/05/23 13:52:05 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	slen;
	int		start_trim;
	int		end_trim;

	slen = ft_strlen(s1);
	i = 0;
	start_trim = 0;
	end_trim = 0;
	while (ft_strchr(set, s1[i]))
	{
		start_trim++;
		i++;
	}
	i = 0;
	while (ft_strchr(set, s1[(int)slen - (int)i - 1]))
	{
		end_trim++;
		i++;
	}
	return (ft_substr(s1, (unsigned int)start_trim, slen - start_trim - end_trim));
}

/* #include <stdio.h>
int main(void)
{
	char	s1[] = "125867";
	char	set[] = "12765";

	printf("%s\n", ft_strtrim(s1, set));
	return (0);
} */
