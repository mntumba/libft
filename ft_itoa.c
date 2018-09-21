/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mntumba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/17 12:49:37 by mntumba           #+#    #+#             */
/*   Updated: 2017/06/21 13:00:58 by mntumba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_itoa(int n)
{
	int		sign;
	char	*str;
	int		len;
	long	nbr;

	nbr = (n < 0) ? -(long)n : n;
	sign = (n < 0) ? -1 : 0;
	len = (sign == -1) ? 2 : 1;
	while ((nbr /= 10) >= 1)
		len++;
	if (!(str = (char*)malloc((len + 1) * sizeof(char))))
		return (NULL);
	str[len] = '\0';
	nbr = (n < 0) ? -(long)n : n;
	while (len-- + sign)
	{
		str[len] = nbr % 10 + 48;
		nbr /= 10;
	}
	len == 0 ? str[len] = '-' : 0;
	return (str);
}
