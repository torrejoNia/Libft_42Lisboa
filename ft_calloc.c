/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:33:41 by esnavarr          #+#    #+#             */
/*   Updated: 2025/11/10 15:58:48 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	ft_putnbr_fd(int n, int fd); */

/**
 * @brief Allocates and zeroes memory for an array.
 * @param size_t nmemb
 * @param size_t size
 * @return void* — pointer to allocated memory.
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	tmp = malloc(nmemb * size);
	if (!tmp)
		return (NULL);
	while (i < nmemb * size)
		tmp[i++] = 0;
	return (tmp);
}

/*
int	main(void)
{
	int i;
	char *s;

	i = 0;
	s = ft_calloc(5, 1);
	while (i <= 5)
	{
		ft_putnbr_fd(s[i], 1);
		i++;
	}
	return (0);
} */