/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonz3 <dangonz3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 10:47:51 by dangonz3          #+#    #+#             */
/*   Updated: 2024/04/25 11:26:39 by dangonz3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*counter;

	if (!lst)
		return (NULL);
	counter = lst;
	while (counter->next)
		counter = counter->next;
	return (counter);
}

/* int	main(void)
{
	t_list	*list = NULL;
	t_list	*node1 = ft_lstnew("Salutations");
	t_list	*node2 = ft_lstnew("Good to be back on the air");
	ft_lstadd_front(&list, node2);
	ft_lstadd_front(&list, node1);
	printf("%s\n", (char *)ft_lstlast(list)->content);
	return (0);
} */
