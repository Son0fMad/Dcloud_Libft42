/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcloud <dcloud@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:17:08 by dcloud            #+#    #+#             */
/*   Updated: 2021/10/16 17:59:02 by dcloud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*foot;
	unsigned char	*ball;
	size_t			t;

	foot = (unsigned char *)s1;
	ball = (unsigned char *)s2;
	t = 0;
	while (t < n)
	{
		if (foot[t] != ball[t])
			return ((int)(foot[t] - ball[t]));
		if (n == 0)
			return ((int)n);
		t++;
	}
	return (0);
}
