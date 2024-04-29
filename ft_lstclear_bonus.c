/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonz3 <dangonz3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:56:21 by dangonz3          #+#    #+#             */
/*   Updated: 2024/04/25 14:31:44 by dangonz3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*counter;
	t_list	*next;

	if (!lst || !del)
		return ;
	counter = *lst;
	while (counter)
	{
		next = counter->next;
		del(counter->content);
		free(counter);
		counter = next;
	}
	*lst = NULL;
}

/* void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*list = NULL;
	t_list	*node1 = ft_lstnew("Nodo1");
	t_list	*node2 = ft_lstnew("Nodo2");
	t_list	*node3 = ft_lstnew("Nodo3");

	ft_lstadd_back(&list, node1);
	ft_lstadd_back(&list, node2);
	ft_lstadd_back(&list, node3);
	t_list	*counter = list;
	while (counter->content)
	{
		printf("%s\n", (char *)counter->content);
		counter = counter->next;
	}
	counter = list;
	while (counter->content)
	{
		ft_lstclear(&list, del);
		counter = counter->next;
	}
	counter = list;
	while (counter->content)
	{
		printf("%s\n", (char *)counter->content);
		counter = counter->next;
	}
	return (0);
} */
