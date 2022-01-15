/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcloud <dcloud@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 20:45:22 by dcloud            #+#    #+#             */
/*   Updated: 2021/10/16 21:49:13 by dcloud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*str;
	int		i;

	i = ft_strlen(src);
	str = NULL;
	str = (char *)malloc(i + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, src, i + 1);
	return (str);
}
