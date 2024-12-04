/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikkayma <mikkayma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 11:02:18 by mikkayma          #+#    #+#             */
/*   Updated: 2024/10/15 14:08:17 by mikkayma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*sr;
	char	*ds;
	size_t	i;

	i = 0;
	sr = (char *)src;
	ds = (char *)dst;
	if (!sr && !ds)
		return (NULL);
	if (ds > sr)
	{
		while (len-- > 0)
			ds[len] = sr[len];
	}
	else
	{
		while (i < len)
		{
			ds[i] = sr[i];
			i++;
		}
	}
	return (dst);
}
