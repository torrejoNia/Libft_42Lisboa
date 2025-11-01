/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 15:05:51 by esnavarr          #+#    #+#             */
/*   Updated: 2025/11/01 17:19:20 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	ft_putstr_fd(char *str, int fd); */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;

	if (dst == (void *)0 && src == (void *)0)
		return (dst);
	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	while (n > 0)
	{
		*(tmp_dst++) = *(tmp_src++);
		n--;
	}
	return (dst);
}

/*
int main (void)
{
	char* s2;
	char* s1;
	char* s3;
	char s4[10];

	s1 = "hello";
	s2 = memcpy(s4, s1, 6);
	s3 = ft_memcpy(s4, s1, 6);
	ft_putstr_fd(s2, 1);
	ft_putstr_fd(s3, 1);
	return (0);
} */
