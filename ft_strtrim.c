/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mntumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 02:36:49 by mntumba           #+#    #+#             */
/*   Updated: 2017/06/21 13:29:43 by mntumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	if (!s)
		return (NULL);
	i = 0;
	j = ft_strlen((char*)s) - 1;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	if (!(str = (char*)malloc(sizeof(char) * (j - i + 1))))
		return (NULL);
	while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
		j--;
	k = 0;
	while (i <= j)
		str[k++] = s[i++];
	str[k] = '\0';
	return (str);
}
