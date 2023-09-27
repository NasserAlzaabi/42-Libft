/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 19:10:19 by naalzaab          #+#    #+#             */
/*   Updated: 2023/02/09 19:06:13 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*n;
	t_list	*tmp;

	if (!del || !lst)
		return ;
	n = *lst;
	while (n)
	{
		tmp = n->next;
		ft_lstdelone(n, del);
		n = tmp;
	}
	*lst = NULL;
}