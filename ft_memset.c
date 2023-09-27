/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 17:25:18 by naalzaab          #+#    #+#             */
/*   Updated: 2023/01/29 20:31:58 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dst, int c, size_t len)
{
	size_t			i;
	unsigned char	*b;

	b = (unsigned char *)dst;
	i = 0;
	while (i < len)
	{
		b[i] = c;
		i++;
	}
	return (dst = b);
}
