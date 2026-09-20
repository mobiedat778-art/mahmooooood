/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobaidat <mobaidat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 08:03:32 by mobaidat          #+#    #+#             */
/*   Updated: 2026/09/20 08:30:53 by mobaidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
#include "stdio.h"
void	fun (void *content)
{
	content = "ss";
	char * str = content;
	printf("%s" , str);
}
int main()
{
	t_list	first ;
	first.content = "oooooo";
	void (*f)(void *) = fun;
	ft_lstiter(&first , f);
}*/
