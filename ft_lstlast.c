/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:15:55 by rgrollma          #+#    #+#             */
/*   Updated: 2022/07/09 11:17:47 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst)
	{
		while (lst->next != NULL)
		{
			lst = lst->next;
		}
	}
	return (lst);
}

/* 

int	main(void)
{
	char 	str[] = "Where";
	t_list  *top;
	t_list	*new;
	
	top = malloc(sizeof(t_list));
	top->content = (void *) str;
	printf("%s\n", (char *)top->content);
	top->next = ft_lstnew("Yo");
	printf("%s\n", (char *)top->next->content);
	new =	ft_lstnew("HEREEEE");
	printf("%s\n", (char*) new->content);
	ft_lstadd_front(&top, new);
	printf("%s\n", (char *) top->content);
	printf("%p\n, %s\n", ft_lstlast(top), top->content);
} */
