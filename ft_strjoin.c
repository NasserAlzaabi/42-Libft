/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 22:59:07 by naalzaab          #+#    #+#             */
/*   Updated: 2023/01/31 21:18:27 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	// int		i;
	// int		n;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) +ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (len + 1));
	// i = 0;
	// n = 0;
	if (!str)
		return (NULL);
	ft_memmove(str, s1, ft_strlen((char *)s1));
	ft_memmove(str + ft_strlen((char *)s1), s2, ft_strlen(s2));
	str[len] = '\0';
	return (str);
}
