/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonz3 <dangonz3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 08:29:56 by dangonz3          #+#    #+#             */
/*   Updated: 2024/04/24 18:42:44 by dangonz3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
#include "libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		c = c + ('a' - 'A');
	return (c);
}

/* int	main(void)
{
	int	c ;
	c = 'd';

	printf("%d", ft_tolower(c));
	return (0);
} */
