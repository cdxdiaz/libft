/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsawatwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:09:41 by wsawatwa          #+#    #+#             */
/*   Updated: 2022/05/28 20:01:51 by wsawatwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*temp;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	temp = (char *)malloc(sizeof(temp) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!temp)
		return (0);
	while (s1[i] != 0)
	{
		temp[i] = s1[i];
		i++;
	}
	while (s2[j] != 0)
	{
		temp[i + j] = s2[j];
		j++;
	}
	temp[i + j] = 0;
	return (temp);
}
