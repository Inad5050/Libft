/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonz3 <dangonz3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 10:26:04 by dangonz3          #+#    #+#             */
/*   Updated: 2024/04/20 15:51:13 by dangonz3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
#include "libft.h"

void	ft_bzero(void *ptr, size_t size)
{
	char	*str;

	str = (char *)ptr;
	while (size != 0)
	{
		*str = 0;
		str++;
		size--;
	}
}

/* int	main(void)
{
	char	ptr[] = "ola que tal";
	size_t	size = 6;

	bzero(ptr, size);
	printf("%s\n", ptr);
	return (0);
} */
