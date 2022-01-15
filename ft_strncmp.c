/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcloud <dcloud@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:09:00 by dcloud            #+#    #+#             */
/*   Updated: 2021/10/15 22:55:00 by dcloud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	t;

	t = 0;
	while ((s1[t] || s2[t]) && t < n)
	{
		if (s1[t] != s2[t])
			return ((unsigned char)s1[t] - (unsigned char)s2[t]);
		t++;
	}
	return (0);
}
