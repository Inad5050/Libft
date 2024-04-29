/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonz3 <dangonz3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:27:44 by dangonz3          #+#    #+#             */
/*   Updated: 2024/04/24 18:23:34 by dangonz3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	void			*ptr;
	unsigned long	i;
	unsigned char	*p;

	i = 0;
	ptr = (void *)malloc(num_elements * element_size);
	if (ptr == NULL)
		return (NULL);
	p = ptr;
	while (i < (num_elements * element_size))
	{
		p[i] = 0;
		i++;
	}
	return (ptr);
}

/* int	main(void)
{
	size_t	num_elements = 10;
	size_t	element_size = sizeof(int);

	printf("%s\n", ft_calloc(num_elements, element_size));
	return (0);
} */
