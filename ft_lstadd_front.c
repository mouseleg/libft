/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:12:17 by rgrollma          #+#    #+#             */
/*   Updated: 2022/07/09 11:15:08 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new && lst)
	{
		new->next = *lst;
		*lst = new;
	}
}

/* 
int	main(void)
{
	char 	str[] = "Huhuu";
	t_list  *top;
	t_list	*new;
	
	top = malloc(sizeof(t_list));
	top->content = (void *) str;
	printf("%s\n", (char *)top->content);
	top->next = ft_lstnew("Hi");
	printf("%s\n", (char *)top->next->content);
	new =	ft_lstnew("YOUU");
	printf("%s\n", (char*) new->content);
	ft_lstadd_front(&top, new);
	printf("%s\n", (char *) top->content);
} */
