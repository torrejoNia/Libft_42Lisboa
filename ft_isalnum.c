/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 13:02:52 by esnavarr          #+#    #+#             */
/*   Updated: 2025/10/27 17:06:29 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) || c >= 49 && c <= 57)
		return (1);
	return (0);
}

/*
int	main(void)
{
	char	result;

	result = ft_isalnum('-') + '0';
	write(1, &result, 1);
	write(1, "\n", 1);
	result = ft_isalnum('3') + '0';
	write(1, &result, 1);
	write(1, "\n", 1);
	return (0);
} */
