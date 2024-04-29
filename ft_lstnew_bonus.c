/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonz3 <dangonz3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 08:19:16 by dangonz3          #+#    #+#             */
/*   Updated: 2024/04/27 11:46:19 by dangonz3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/* int	main(void)
{
	char	str[] = "abcd";
	t_list	*node = ft_lstnew(str);

	if (node)
		printf("%s\n", (char *)(node->content));
	return (0);
} */

/* int	main(void)
{
	int		i = 42;
	t_list	*node = ft_lstnew(&i);

	if (node)
		printf("%d\n", *(int *)(node->content));
	return (0);
} */
