/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonz3 <dangonz3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:12:10 by dangonz3          #+#    #+#             */
/*   Updated: 2024/04/27 16:33:21 by dangonz3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <ctype.h> */
#include "libft.h"

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (c);
	else
		return (0);
}

/* int	main(void)
{
	char	c;

	c = '3';
	printf("%d\n", ft_isdigit(c));
	printf("%d\n", isdigit(c));
	return (0);
} */
