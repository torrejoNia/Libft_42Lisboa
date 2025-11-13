/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:07:25 by esnavarr          #+#    #+#             */
/*   Updated: 2025/11/13 23:44:56 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Deletes all nodes and frees the list.
 * @param t_list **lst
 * @param void (*del)(void*)
 * @return void
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}

/*
void	del(void *content)
{
	free(content);
}

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
	ft_lstclear(&lst, del);
	while (lst != NULL)
	{
		ft_putstr_fd(lst->content, 1);
		ft_putchar_fd('\n', 1);
		lst = lst->next;
	}
} */