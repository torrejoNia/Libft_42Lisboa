/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 16:00:58 by esnavarr          #+#    #+#             */
/*   Updated: 2025/10/25 16:04:51 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	ft_putstr_fd(char *str, int fd);
void	ft_putnbr_fd(int n, int fd); */

size_t	ft_strlen(const char *s);
void	*ft_memcpy(void *dst, const void *src, size_t n);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t src_len;
	size_t dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dst_len >= dstsize)
		dst_len = dstsize;
	if (dst_len == dstsize)
		return (dstsize + src_len);
	if (src_len < dstsize - dst_len)
		ft_memcpy(dst + dst_len, src, src_len + 1);
	else
	{
		ft_memcpy(dst + dst_len, src, dstsize - dst_len - 1);
		dst[dstsize - 1] = '\0';
	}
	return (dst_len + src_len);
}

/*
int	main(void)
{
	char s1[] = "hi";
    char s4[15] = "hello world";
	size_t i;
	i = ft_strlcat(s4, s1, 15);
	ft_putstr_fd(s4, 1);
	ft_putnbr_fd(i, 1);
	return (0);
} */