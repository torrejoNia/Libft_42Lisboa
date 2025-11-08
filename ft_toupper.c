/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 16:36:25 by esnavarr          #+#    #+#             */
/*   Updated: 2025/10/25 16:37:43 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

/* void	ft_putchar_fd(char c, int fd); */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

/*
int	main(void)
{
	int i;
	int j;

	i = 'a';
	j = ft_toupper(i);
	ft_putchar_fd(j, 1);
} */