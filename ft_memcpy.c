/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 15:05:51 by esnavarr          #+#    #+#             */
/*   Updated: 2025/10/31 18:02:34 by esnavarr         ###   ########.fr       */
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

void	ft_putstr_fd(char *str, int fd)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
}

int main (void)
{
	int c;
	size_t a;
	char* s2;
	char* s1;
	char* s3;
	char* s4;
	

	c = 65;
	s4 = NULL;
	a = 4;
	s2 = memcpy(s4, s1, 5);
	s3 = ft_memcpy(s4, s1, 5);
	ft_putstr_fd(s2, 1);
	ft_putstr_fd(s3, 1);
	return (0);
}



