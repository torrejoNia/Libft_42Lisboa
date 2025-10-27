/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 13:43:22 by esnavarr          #+#    #+#             */
/*   Updated: 2025/10/27 17:18:34 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
			return (1);
	return (0);
}

/*
int main(void)
{
    char result;

    result = ft_isprint(128) + '0';
    write(1, &result, 1); 
    write (1, "\n", 1);
    result = ft_isprint('h') + '0';
    write(1, &result, 1); 
	write (1, "\n", 1);

    return 0;
} */