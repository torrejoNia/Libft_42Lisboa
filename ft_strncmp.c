/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 17:07:25 by esnavarr          #+#    #+#             */
/*   Updated: 2025/11/13 23:46:19 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compares two strings up to n characters.
 * @param const char *s1
 * @param const char *s2
 * @param size_t n
 * @return int - (S1 - S2)
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*
int main (void)
{
	char s1[] = "hi";
	char s2[] = "hello world";
	int i;

	i = ft_strncmp(s1, s2, 2);
	ft_putnbr_fd(i, 1);
	return (0);
} */