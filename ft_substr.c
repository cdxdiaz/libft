/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsawatwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:08:55 by wsawatwa          #+#    #+#             */
/*   Updated: 2022/05/29 15:02:49 by wsawatwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (start < ft_strlen(s))
		i = ft_strlen(s) - start;
	if (i > len)
		i = len;
	if (*s == 0 || start > ft_strlen(s))
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!s || !str)
		return (0);
	ft_strlcpy(str, s + start, i + 1);
	return (str);
}
