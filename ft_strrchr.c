/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcloud <dcloud@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:08:57 by dcloud            #+#    #+#             */
/*   Updated: 2021/10/15 21:43:27 by dcloud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*end;

	end = (unsigned char *)s;
	while (*end)
		end++;
	while (end != (unsigned char *)s)
	{
		if (*end == (unsigned char)c)
			return ((char *)end);
		else
			end--;
	}
	if (*end == (unsigned char)c)
		return ((char *)end);
	return (NULL);
}
