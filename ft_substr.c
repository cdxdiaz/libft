/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsawatwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:08:55 by wsawatwa          #+#    #+#             */
/*   Updated: 2022/05/28 20:00:57 by wsawatwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (s == 0)
		return (0);

	str = (char *)malloc(sizeof(char) * (len +1));
	if (!str)
		return (0);
	while (i < len && start + i < ft_strlen(s))
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = 0;
	return (str);
}
