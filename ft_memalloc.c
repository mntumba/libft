/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mntumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 00:06:43 by mntumba           #+#    #+#             */
/*   Updated: 2017/06/21 13:04:28 by mntumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memalloc(size_t size)
{
	void	*str;

	if ((str = (void*)malloc(size)) && size)
	{
		ft_bzero(str, size);
		return (str);
	}
	return (NULL);
}
