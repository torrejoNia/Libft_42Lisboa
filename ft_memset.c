/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 13:59:47 by esnavarr          #+#    #+#             */
/*   Updated: 2025/10/27 18:12:09 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *a;
	
	a = (unsigned char *) b;
	while (len > 0)
	{
		*(a++) = (unsigned char) c;
		len --;
	}
	return (b);
}
