/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:04:32 by esnavarr          #+#    #+#             */
/*   Updated: 2025/11/13 23:44:44 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Adds a node at the end of a list.
 * @param t_list **lst
 * @paragraph t_list *new
 * @return void
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp = ft_lstlast(*lst);
	temp->next = new;
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