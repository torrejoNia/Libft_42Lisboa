/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:04:32 by esnavarr          #+#    #+#             */
/*   Updated: 2025/11/10 18:09:20 by esnavarr         ###   ########.fr       */
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
 * @brief Adds a node at the end of a list.
 * @param t_list **lst
 * @paragraph t_list *new
 * @return void
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/*
int	main(void)
{
	t_list *lst = ft_lstnew("A");

	t_list *a = ft_lstnew("1");
	t_list *b = ft_lstnew("2");

	ft_lstadd_back(&lst, a);
	ft_lstadd_back(&lst, b);
	while (lst != NULL)
	{
		ft_putstr_fd(lst->content, 1);
		ft_putchar_fd('\n', 1);
		lst = lst->next;
	}
} */