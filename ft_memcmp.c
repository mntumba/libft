/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mntumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 17:26:51 by mntumba           #+#    #+#             */
/*   Updated: 2017/06/21 13:05:56 by mntumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	if (n == 0 || !(str1 = (unsigned char*)s1) || !(str2 = (unsigned char*)s2))
		return (0);
	--str1;
	--str2;
	while (++str1 && ++str2 && (*str1 == *str2) && n-- > 1)
		;
	return (*str1 - *str2);
}
