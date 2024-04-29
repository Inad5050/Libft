/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonz3 <dangonz3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 08:31:54 by dangonz3          #+#    #+#             */
/*   Updated: 2024/04/27 16:33:29 by dangonz3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <ctype.h> */
#include "libft.h"

int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
		return (c);
	else
		return (0);
}

/* int	main(void)
{
	char	c;

	c = 'T';
	printf("%d\n", ft_isprint(c));
	printf("%d\n", isprint(c));
	return (0);
} */
