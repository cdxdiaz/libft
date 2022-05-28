/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsawatwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:11:47 by wsawatwa          #+#    #+#             */
/*   Updated: 2022/05/28 22:09:02 by wsawatwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_words(char const *s, char c)
{
	unsigned int	is_word;
	unsigned int	i;

	is_word = 0;
	i = 0;
	while (*s)
	{
		if (is_word == 0 && *s != c)
		{
			is_word = 1;
			i++;
		}
		else if (is_word == 1 && *s == c)
			is_word = 0;
		s++;
	}
	return (i);
}

static int	len_words(char const *s, char c, unsigned int i)
{
	unsigned int	len;

	len = 0;
	while (s[i] != c && s[i] != 0)
	{
		i++;
		len++;
	}
	return (len);
}

static char	**free_all(char **s)
{
	unsigned int	i;

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
	tab = (char **)malloc(sizeof(char *) * (num + 1));
	if (!tab)
		return (0);
	while (j < num)
	{
		while (s[i] == c)
			i++;
		len = len_words(s, c, i);
		tab[j] = ft_substr(s, i, len);
		if (!tab[j])
			return (0);
		i += len;
		j++;
	}
	tab[j] = 0;
	return (tab);
}
