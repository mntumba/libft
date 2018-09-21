/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mntumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 18:46:20 by mntumba           #+#    #+#             */
/*   Updated: 2017/06/21 13:26:17 by mntumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (*little == '\0')
		return ((char *)big);
	--big;
	while (++big && *big != '\0' && len-- >= ft_strlen(little))
		if (*big == *little && ft_memcmp(big, little, ft_strlen(little)) == 0)
			return ((char *)big);
	return (NULL);
}
