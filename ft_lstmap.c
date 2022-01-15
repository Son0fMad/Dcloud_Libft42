/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcloud <dcloud@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 23:19:22 by dcloud            #+#    #+#             */
/*   Updated: 2021/10/20 23:32:18 by dcloud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_book;

	new_list = 0;
	new_book = 0;
	while (lst)
	{
		new_list = ft_lstnew((f)(lst->content));
		if (new_list == NULL)
		{
			ft_lstclear(&new_book, del);
			return (NULL);
		}
		ft_lstadd_back(&new_book, new_list);
		lst = lst->next;
	}
	return (new_book);
}
