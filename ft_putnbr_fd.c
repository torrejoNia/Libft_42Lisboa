/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:30:27 by esnavarr          #+#    #+#             */
/*   Updated: 2025/10/27 18:04:35 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	long	nb;

	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
		{
			ft_putnbr_fd(nb / 10, fd);
		}
	c = '0' + (nb % 10);
	write(fd, &c, 1);
}

/*
int	main(void)
{
	int	i;

	i = -2147483648;
	ft_putnbr_fd(i, 1);
	return (0);
} */
