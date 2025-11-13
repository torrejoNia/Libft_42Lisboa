/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 15:50:33 by esnavarr          #+#    #+#             */
/*   Updated: 2025/11/13 23:46:10 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies a string into a destination with size limit.
 * @param char *dst
 * @param const char *src
 * @param size_t size.
 * @return size_t — length of source string.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (src_len + 1 < size)
		ft_memcpy(dst, src, src_len + 1);
	else if (size != 0)
	{
		ft_memcpy(dst, src, size - 1);
		dst[size - 1] = 0;
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
