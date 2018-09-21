/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mntumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 01:13:17 by mntumba           #+#    #+#             */
/*   Updated: 2017/06/21 13:22:40 by mntumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strmap(char const *str, char (*f)(char))
{
	char			*str_new;
	int				i;

	if ((!str && !f) || !(str_new = ft_memalloc(ft_strlen(str) + 1)))
		return (NULL);
	i = -1;
	while (str[++i])
		str_new[i] = (*f)(str[i]);
	str_new[i] = '\0';
	return (str_new);
}
