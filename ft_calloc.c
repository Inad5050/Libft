/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonz3 <dangonz3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 11:39:02 by dangonz3          #+#    #+#             */
/*   Updated: 2024/06/19 10:20:11 by dangonz3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;
	char	*temp;

	str = (void *)malloc(count * size);
	if (!str)
		return (NULL);
	temp = str;
	while (size)
	{
		*temp = '0';
		size--;
		temp++;
	}
	return (str);
}
