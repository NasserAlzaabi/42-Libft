/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 16:06:05 by naalzaab          #+#    #+#             */
/*   Updated: 2023/02/09 17:30:26 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	find_c(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (*s)
	{
		if (*s != c)
		{
			len++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	len;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	str = malloc(sizeof(char *) * (find_c(s, c) + 1));
	if (!str)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				s++;
			str[i++] = ft_substr(s - len, 0, len);
		}
		else
			s++;
	}
	str[i] = NULL;
	return (str);
}
