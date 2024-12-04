/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikkayma <mikkayma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:35:53 by mikkayma          #+#    #+#             */
/*   Updated: 2024/10/14 12:06:13 by mikkayma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_byte;
	char	*mem;
	size_t	i;

	total_byte = count * size;
	mem = malloc(total_byte);
	if (mem == NULL)
		return (NULL);
	i = 0;
	while (i < total_byte)
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}
