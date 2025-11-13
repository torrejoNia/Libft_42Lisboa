/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 15:01:54 by esnavarr          #+#    #+#             */
/*   Updated: 2025/11/13 23:45:22 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compares two memory blocks.
 * @param onst void *s1
 * @param const void *s2
 * @param size_t n
 * @return int — difference between first differing bytes
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	unsigned char		*str2;
	size_t				i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)str1[i] != (unsigned char)str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
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

	i = ft_memcmp(s1, s2, 2);
	ft_putnbr_fd(i, 1);
	return (0);
} */