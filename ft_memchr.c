/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 17:08:22 by esnavarr          #+#    #+#             */
/*   Updated: 2025/10/25 17:13:53 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
    size_t i;
    unsigned char uc;
	
	str = (unsigned char *) s;
    uc = (unsigned char) c;
    i = 0;
	while (i < n)
	{
		if (str[i] == uc)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
