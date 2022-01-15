/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcloud <dcloud@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:53:22 by dcloud            #+#    #+#             */
/*   Updated: 2021/10/21 17:05:19 by dcloud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_strings(char const *str, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static	char	**free_malloc(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (0);
}

static	char	*stroka(char const *s1, char c)
{
	int		i;
	char	*str;

	i = 0;
	while (s1[i] && s1[i] != c)
		i++;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i] && s1[i] != c)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	str = (char **) malloc(sizeof(char *) * (count_strings(s, c) + 1));
	if (!str)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			str[i] = stroka(s, c);
			if (!str[i])
				return (free_malloc(str));
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	str[i] = NULL;
	return (str);
}
