/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:10:08 by rgrollma          #+#    #+#             */
/*   Updated: 2022/07/09 11:16:13 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*first;

	if (lst && !(*lst) && new)
		(*lst) = new;
	else if ((*lst) && new && lst)
	{
		first = *lst;
		while ((*lst)->next != NULL)
			(*lst) = (*lst)->next;
		(*lst)->next = new;
		*(lst) = first;
	}
}

/* 
int	main(void)
{
	t_list  *top;
	t_list	*new;
	t_list	*new1;
	t_list	*new2;
	
	top = ft_lstnew("This is the");
	new =	ft_lstnew("test");
	new1 =	ft_lstnew("test1");
	new2 =	ft_lstnew("test2");
	printf("%s\n", (char*) new->content);
	ft_lstadd_back(&top, new);
	ft_lstadd_back(&top, new1);
	ft_lstadd_back(&top, new2);
	printf("%s\n", (char *) top->content);
} */
