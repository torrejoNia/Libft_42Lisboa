/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:33:07 by esnavarr          #+#    #+#             */
/*   Updated: 2025/11/08 17:12:12 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	ft_putnbr_fd(int n, int fd); */

int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' && str[i + 1] != '-')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	result = result * sign;
	return (result);
}

/*
int	main(void)
{
	int i;
	char *str = " -8123a4567";
	i = ft_atoi(str);
	ft_putnbr_fd(i, 1);
} */