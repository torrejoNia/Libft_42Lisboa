/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 15:05:51 by esnavarr          #+#    #+#             */
/*   Updated: 2025/10/25 15:20:10 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"
# include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char    *tmp_dst;
    unsigned char    *tmp_src;
	
	if (dst == (void *)0 && src == (void *)0)
		return (dst);
	tmp_dst = (unsigned char *) dst;
    tmp_src = (unsigned char *) src;
	while (n > 0)
	{
		*(tmp_dst++) = *(tmp_src++);
		n--;
	}
	return (dst);
}
