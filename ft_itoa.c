/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsawatwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:15:50 by wsawatwa          #+#    #+#             */
/*   Updated: 2022/05/28 22:36:32 by wsawatwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int c)
{
	size_t	len;

	len = 0;
	if (c <= 0)
		len = 1;
	while (c != 0)
	{
		c = c / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int c)
{
	char	*str;
	size_t	len;

	len = ft_len(c);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	str[len--] = 0;
	if (c == -2147483648)
		return (ft_memcpy(str, "-2147483648", 11));
	if (c < 0)
	{
		str[0] = '-';
		str[1] = 0;
		str = ft_strjoin(str, ft_itoa(-c));
	}
	else if (c >= 10)
		str = ft_strjoin(ft_itoa(c / 10), ft_itoa(c % 10));
	else
	{
		str[0] = c + 48;
		str[1] = 0;
	}
	return (str);
}
