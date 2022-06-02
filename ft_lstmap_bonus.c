/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenesca <amenesca@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 15:19:24 by amenesca          #+#    #+#             */
/*   Updated: 2022/06/02 15:50:27 by amenesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*temp;

	list = (t_list *) malloc(sizeof(lst));
	if (!lst || !list || !f || !del)
		return ;
	while (lst)
	{
		list->content = f(lst->content);
		lst = lst->next;
		list->next = lst;

	}
	return(list);
}
