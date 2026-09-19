/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobaidat <mobaidat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 21:54:48 by mobaidat          #+#    #+#             */
/*   Updated: 2026/09/19 22:41:21 by mobaidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;
	t_list	*ptr_con;
	t_list	*temp;

	ptr = *lst;
	ptr_con = *lst;
	while (ptr_con)
	{
		del(ptr_con->content);
		ptr_con = ptr_con->next;
	}
	while (ptr)
	{
		temp = ptr;
		ptr = temp->next;
		free(temp);
	}
	*lst = NULL;
}
/*void fun(void  *content)
{
	free(content);
}*/
