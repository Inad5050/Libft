/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonz3 <dangonz3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 08:55:40 by dangonz3          #+#    #+#             */
/*   Updated: 2024/04/22 10:58:14 by dangonz3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
#include "libft.h"

void	*ft_memset(void *ptr, int initial_value, size_t size)
{
	unsigned char	*temporary;

	temporary = (unsigned char *)ptr;
	while (size != 0)
	{
		*temporary = (unsigned char) initial_value;
		temporary++;
		size--;
	}
	return (ptr);
}

/* int	main(void)
{
	char	ptr[] = "12345";
	int	initial_value = 0;
	size_t	size = 6;
	char	backup = *ptr;
	size_t	i = 0;

	ft_memset(ptr, initial_value, size);
	while (i < size)
	{
		printf("%c\n", backup);
		i++;
	}
	return (0);
} */
