/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobaidat <mobaidat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 16:45:13 by mobaidat          #+#    #+#             */
/*   Updated: 2026/09/19 17:48:02 by mobaidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = (*lst);
	(*lst) = new;
}
/*
#include "stdio.h"
int main()
{
	t_list	*head;
	t_list	first;
	head = &first;
	first.next = NULL;
	t_list new ;
	ft_lstadd_front(&head ,&new);
	new.content = "99";
	first.content = "77";
	printf ("%s\n" , (char *)head->content);	
	printf ("%s\n" , (char *)head->next->content);
        //printf ("%s\n" , (char *)((*head).content));
    //  printf ("%s\n" , (char *)((*head).next->content));
}*/
