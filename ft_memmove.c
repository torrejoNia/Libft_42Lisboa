/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 15:22:54 by esnavarr          #+#    #+#             */
/*   Updated: 2025/11/13 23:45:30 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/**
 * @brief Copies bytes between memory areas (handles overlapping)
 * @param void *dest
 * @param const void *src
 * @param size_t n
 * @return void* — destination pointer
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*t_src;
	unsigned char		*t_dst;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	t_src = (const unsigned char *)src;
	t_dst = (unsigned char *)dest;
	i = 0;
	if (t_dst > t_src)
		while (n-- > 0)
			t_dst[n] = t_src[n];
	else
	{
		while (i < n)
		{
			t_dst[i] = t_src[i];
			i++;
		}
	}
	return (dest);
}

/*
int main (void)
{
	char s1[] = "hi";
	char s4[] = "hello world";
	ft_memmove(s4, s1, 2);
	ft_putstr_fd(s4, 1);
	return (0);
} */