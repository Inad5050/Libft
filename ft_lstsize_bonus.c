/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonz3 <dangonz3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 10:24:36 by dangonz3          #+#    #+#             */
/*   Updated: 2024/04/25 10:46:31 by dangonz3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*counter;

	i = 0;
	counter = lst;
	while (counter)
	{
		i++;
		counter = counter->next;
	}
	return (i);
}

/* int	main(void)
{
	t_list	*lst = NULL;
	t_list	*node1 = ft_lstnew("Hola");
	ft_lstadd_front(&lst, node1);
	t_list	*node2 = ft_lstnew("que tal?");
	ft_lstadd_front(&lst, node2);

	printf("%d\n", ft_lstsize(lst));
} */
