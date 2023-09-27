/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 20:35:40 by naalzaab          #+#    #+#             */
/*   Updated: 2023/01/29 21:17:33 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*r;
	int		i;
	int		j;

	j = 0;
	i = 0;
	r = malloc(ft_strlen(s1) + 1);
	if (!r)
		return (NULL);
	while (s1[i])
		r[j++] = s1[i++];
	r[j] = '\0';
	return (r);
}
