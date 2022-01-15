/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcloud <dcloud@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:58:17 by dcloud            #+#    #+#             */
/*   Updated: 2021/10/18 18:25:31 by dcloud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int    length;
    unsigned int    i;
    char            *str;

    if (!s || len <= 0 || start >= ft_strlen(s))
        return (NULL);
    length = ft_strlen(s);
    if (length <= start)
        len = 0;
    if (length - start < len)
        len = length - start;
    str = (char *)malloc((len + 1) * sizeof(char));
    if (str == NULL)
        return (NULL);
    i = 0;
    while (s[i] && i < len)
        str[i++] = s[start++];
    str[i] = '\0';
    return (str);
}
