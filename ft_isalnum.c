/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonz3 <dangonz3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:43:29 by dangonz3          #+#    #+#             */
/*   Updated: 2024/04/27 16:33:54 by dangonz3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <ctype.h> */
#include "libft.h"

int	ft_isalnum(int c)
{
	if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z')
		|| ('0' <= c && c <= '9'))
		return (c);
	else
		return (0);
}

/* int	main(void)
{
	char	c;

	c = 'T';
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", isalnum(c));
	return (0);
} */
