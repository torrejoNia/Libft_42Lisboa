/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 15:22:54 by esnavarr          #+#    #+#             */
/*   Updated: 2025/11/01 17:35:17 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"
# include <stdio.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	char    *t_src;
    char    *t_dst;
    size_t    i;
	if (!dst && !src)
		return (NULL);
	t_src = (char *) src;
	t_dst = (char *) dst;
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