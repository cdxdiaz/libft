/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsawatwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:11:47 by wsawatwa          #+#    #+#             */
/*   Updated: 2022/05/25 02:47:11 by wsawatwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_words(char const *s, char c)
{
	size_t	n;

	n = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != 0)
			n++;
		while (*s && *s != c)
			s++;
	}
	return (n);
}

static int	len_words(char const *s, char c, size_t i)
{
	size_t	len;

	len = 0;
	while (*(s + i) != c)
	{
		i++;
		len++;
	}
	return (len);
}

static char	**free_all(char **s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	num;
	size_t	len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	num = num_words(s, c);
	tab = (char **)malloc(sizeof(char *) * num + 1);
	if (!tab)
		return (0);
	while (j < num)
	{
		while (s[i] == c)
			i++;
		len = len_words(s, c, i);
		tab[j] = ft_substr(s, i, len);
		if (!tab[j])
			return (free_all(tab));
		i += len;
		j++;
	}
	tab[j] = 0;
	return (tab);
}
