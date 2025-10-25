/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 13:45:39 by esnavarr          #+#    #+#             */
/*   Updated: 2025/10/25 14:42:22 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"
# include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while(s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int main(void)
{
	const char *s;
	s = "hello";
	printf("%zu", ft_strlen(s));
}
