/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonz3 <dangonz3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:32:57 by dangonz3          #+#    #+#             */
/*   Updated: 2024/04/25 15:17:06 by dangonz3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	current = lst;
	while (current)
	{
		f(current->content);
		current = current->next;
	}
}

/* void	f(void *str)
{
	char	*strr = (char *)str;
	int		i = 0;

	while (strr[i])
	{
		if (('a' <= strr[i] && strr[i] <= 'z'))
			strr[i] -= ('a' - 'A');
		i++;
	}
}

int	main(void)
{
	t_list	*list = NULL;
	t_list	*node1 = ft_lstnew("Salutations");
	t_list	*node2 = ft_lstnew("Good to be back on the air");
	ft_lstadd_back(&list, node1);
	ft_lstadd_back(&list, node2);
	t_list	*current = list;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	ft_lstiter(list, f);
	current = list;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	return (0);
} */
