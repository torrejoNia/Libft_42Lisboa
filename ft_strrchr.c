/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 16:52:17 by esnavarr          #+#    #+#             */
/*   Updated: 2025/11/13 23:46:26 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Finds the last occurrence of a character in a string.
 * @param const char *s
 * @param int c
 * @return char*
 */
char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*res;
	char	cc;

	cc = (char)c;
	res = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == cc)
			res = (char *)&s[i];
		i++;
	}
	if (s[i] == c)
		res = (char *)&s[i];
	return (res);
}

/*
int main (void)
{
	char a;
	a = 'o';
	char* b;

	char s4[] = "hello world";
	b = ft_strrchr(s4, a);
	ft_putchar_fd(*b, 1);
	ft_putstr_fd(b, 1);
	return (0);
} */