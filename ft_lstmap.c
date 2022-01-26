/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amantara <amantara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 18:49:59 by amantara          #+#    #+#             */
/*   Updated: 2022/01/16 10:58:10 by amantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *nlist;
	t_list *p;

	if (!f)
		return (NULL);
	nlist = NULL;
	while (lst)
	{
		p = ft_lstnew(f(lst->content));
		if (!p)
		{
			ft_lstclear(&nlist, del);
			return (NULL);
		}
		ft_lstadd_back(&nlist, p);
		lst = lst->next;
	}
	return (nlist);
}
