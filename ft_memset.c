/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 13:59:47 by esnavarr          #+#    #+#             */
/*   Updated: 2025/11/01 16:33:06 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	ft_putstr_fd(char *str, int fd); */

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;

	a = (unsigned char *)b;
	while (len > 0)
	{
		*(a++) = (unsigned char)c;
		len--;
	}
	return (b);
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
