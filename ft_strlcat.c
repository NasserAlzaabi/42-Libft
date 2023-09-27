/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 18:49:01 by naalzaab          #+#    #+#             */
/*   Updated: 2023/02/02 19:02:52 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	x;
	size_t	i;
	size_t	lensrc;
	size_t	lendst;

	lensrc = 0;
	lendst = 0;
	i = 0;
	x = 0;
	while (lendst < dstsize && dst[lendst])
		lendst++;
	while (src[lensrc])
		lensrc++;
	if (lendst == dstsize)
		return (lendst + lensrc);
	x = lendst;
	while (src[i] && x < dstsize - 1 && dstsize > 0)
	{
		dst[x] = src[i];
		x++;
		i++;
	}	
	dst [x] = '\0';
	return ((lendst + lensrc));
}
