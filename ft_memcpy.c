/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 20:32:58 by rgrollma          #+#    #+#             */
/*   Updated: 2022/04/28 20:56:37 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_memcpy(char *dest, char *src)
{	
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*  int	main(void)
{
	char	src[] = "copy this";
    char    dest[100];

	ft_memcpy(dest, src);
    printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	return (0);
} 
 */

/* int main()
{
    char src[] = "copy this!";
    char dest[100];

    char *dest_ptr = memcpy(dest, src, strlen(src) + 1);

    printf("src: %s\n", src);
    printf("dest: %s\n", dest);

    printf("dest_ptr: %p", dest_ptr);
    printf("dest: %p\n", dest);

    return (0);
}
 */