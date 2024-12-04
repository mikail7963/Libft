/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikkayma <mikkayma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:54:16 by mikkayma          #+#    #+#             */
/*   Updated: 2024/10/11 15:12:06 by mikkayma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	index;
	char	*result;

	index = 0;
	end = ft_strlen(s1);
	start = 0;
	while (start < end && ft_strchr((char *)set, s1[start]))
		start++;
	while (start < end && ft_strchr((char *)set, s1[end - 1]))
		end--;
	result = (char *)malloc(end - start + 1);
	if (!result)
		return (NULL);
	while (start < end)
	{
		result[index] = s1[start];
		start++;
		index++;
	}
	result[index] = '\0';
	return (result);
}
