/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsawatwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 20:10:03 by wsawatwa          #+#    #+#             */
/*   Updated: 2022/05/29 00:56:05 by wsawatwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (src_len < dstsize)
		ft_memcpy(dest, src, src_len + 1);
	else if (dstsize)
	{
		ft_memcpy(dest, src, dstsize - 1);
		dest[dstsize - 1] = 0;
	}
	return (ft_strlen(src));
}
