/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:49:53 by esnavarr          #+#    #+#             */
/*   Updated: 2025/11/13 21:14:56 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Searches for a substring in a string within n characters.
 * @param const char *big
 * @param const char *little
 * @param size_t len - compara until this
 * @return char* — pointer to first match or NULL.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == 0)
		return ((char *)big);
	while (big[i] && i < len)
	{
		while (big[i + j] == little[j] && big[i + j] && i + j < len)
		{
			j++;
			if (little[j] == 0)
				return ((char *)big + i);
		}
		i++;
		j = 0;
	}
	return (0);
}
