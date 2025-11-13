/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 13:59:47 by esnavarr          #+#    #+#             */
/*   Updated: 2025/11/13 23:45:35 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Fills memory with a constant byte.
 * @param void *s
 * @param int c
 * @param size_t n
 * @return void* — memory area pointer
 */
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*a;

	a = (unsigned char *)s;
	while (n > 0)
	{
		*(a++) = (unsigned char)c;
		n--;
	}
	return (s);
}

/*
int main (void)
{
	int c;
	char s[10];
	char* s2;

	c = 65;
	s2 = ft_memset(s, 'A', 5);
	ft_putstr_fd(s2, 1);
	return (0);
} */
