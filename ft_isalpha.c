/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonz3 <dangonz3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:43:29 by dangonz3          #+#    #+#             */
/*   Updated: 2024/04/27 16:33:05 by dangonz3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <ctype.h> */
#include "libft.h"

int	ft_isalpha(int c)
{
	if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
		return (c);
	return (0);
}

/* int	main(void)
{
	char	c;

	c = 'T';
	printf("%d\n", ft_isalpha(c));
	printf("%d\n", isalpha(c));
	return (0);
} */
