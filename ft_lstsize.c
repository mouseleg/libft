/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgrollma <rgrollma@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:09:56 by rgrollma          #+#    #+#             */
/*   Updated: 2022/07/09 10:54:38 by rgrollma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

/* 
int	main(void)
{
	char 	str[] = "XYXYXYXYXYXY";
	t_list  *top;
	t_list	*new;
	
	top = malloc(sizeof(t_list));
	top->insight = (void *) str;
	printf("%s\n", (char *)top->insight);
	top->next = ft_lstnew("XXXXXXXX");
	printf("%s\n", (char *)top->next->insight);
	new =	ft_lstnew("Hello XYXYXYXYXYXY");
	printf("%s\n", (char*) new->insight);
	ft_lstadd_front(&top, new);
	printf("%s\n", (char *) top->insight);
	printf("%i\n", ft_lstsize(top));
} */
