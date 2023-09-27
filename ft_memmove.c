/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 18:53:44 by naalzaab          #+#    #+#             */
/*   Updated: 2023/01/31 19:18:50 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	size_t	i;

	i = len;
	d = (char *)dst;
	s = (char *)src;
	if (!dst && !src)
		return (0);
	if (s < d)
	{
		while (i--)
		{
			d[i] = s[i];
		}
	}	
	else
		ft_memcpy(d, s, len);
	return (dst);
}
