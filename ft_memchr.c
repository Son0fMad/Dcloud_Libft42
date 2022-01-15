/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcloud <dcloud@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 21:42:36 by dcloud            #+#    #+#             */
/*   Updated: 2021/10/16 17:51:22 by dcloud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*f;

	f = (unsigned char *)str;
	if (n == 0)
		return (NULL);
	while (n--)
	{
		if (*f == (unsigned char) c)
			return (f);
		f++;
	}
	if (c == '\0' && str == '\0')
		return (f);
	return (NULL);
}
