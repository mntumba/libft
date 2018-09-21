/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mntumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 11:56:19 by mntumba           #+#    #+#             */
/*   Updated: 2017/06/21 13:06:22 by mntumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;
	int		i;

	d = (char*)dst;
	s = (char*)src;
	i = -1;
	while (++i < (int)n)
		d[i] = s[i];
	return ((void*)dst);
}
