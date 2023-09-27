/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 18:49:05 by naalzaab          #+#    #+#             */
/*   Updated: 2023/02/02 19:03:34 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	x;
	size_t	i;
	size_t	lensrc;
	size_t	lendst;

	lensrc = 0;
	lendst = 0;
	i = 0;
	x = 0;
	while (src[lensrc])
		lensrc++;
	if (lendst == dstsize)
		return (lendst + lensrc);
	while (src[i] && x < dstsize - 1 && dstsize > 0)
	{
		dst[x] = src[i];
		x++;
		i++;
	}	
	dst [x] = '\0';
	return ((lendst + lensrc));
}
