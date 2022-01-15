/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcloud <dcloud@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 23:49:43 by dcloud            #+#    #+#             */
/*   Updated: 2021/10/20 00:03:26 by dcloud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tuta;
	t_list	*tama;

	if (!lst || !del)
		return ;
	else
	{
		tuta = *lst;
		while (tuta)
		{
			tama = tuta->next;
			(del)(tuta->content);
			free(tuta);
			tuta = tama;
		}
		*lst = NULL;
	}
}
