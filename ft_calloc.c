/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcloud <dcloud@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 20:44:39 by dcloud            #+#    #+#             */
/*   Updated: 2021/10/16 21:15:06 by dcloud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	t;

	t = count * size;
	str = NULL;
	str = malloc(t);
	if (!str)
		return (NULL);
	ft_memset(str, 0, t);
	return (str);
}
