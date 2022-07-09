/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:16:37 by rgrollma          #+#    #+#             */
/*   Updated: 2022/07/09 10:50:16 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*temp;

	map = NULL;
	while (lst != NULL)
	{
		temp = ft_lstnew(NULL);
		if (!temp)
		{
			ft_lstclear(&map, del);
			return (NULL);
		}
		if (lst->content)
			temp->content = f(lst->content);
		ft_lstadd_back(&map, temp);
		lst = lst->next;
	}
	return (map);
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
    ft_lstmap(top, f del);
	printf("%s\n", (char *) top->content);
} */
