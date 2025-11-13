/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 16:40:25 by esnavarr          #+#    #+#             */
/*   Updated: 2025/11/13 23:46:35 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Converts an uppercase letter to lowercase.
 * @param int c
 * @return int — lowercase equivalent.
 */
int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

/*
int	main(void)
{
	int i;
	int j;

	i = 'A';
	j = ft_tolower(i);
	ft_putchar_fd(j, 1);
} */