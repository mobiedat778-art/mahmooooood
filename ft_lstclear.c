/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobaidat <mobaidat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 21:54:48 by mobaidat          #+#    #+#             */
/*   Updated: 2026/09/24 14:28:40 by mobaidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;
	t_list	*temp;

	if (!lst || !del || !(*lst))
		return ;
	ptr = *lst;
	while (ptr)
	{
		temp = ptr;
		ptr = ptr->next;
		del(temp->content);
		free(temp);
	}
	*lst = NULL;
}
