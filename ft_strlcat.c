/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcloud <dcloud@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 21:28:34 by dcloud            #+#    #+#             */
/*   Updated: 2021/10/21 17:06:08 by dcloud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	k;
	size_t	f;

	k = 0;
	f = 0;
	while (dst[k] && k < dstsize)
		k++;
	f = k;
	while (src[k - f] && (k + 1 < dstsize))
	{
		dst[k] = src[k - f];
		k++;
	}
	if (f < dstsize)
		dst[k] = '\0';
	return (f + ft_strlen(src));
}
