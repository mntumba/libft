/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mntumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/17 12:37:28 by mntumba           #+#    #+#             */
/*   Updated: 2017/06/21 16:20:06 by mntumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static int		wlen(char const *str, char c)
{
	int	len;

	len = 0;
	while (*str == c)
		str++;
	while (str++ && *str != c && *str != '\0')
		len++;
	return (len);
}

static int		wcounter(char const *str, char c)
{
	int		count;

	count = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str != c && *str != '\0')
			count++;
		while (*str != c && *str != '\0')
			str++;
	}
	return (count);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	if (!s || !(tab = (char **)malloc(sizeof(*tab) * (wcounter(s, c) + 1))))
		return (NULL);
	i = -1;
	j = 0;
	while (++i < wcounter(s, c))
	{
		k = 0;
		tab[i] = (!(tab[i] = ft_strnew(wlen(&s[j], c) + 1))) ? NULL : tab[i];
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			tab[i][k++] = s[j++];
		tab[i][k] = '\0';
	}
	tab[i] = 0;
	return (tab);
}
