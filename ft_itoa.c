/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:40:10 by mikkayma          #+#    #+#             */
/*   Updated: 2024/10/28 13:49:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num_len(long n)
{
	int		caunt;
	int		sign;
	long	nb;

	if (n == -2147483648)
		return (11);
	nb = n;
	if (nb < 0)
	{
		sign = -1;
		nb *= -1;
	}
	else
		sign = 1;
	caunt = 0;
	while (nb > 0)
	{
		nb /= 10;
		caunt++;
	}
	if (sign == -1 || n == 0)
		caunt++;
	return (caunt);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nb;

	nb = n;
	len = ft_num_len(nb);
	if (nb < 0)
		nb *= -1;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len > 0)
	{
		str[(len--) - 1] = (nb % 10) + '0';
		nb /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
