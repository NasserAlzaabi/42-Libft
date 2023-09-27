/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 20:21:35 by naalzaab          #+#    #+#             */
/*   Updated: 2023/02/02 19:13:46 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*r;

	if (size && SIZE_MAX / size < count)
		return (NULL);
	r = malloc(size * count);
	if (!r)
		return (0);
	ft_bzero(r, count * size);
	return (r);
}
