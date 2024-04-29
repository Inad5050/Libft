/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangonz3 <dangonz3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:22:59 by dangonz3          #+#    #+#             */
/*   Updated: 2024/04/27 14:56:26 by dangonz3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*str;
	size_t				i;
	unsigned long int	startt;

	i = 0;
	startt = start;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	else if (startt + len > ft_strlen(s))
		len = ft_strlen(s) - startt;
	str = ft_calloc(len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = s[startt + i];
		i++;
	}
	return (str);
}

/* int	main(void)
{
	char *str = ft_substr("12345", 4, 4);

	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
	return (0);
} */
