/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsawatwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:15:50 by wsawatwa          #+#    #+#             */
/*   Updated: 2022/05/29 00:13:48 by wsawatwa         ###   ########.fr       */
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

static int	absolute_nbr(int c)
{
	if (c < 0)
		return (-c);
	return (c);
}

char	*ft_itoa(int c)
{
	char	*result;
	size_t	len;

	len = ft_len(c);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (0);
	result[len--] = 0;
	if (c < 0)
		result[0] = '-';
	else if (c == 0)
		result[0] = '0';
	while (c != 0)
	{
		result[len] = absolute_nbr(c % 10) + '0';
		c = c / 10;
		len--;
	}
	return (result);
}
