/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsawatwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 07:13:00 by wsawatwa          #+#    #+#             */
/*   Updated: 2022/05/10 09:21:53 by wsawatwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strdup(char *s1)
{
	char	*s2;
	size_t	len;

	len = ft_strlen(s1);
	s2 = malloc(sizeof(char) * (len + 1));
	ft_memcpy(s2, s1, len);
	s2[i] = 0;
	return (s2);
}