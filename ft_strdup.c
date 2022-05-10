/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsawatwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 07:13:00 by wsawatwa          #+#    #+#             */
/*   Updated: 2022/05/10 07:53:02 by wsawatwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strdup(char *src)
{
	char	*dst;
	size_t	i;

	i = ft_strlen(src);
	dst = malloc(sizeof(char) * (len + i));
	ft_memcpy(dst, src, i);
	dst[i] = 0;
	return (dst);
}
