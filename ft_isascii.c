/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 13:09:25 by esnavarr          #+#    #+#             */
/*   Updated: 2025/10/27 17:15:05 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
			return (1);
	return (0);
}

/*
int main(void)
{
    char result;

    result = ft_isascii(128) + '0';
    write(1, &result, 1); 
    write (1, "\n", 1);
    result = ft_isascii('3') + '0';
    write(1, &result, 1); 
	write (1, "\n", 1);

    return 0;
} */