/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcloud <dcloud@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:29:17 by dcloud            #+#    #+#             */
/*   Updated: 2021/10/21 17:05:59 by dcloud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		ls1;
	int		ls2;
	char	*res;
	int		i;

	if ((s1) && (s2))
	{
		i = -1;
		ls1 = ft_strlen(s1);
		ls2 = ft_strlen(s2);
		res = (char *)malloc((ls1 + ls2 + 1) * sizeof(char));
		if (res == NULL)
			return (NULL);
		while (s1[++i])
			res[i] = s1[i];
		i = -1;
		while (s2[++i])
		{
			res[ls1] = s2[i];
			ls1++;
		}
		res[ls1] = '\0';
		return (res);
	}
	return (NULL);
}
