/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 12:51:02 by esnavarr          #+#    #+#             */
/*   Updated: 2025/10/27 16:48:33 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
			return (1);
	return (0);
}	

/*
int main(void)
{
    char result;

    result = ft_isalpha('H') + '0';
    write(1, &result, 1); 
    write (1, "\n", 1);
    result = ft_isalpha('3') + '0';
    write(1, &result, 1); 
	write (1, "\n", 1);

    return 0;
} */
