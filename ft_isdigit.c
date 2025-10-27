/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 12:54:44 by esnavarr          #+#    #+#             */
/*   Updated: 2025/10/27 16:56:30 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 49 && c <= 57)
			return (1);
	return (0);
}

/* int main(void)
{
    char result;

    result = ft_isdigit('H') + '0';
    write(1, &result, 1); 
    write (1, "\n", 1);
    result = ft_isdigit('3') + '0';
    write(1, &result, 1); 
	write (1, "\n", 1);

    return 0;
} */