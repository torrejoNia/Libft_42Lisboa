/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 13:59:47 by esnavarr          #+#    #+#             */
/*   Updated: 2025/10/31 18:02:40 by esnavarr         ###   ########.fr       */
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
	char s[10];
	char* s2;
	

	c = 65;
	a = 4;
	s2 = ft_memset(s, 'A', 5);
	ft_putstr_fd(s2, 1);
	return (0);
}
