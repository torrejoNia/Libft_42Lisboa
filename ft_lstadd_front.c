/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:55:22 by esnavarr          #+#    #+#             */
/*   Updated: 2025/11/10 18:09:17 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(void *content);
*/

/**
 * @brief Adds a node at the beginning of a list.
 * @param t_list **lst
 * @param t_list *new
 * @return void
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*
int	main(void)
{
	t_list *lst = ft_lstnew("A");

	t_list *a = ft_lstnew("1");
	t_list *b = ft_lstnew("2");

	ft_lstadd_front(&lst, a);
	ft_lstadd_front(&lst, b);
	while (lst != NULL)
	{
		ft_putstr_fd(lst->content, 1);
		ft_putchar_fd('\n', 1);
		lst = lst->next;
	}
} */