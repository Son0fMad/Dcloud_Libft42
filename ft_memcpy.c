/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcloud <dcloud@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 19:01:13 by dcloud            #+#    #+#             */
/*   Updated: 2021/10/15 16:04:08 by dcloud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*one;
	unsigned char	*two;

	if (dst == NULL && src == NULL)
		return (0);
	one = (unsigned char *)dst;
	two = (unsigned char *)src;
	while (n > 0)
	{
		*one++ = *two++;
		n--;
	}
	return (dst);
}
