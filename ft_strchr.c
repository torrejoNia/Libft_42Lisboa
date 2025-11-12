/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 16:45:10 by esnavarr          #+#    #+#             */
/*   Updated: 2025/11/12 17:04:33 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/* void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd); */

/**
 * @brief Finds the first occurrence of a character in a string.
 * @param const char *s
 * @param int c.
 * @return char*
 */
char	*ft_strchr(const char *s, int c)
{
	int	i;
	char			cc;

	cc = (char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == cc)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == cc)
		return ((char *)&s[i]);
	return (NULL);
}

/*
int main (void)
{
	char a;
	a = 'o';
	char* b;

	char s4[] = "hello world";
	b = ft_strchr(s4, a);
	ft_putchar_fd(*b, 1);
	ft_putstr_fd(b, 1);
	return (0);
} */