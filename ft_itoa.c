/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsawatwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:15:50 by wsawatwa          #+#    #+#             */
/*   Updated: 2022/05/20 16:49:12 by wsawatwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int c)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * 2);
	if (!str)
		return (0);
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
