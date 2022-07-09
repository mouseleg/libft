/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:14:24 by rgrollma          #+#    #+#             */
/*   Updated: 2022/07/09 11:12:45 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	*f(void *content)
{
	ft_strlen(content);
} */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{	
		if (lst->content)
			f(lst->content);
		lst = lst->next;
	}
}

/* 

int	main(void)
{
	t_list  *top;
	t_list	*new;
	t_list	*new1;
	t_list	*new2;
	
	top = ft_lstnew(ft_strdup("This is the"));
	new =	ft_lstnew(ft_strdup("test"));
	new1 =	ft_lstnew(ft_strdup("test1"));
	new2 =	ft_lstnew(ft_strdup("test2"));
	printf("%s\n", (char*) new->content);
	ft_lstadd_back(&top, new);
	ft_lstadd_back(&top, new1);
	ft_lstadd_back(&top, new2);
    ft_lstiteri(new2, f);
	printf("%s\n", (char *) top->content);
} */
