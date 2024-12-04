/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikkayma <mikkayma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:45:19 by mikkayma          #+#    #+#             */
/*   Updated: 2024/10/14 13:04:23 by mikkayma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	s;

	i = 0;
	s = 0;
	if (needle[s] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		s = 0;
		while (haystack[i + s] == needle[s] && (i + s) < len)
		{
			if (needle[s + 1] == '\0')
				return ((char *)&haystack[i]);
			s++;
		}
		i++;
	}
	return (0);
}
