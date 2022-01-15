/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcloud <dcloud@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 21:28:39 by dcloud            #+#    #+#             */
/*   Updated: 2021/10/15 16:00:55 by dcloud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*one;
	unsigned char	*two;

	one = (unsigned char *)dst;
	two = (unsigned char *)src;
	if (two < one)
	{
		while (len--)
			one[len] = two[len];
		return (dst);
	}
	ft_memcpy(one, two, len);
	return (dst);
}
