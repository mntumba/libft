/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mntumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 01:41:18 by mntumba           #+#    #+#             */
/*   Updated: 2017/06/21 13:23:11 by mntumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	int				i;
	char			*str_new;

	i = -1;
	if ((!str && !f) || !(str_new = ft_memalloc(ft_strlen(str) + 1)))
		return (NULL);
	while (str[++i])
		str_new[i] = (*f)(i, str[i]);
	str_new[i] = '\0';
	return (str_new);
}
