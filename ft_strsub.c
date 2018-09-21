/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mntumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 02:19:27 by mntumba           #+#    #+#             */
/*   Updated: 2017/06/21 13:29:14 by mntumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str_new;
	unsigned int	i;

	i = -1;
	if (!(str_new = ft_strnew(len)) || !s)
		return (NULL);
	while (++i < len)
		str_new[i] = s[start++];
	return (str_new);
}
