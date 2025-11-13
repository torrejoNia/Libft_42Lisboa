/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:59:58 by esnavarr          #+#    #+#             */
/*   Updated: 2025/11/13 23:15:27 by esnavarr         ###   ########.fr       */
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
	char	*concatenated;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	concatenated = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!concatenated)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		concatenated[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		concatenated[i + j] = s2[j];
		j++;
	}
	concatenated[i + j] = '\0';
	return (concatenated);
}

/*
int	main(void)
{
	char	*a;

	a = ft_strjoin("hello", "world");
	ft_putendl_fd(a, 1);
	free(a);
	a = ft_strjoin("hello", "");
	ft_putendl_fd(a, 1);
	free(a);
	a = ft_strjoin("", "world");
	ft_putendl_fd(a, 1);
	free(a);
	a = ft_strjoin("", "");
	ft_putendl_fd(a, 1);
	free(a);
	a = ft_strjoin("hello", NULL);
	ft_putendl_fd(a, 1);
	free(a);
	a = ft_strjoin(NULL, "world");
	ft_putendl_fd(a, 1);
	free(a);
	return (0);
} */
