/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:21:54 by esnavarr          #+#    #+#             */
/*   Updated: 2025/11/13 21:17:20 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Writes a character to a given file descriptor.
 * @param char c
 * @param int fd - file to write on
 * @return void
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
