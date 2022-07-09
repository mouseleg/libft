/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:13:40 by rgrollma          #+#    #+#             */
/*   Updated: 2022/07/09 11:07:11 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void    del(void *content)
{
    free(content);
} */

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst->content)
		del(lst->content);
	free(lst);
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
    ft_lstdelone(new2, del);
	printf("%s\n", (char *) top->content);
} */
