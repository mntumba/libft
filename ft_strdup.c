/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mntumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 17:46:02 by mntumba           #+#    #+#             */
/*   Updated: 2017/07/05 13:12:25 by mntumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strdup(const char *s1)
{
	char			*s;
	unsigned int	i;

	i = -1;
	if (!(s = (char*)malloc(sizeof(*s) * ft_strlen(s1) + 1)))
		return (NULL);
	while (++i < ft_strlen(s1))
		s[i] = s1[i];
	s[i] = '\0';
	return (s);
}
