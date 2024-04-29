/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonz3 <dangonz3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 09:15:30 by dangonz3          #+#    #+#             */
/*   Updated: 2024/04/25 13:22:03 by dangonz3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/* int	main(void)
{
	t_list *list = NULL;
	t_list *node1 = ft_lstnew("Nodo 1");
	ft_lstadd_front(&list, node1);
	t_list *node2 = ft_lstnew("Nodo 2");
	ft_lstadd_front(&list, node2);
	t_list *current = list;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	return (0);
} */
