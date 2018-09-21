/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mntumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 12:28:31 by mntumba           #+#    #+#             */
/*   Updated: 2017/06/21 13:04:52 by mntumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*d;
	char	*s;

	d = (char*)dst;
	s = (char*)src;
	--s;
	while (++s && n-- > 0)
	{
		*d++ = *s;
		if (*s == (char)c)
			return (void*)d;
	}
	return (NULL);
}
