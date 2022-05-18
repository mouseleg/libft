/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 14:52:51 by rgrollma          #+#    #+#             */
/*   Updated: 2022/05/18 14:52:57 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/The memchr() function scans the initial n bytes of the memory area 
pointed to by s for the first instance of c.  Both c and the bytes of
 the memory area pointed to by s are interpreted as unsigned char.
The memchr() and memrchr() functions return a pointer to 
the matching byte or NULL if the character does not occur in the given memory area./
void                ft_memchr(const voids, int c, size_t n)
{
    int                i;
    unsigned char    str;
    unsigned char    x;

    x = (unsigned char)c;
    i = 0;
    str = (unsigned char)s;
    while (n--)
    {
        if (str[i] == x)
            return (str + i);
        i++;
    }
    return (NULL);
}