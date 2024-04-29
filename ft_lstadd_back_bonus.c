/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonz3 <dangonz3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 11:30:26 by dangonz3          #+#    #+#             */
/*   Updated: 2024/04/25 12:40:23 by dangonz3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!*lst)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}

/* int	main(void)
{
	t_list *list = NULL;
	t_list *node1 = ft_lstnew("Nodo 1");
	t_list *node2 = ft_lstnew("Nodo 2");
	ft_lstadd_front(&list, node2);
	ft_lstadd_front(&list, node1);
	t_list *node3 = ft_lstnew("Nodo 3");
	ft_lstadd_back(&list, node3);
	while (list)
	{
		printf("%s\n", (char *)list->content);
		list = list->next;
	}
	return (0);
} */
