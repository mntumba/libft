/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mntumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 02:28:46 by mntumba           #+#    #+#             */
/*   Updated: 2017/06/21 16:16:00 by mntumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	if (!s1 || !s2 || !(new_str = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	i = -1;
	j = -1;
	while (++i < ft_strlen(s1))
		*(new_str + i) = *(s1 + i);
	while (++j < ft_strlen(s2))
		*(new_str + i++) = *(s2 + j);
	return (new_str);
}
