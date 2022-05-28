/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsawatwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:07:14 by wsawatwa          #+#    #+#             */
/*   Updated: 2022/05/28 19:49:11 by wsawatwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t len_needle;

	i = 0;
	len_needle = ft_strlen(needle);
	if (haystack == needle || len_needle == 0)
		return ((char *)haystack);
	while (i < len && haystack[i] != 0)
	{
		j = 0;
		while (i + j < len && haystack[i + j] == needle[j] && needle[j] != 0)
			j++;
		if (needle[j] == 0)
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}
