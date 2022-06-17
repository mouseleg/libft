/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:55:36 by rgrollma          #+#    #+#             */
/*   Updated: 2022/06/17 15:17:05 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (new)
	{
		new -> content = content;
		new -> next = NULL;
	}
	return (new);
}

/* 
int	main(void)
{
	t_list	*list;
	
	list = ft_lstnew("Hello there everybody\n");
	printf("%s\n", (char *)list->content);
} */
