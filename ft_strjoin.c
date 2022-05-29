/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsawatwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:09:41 by wsawatwa          #+#    #+#             */
/*   Updated: 2022/05/29 15:00:59 by wsawatwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*temp;

	if (s1 == 0 || s2 == 0)
		return (0);
	temp = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!temp)
		return (0);
	ft_strlcpy(temp, s1, ft_strlen(s1) + 1);
	ft_strlcat(temp + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return (temp);
}
