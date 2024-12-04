/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikkayma <mikkayma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:21:38 by mikkayma          #+#    #+#             */
/*   Updated: 2024/10/22 11:24:14 by mikkayma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newnode;
	void	*new_content;

	newlist = NULL;
	while (lst != NULL)
	{
		new_content = (*f)(lst->content);
		if (!new_content)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		newnode = ft_lstnew(new_content);
		if (!newnode)
		{
			ft_lstclear(&newlist, del);
			del(new_content);
			return (NULL);
		}
		ft_lstadd_back(&newlist, newnode);
		lst = lst->next;
	}
	return (newlist);
}
