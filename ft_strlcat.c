/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsawatwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:05:28 by wsawatwa          #+#    #+#             */
/*   Updated: 2022/05/29 00:55:46 by wsawatwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;

	i = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (dstsize < len_dst)
		return (len_src + dstsize);
	else
		len_src += len_dst;
	while (src[i] != 0 && len_dst + i + 1 < dstsize)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = 0;
	return (len_src);
}
