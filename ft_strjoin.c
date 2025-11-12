/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:59:58 by esnavarr          #+#    #+#             */
/*   Updated: 2025/11/12 17:19:10 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Concatenates two strings into a new string.
 * @param const char *s1 - first string
 * @param const char *s2 - second string 
 * @return char* - the new string
 */
char	*ft_strjoin(const char *s1, const char *s2)
{
	char *res;
	int i;
	int j;

	i = 0;
	j = 0;
	if(!s1 || !s2)
		return(NULL);
	res = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (s1[i])
		res[j++] = s1[i++];
	i = 0;
	while (s2[i])
		res[j++] = s2[i];
	return (res);
}

