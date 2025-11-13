/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 16:00:58 by esnavarr          #+#    #+#             */
/*   Updated: 2025/11/13 23:46:06 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Appends string src to dst, ensuring size limit.
 * @param *dst
 * @param const char *src
 * @param size_t size
 * @return size_t — total length of the string it tried to create.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dst_len >= size)
		dst_len = size;
	if (dst_len == size)
		return (size + src_len);
	if (src_len < size - dst_len)
		ft_memcpy(dst + dst_len, src, src_len + 1);
	else
	{
		ft_memcpy(dst + dst_len, src, size - dst_len - 1);
		dst[size - 1] = '\0';
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