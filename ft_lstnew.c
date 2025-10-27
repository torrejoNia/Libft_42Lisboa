/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:54:18 by esnavarr          #+#    #+#             */
/*   Updated: 2025/10/27 15:54:52 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *elem;
    
    elem = malloc(sizeof(t_list));
    if (!elem)
        return (NULL);
    elem->content = content;
    elem->next = NULL;
    return (elem);
}
