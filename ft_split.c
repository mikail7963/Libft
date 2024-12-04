/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:00:06 by mikkayma          #+#    #+#             */
/*   Updated: 2024/10/29 13:21:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strcounter(char const *s, char c)
{
	int	i;
	int	strcount;

	i = 0;
	strcount = 0;
	if (!*s)
		return (0);
	while (s[i] == c)
		i++;
	if (s[i] == '\0')
		return (0);
	while (s[i])
	{
		if (s[i] == c)
		{
			if (s[i + 1] != c && s[i + 1] != '\0')
				strcount++;
		}
		i++;
	}
	return (strcount + 1);
}

static int	ft_wordcount(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && (char)s[i] != c)
		i++;
	return (i);
}

static char	**ft_mem_free(char **strarray, int strcount)
{
	while (strcount-- > 0)
		free(strarray[strcount]);
	free(strarray);
	return (NULL);
}

static char	**ft_strarraycpy(char **strarray, const char *s, char c)
{
	int		i;
	int		strcount;
	int		start;

	start = 0;
	i = 0;
	strcount = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			i += ft_wordcount(&s[i], c);
			strarray[strcount] = ft_substr(s, start, i - start);
			if (!strarray[strcount++])
				return (ft_mem_free(strarray, strcount));
		}
		else
			i++;
	}
	strarray[strcount] = NULL;
	return (strarray);
}

char	**ft_split(char const *s, char c)
{
	char	**strarray = (char **)malloc(sizeof(char *) * (ft_strcounter(s, c) + 1));
	return (!strarray ? NULL :  ft_strarraycpy(strarray, s, c));
}
