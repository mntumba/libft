/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mntumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 12:47:05 by mntumba           #+#    #+#             */
/*   Updated: 2017/06/21 13:27:02 by mntumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*to_ret;

	to_ret = (char *)s + ft_strlen(s);
	++to_ret;
	while (--to_ret && *to_ret != c)
		if (to_ret == s)
			return (NULL);
	return (to_ret);
}
