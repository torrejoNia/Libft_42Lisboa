/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:13:49 by esnavarr          #+#    #+#             */
/*   Updated: 2025/11/15 15:31:23 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Creates a new list by applying a function to each node’s content.
 * @param t_list *lst
 * @param void *(*f)(void*)
 * @param void (*del)(void*)
 * @return t_list*
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*tmp;
	void	*new_content;

	if (!f || !lst || !del)
		return (NULL);
	new_lst = NULL;
	while (lst != NULL)
	{
		new_content = f(lst->content);
		tmp = ft_lstnew(new_content);
		if (!tmp)
		{
			del(new_content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, tmp);
		lst = lst->next;
	}
	return (new_lst);
}
