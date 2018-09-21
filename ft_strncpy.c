/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mntumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 10:45:37 by mntumba           #+#    #+#             */
/*   Updated: 2017/06/21 13:24:48 by mntumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	unsigned int		i;

	i = -1;
	while (src[++i] && i < n)
		dst[i] = (unsigned char)src[i];
	while (i < n)
		dst[i++] = '\0';
	return (dst);
}
