/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naalzaab <naalzaab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 19:35:06 by naalzaab          #+#    #+#             */
/*   Updated: 2023/01/29 19:53:10 by naalzaab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*n;

	if (!del || !f)
		return (NULL);
	n = NULL;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!new)
		{
			while (n)
			{
				new = n->next;
				(*del)(n->content);
				free(n);
				n = new;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&n, new);
		lst = lst->next;
	}
	return (n);
}
