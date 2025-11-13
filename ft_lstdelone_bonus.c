/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:05:18 by esnavarr          #+#    #+#             */
/*   Updated: 2025/11/13 23:45:02 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Deletes one node using a delete function.
 * @param t_list *lst
 * @param void (*del)(void*)
 * @return void
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*
void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*lst;
	t_list	*a;
	t_list	*b;

	lst = ft_lstnew("A");
	a = ft_lstnew("1");
	b = ft_lstnew("2");
	ft_lstadd_back(&lst, a);
	ft_lstadd_back(&lst, b);
	while (lst != NULL)
	{
		ft_putstr_fd(lst->content, 1);
		ft_putchar_fd('\n', 1);
		lst = lst->next;
	}
	ft_lstdelone(lst, del);
	while (lst != NULL)
	{
		ft_putstr_fd(lst->content, 1);
		ft_putchar_fd('\n', 1);
		lst = lst->next;
	}
} */
