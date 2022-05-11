/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsawatwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 07:34:48 by wsawatwa          #+#    #+#             */
/*   Updated: 2022/05/11 17:25:36 by wsawatwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len_s;

	len_s = ft_strlen(s) + 1 ;
	while (len_s--)
	{
		if (s[len_s] == c)
			return ((char *)&s[len_s]);
	}
	return (0);
}

/*	temp = 0;
	while (*s != 0)
	{
		if (*s == c)
			temp = s;
		s++;
	}
	return (temp);
}*/
