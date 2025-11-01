/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 14:56:06 by esnavarr          #+#    #+#             */
/*   Updated: 2025/11/01 16:44:49 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/* void	ft_putnbr_fd(int n, int fd); */

void	ft_bzero(void *s, size_t n)
{
	char	*a;

	a = (char *)s;
	while (n > 0)
	{
		*(a++) = 0;
		n--;
	}
}

/*
int main (void)
{
	int i;
	char s[10];

	i = 0;
	ft_bzero(s, 5);
	while (i <= 5)
	{
		ft_putnbr_fd(s[i], 1);
		i++;
	}
	return (0);
} */