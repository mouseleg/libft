/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 00:54:49 by rgrollma          #+#    #+#             */
/*   Updated: 2022/05/17 18:15:57 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"


char	 *ft_substr(char const *s, unsigned int start, size_t len) //variable size_t = the largest unsigned int possible
{
	size_t	i;
	size_t slen;
	char	*substr; //char pointer substring, output string

	i = 0;
	//slen = ft_strlen(s);
	slen = 0;
	while (s[slen] != '\0')//size of src
	slen++;	
	if (start >= slen)//edge case empty string
		return ("\0"); //"" because we return a string strdup
	if (len > slen)
        len = slen - start;
	substr = (char *)malloc(sizeof(char) * (len + 1)); //substr = (char *)malloc the size of the substr: substr multply it with len +1(+1 for '\0’)
	 //substr gets provided storage space via malloc
	if (!substr)//evrey time we use malloc we need to put this syntax, if there is no memory
		return (NULL); //edge cases if there is no substr or no source
	while (i < len) //w - loop runs as long as we iterate through the source s[start]till '\0' and is smaller than the len  
	{
		substr[i] = s[start]; //substr gets the values of the start string
		i++; //iterate (size_t because we might have to iterate through a long string)
		start++; //iterate through the index of s[start]
	}
	substr[i] = '\0'; //give substring a '\0’
	return ((char *)substr); //give back substr why return value with typecast?
}

int main (void)
{	
	char s[] = "";// s gets a value
	//char *substr[10]; what happens if the size of the substr is bigger than s??

	unsigned int start = 1; //empty string, like only '\0', if start is bigger than src; if src is 2 --> len can only be 1
	int len = 40; //if len 400 when start is after also empty str; len + start is bigger len of s len = s - start --> one more byte for null char;
	
	printf("%s\n", ft_substr(s, start, len));
	return (0);
}
