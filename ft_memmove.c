/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 15:22:54 by esnavarr          #+#    #+#             */
/*   Updated: 2025/11/08 17:47:57 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/* void	ft_putstr_fd(char *str, int fd); */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*t_src;
	unsigned char	*t_dst;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	t_src = (const unsigned char *)src;
	t_dst = (unsigned char *)dst;
	i = 0;
	if (t_dst > t_src)
		while (len-- > 0)
			t_dst[len] = t_src[len];
	else
	{
		while (i < len)
		{
			t_dst[i] = t_src[i];
			i++;
		}
	}
	return (dst);
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