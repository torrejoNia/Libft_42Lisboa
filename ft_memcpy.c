/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 15:05:51 by esnavarr          #+#    #+#             */
/*   Updated: 2025/11/10 18:13:15 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	ft_putstr_fd(char *str, int fd); */

/**
 * @brief Copies bytes from one memory area to another (non-overlapping).
 * @param void *dest
 * @param const void *src
 * @param size_t n
 * @return oid* — destination pointer
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*tmp_dst;
	const unsigned char	*tmp_src;

	if (dest == (void *)0 && src == (void *)0)
		return (dest);
	tmp_dst = (unsigned char *)dest;
	tmp_src = (unsigned char *)src;
	while (n > 0)
	{
		*(tmp_dst++) = *(tmp_src++);
		n--;
	}
	return (dest);
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
