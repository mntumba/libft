/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mntumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 11:20:13 by mntumba           #+#    #+#             */
/*   Updated: 2017/06/21 13:23:46 by mntumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t		i;
	size_t		j;

	i = -1;
	j = -1;
	while (s1[++i])
		;
	while (s2[++j] && j < n)
		s1[i + j] = s2[j];
	s1[i + j] = '\0';
	return (s1);
}
