/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonz3 <dangonz3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 08:31:54 by dangonz3          #+#    #+#             */
/*   Updated: 2024/04/22 18:01:17 by dangonz3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
/* #include <string.h> */
#include "libft.h"

unsigned long	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/* int	main(void)
{
	char	str[] = "ola que tal";

	printf("%lu\n", ft_strlen(str));
	printf("%lu\n", strlen(str));
	return (0);
} */
