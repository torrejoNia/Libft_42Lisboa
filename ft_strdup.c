/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:50:19 by esnavarr          #+#    #+#             */
/*   Updated: 2025/11/13 23:45:55 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Duplicates a string.
 * @param const char *s.
 * @return char* — newly allocated duplicate.
 */
char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	i;

	dest = (char *)malloc(ft_strlen(s) + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

/*
int main (void)
{
	char *src = "hello world";
	char *des = ft_strdup(src);

	write(1, des, 12);
} */