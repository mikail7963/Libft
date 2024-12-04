/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikkayma <mikkayma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:48:59 by mikkayma          #+#    #+#             */
/*   Updated: 2024/10/16 17:29:03 by mikkayma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	char		*dt;
	const char	*sc;

	if (!src && !dst)
		return (NULL);
	dt = dst;
	sc = src;
	while (len--)
		*dt++ = *sc++;
	return (dst);
}
