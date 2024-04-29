/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonz3 <dangonz3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 08:29:15 by dangonz3          #+#    #+#             */
/*   Updated: 2024/04/27 16:33:13 by dangonz3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <ctype.h> */
#include "libft.h"

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (c);
	else
		return (0);
}

/* int	main(void)
{
	char	c;

	c = 'T';
	printf("%d\n", ft_isascii(c));
    printf("%d\n", isascii(c));
	return (0);
} */
