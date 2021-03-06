/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mntumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 19:53:25 by mntumba           #+#    #+#             */
/*   Updated: 2017/06/21 13:16:24 by mntumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	--s1;
	--s2;
	while (++s1 && ++s2 && *s1 && *s2 && *s1 == *s2)
		;
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
