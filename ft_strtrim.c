/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 11:29:25 by rgrollma          #+#    #+#             */
/*   Updated: 2022/07/09 12:15:35 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		i;
	int		j;
	int		str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (ft_strchr(set, s1[i]) && s1[i] != '\0')
		i++;
	j = ft_strlen(s1);
	while (ft_strrchr(set, s1[j - 1]) && s1[i] > 0)
		j--;
	str = j - i;
	if (str < 0)
		return (ft_strdup(""));
	else
		trim = ft_substr(s1, i, str);
	return (trim);
}

/* #include <stdio.h>
int main(void)
{
	char	s1[] = "125867";
	char	set[] = "12765";

	printf("%s\n", ft_strtrim(s1, set));
	return (0);
} */
