/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 17:08:22 by esnavarr          #+#    #+#             */
/*   Updated: 2025/11/10 18:10:19 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd); */

/**
 * @brief Searches for a byte in a memory block.
 * @param const void *s
 * @param int c
 * @param size_t n
 * @return void* — pointer to first occurrence or NULL
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t				i;
	unsigned char		uc;

	str = (unsigned char *)s;
	uc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == uc)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

/*
int main (void)
{
	char a;
	a = 'o';
	char* b;

	char s4[] = "hello world";
	b = ft_memchr(s4, a, 10);
	ft_putchar_fd(*b, 1);
	ft_putstr_fd(b, 1);
	return (0);
} */
