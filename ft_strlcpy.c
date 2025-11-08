/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 15:50:33 by esnavarr          #+#    #+#             */
/*   Updated: 2025/10/25 15:55:28 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

/* void	ft_putstr_fd(char *str, int fd);
void	ft_putnbr_fd(int n, int fd); */

size_t	ft_strlen(const char *s);
void	*ft_memcpy(void *dst, const void *src, size_t n);

size_t    ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	
	src_len = ft_strlen(src);
	if (src_len + 1 < dstsize)
		ft_memcpy(dst, src, src_len + 1);
	else if (dstsize != 0)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = 0;
	}
	return (src_len);
}

/*
int	main(void)
{
	char s1[] = "hi";
    char s4[] = "hello world";
	size_t i;
	i = ft_strlcpy(s4, s1, 12);
	ft_putstr_fd(s4, 1);
	ft_putnbr_fd(i, 1);
	return (0);
} */


