/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsawatwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:10:25 by wsawatwa          #+#    #+#             */
/*   Updated: 2022/05/28 21:04:04 by wsawatwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size_s;
	char	*str;

	if (s1 == 0 || set == 0)
		return (0);
	while (*s1 != 0 && ft_strchr(set, *s1))
		s1++;
	size_s = ft_strlen(s1);
	while (size_s != 0 && ft_strchr(set, *(s1 + size_s)))
		size_s--;
	str = (char *)malloc(sizeof(char) * (size_s + 1));
	str = ft_substr((char *)s1, 0, size_s + 1);
	return (str);
}
