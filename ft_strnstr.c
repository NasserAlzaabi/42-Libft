/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 18:49:08 by naalzaab          #+#    #+#             */
/*   Updated: 2023/02/02 23:07:07 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	x;

	if (*to_find == 0 || str == to_find)
		return ((char *)str);
	if (!len)
		return (NULL);
	x = ft_strlen(to_find);
	while (*str && x <= len)
	{
		if (!(ft_strncmp((char *)str, (char *)to_find, x)))
			return ((char *)str);
		str++;
		len--;
	}
	return (NULL);
}
