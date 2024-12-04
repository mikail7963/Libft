/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikkayma <mikkayma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 10:42:26 by mikkayma          #+#    #+#             */
/*   Updated: 2024/10/18 16:18:04 by mikkayma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		s1_size;
	int		s2_size;
	int		total;

	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	total = s1_size + s2_size;
	str = (char *)malloc(total + 1);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1, s1_size + 1);
	ft_strlcat(str, s2, total + 1);
	str[total] = '\0';
	return (str);
}
