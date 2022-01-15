/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcloud <dcloud@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:53:02 by dcloud            #+#    #+#             */
/*   Updated: 2021/10/19 21:56:37 by dcloud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_size_num(int n)
{
	int	length;

	length = 0;
	if (n <= 0)
		length++;
	while (n)
	{
		length++;
		n /= 10;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*str;
	long	numb;

	size = ft_size_num(n);
	numb = n;
	str = malloc(sizeof(char) * size + 1);
	if (str == NULL)
		return (NULL);
	if (numb < 0)
	{
		str[0] = '-';
		numb *= -1;
	}
	if (numb == 0)
		str[0] = '0';
	str[size--] = '\0';
	while (numb)
	{
		str[size--] = numb % 10 + '0';
		numb = numb / 10;
	}
	return (str);
}
