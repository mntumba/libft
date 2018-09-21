/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mntumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 11:01:08 by mntumba           #+#    #+#             */
/*   Updated: 2017/06/21 13:14:53 by mntumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strcat(char *str1, const char *str2)
{
	int		i;
	int		j;

	i = -1;
	j = -1;
	while (str1[++i])
		;
	while (str2[++j])
		str1[i + j] = str2[j];
	str1[i + j] = '\0';
	return (str1);
}
