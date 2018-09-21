/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mntumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 15:42:15 by mntumba           #+#    #+#             */
/*   Updated: 2017/06/21 13:07:36 by mntumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	if ((s = (unsigned char*)src) < (d = (unsigned char*)dst))
		while (len-- > 0)
			*(d + len) = *(s + len);
	else
		while (*s && len-- > 0)
			*d++ = *s++;
	return (dst);
}
