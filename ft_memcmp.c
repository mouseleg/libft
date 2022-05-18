/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 14:55:24 by rgrollma          #+#    #+#             */
/*   Updated: 2022/05/18 14:55:49 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int memcmp(const void s1, const voids2, size_t n)
{
    unsigned char ptr1;
    unsigned charptr2;
    ptr1 = (unsigned char )s1;
    ptr2 = (unsigned char)s2;
    int i = 0;
    while (n--)
    {
       if (ptr1[i] != ptr2[i])
       return(ptr1[i]-ptr2[i]);
    i ++;
    }
    return (0);
}

#include <string.h>
 #include"libft.h"

 void memcpy(voiddest, const void src, size_t n)
 {
     chardest_address;
     const char *src_address;
     size_t index;
     dest_address=dest;
     src_address = src;
     index = 0;
     while(index<n)
     {
         dest_address[index] = src_address[index];
         index ++;
     }
     return(dest);
 }
