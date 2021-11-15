/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeharpr <mpeharpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:43:23 by mpeharpr          #+#    #+#             */
/*   Updated: 2021/11/09 19:09:10 by mpeharpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*head;
	t_list	*backup;

	if (!lst)
		return ;
	head = *lst;
	while (head)
	{
		backup = head->next;
		ft_lstdelone(head, del);
		head = backup;
	}
	*lst = NULL;
}
