/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobaidat <mobaidat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 09:08:19 by mobaidat          #+#    #+#             */
/*   Updated: 2026/11/02 16:24:34 by mobaidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	update_dst(t_stack *src, t_stack *dst)
{
	if (dst->first == NULL)
	{
		dst->first = src->first;
		dst->last = dst->first;
		dst->first->next = dst->first;
		dst->first->prev = dst->first;
	}
	else
	{
		dst->first = src->first;
		dst->first->next = dst->last->next;
		dst->first->prev = dst->last;
		dst->last->next->prev = dst->first;
		dst->last->next = src->first;
	}
}

static void	push(t_stack *src, t_stack *dst)
{
	t_node	*sec_src;
	bool	six_seven;

	six_seven = false;
	if (!src || !dst || src->first == NULL)
		return ;
	if (src->last->next == src->last)
		six_seven = true;
	sec_src = src->first->next;
	update_dst(src, dst);
	src->first = sec_src;
	if (six_seven)
	{
		src->first = NULL;
		src->last = NULL;
	}
	else
	{
		src->last->next = src->first;
		src->first->prev = src->last;
	}
}

void	pa(t_stack *b_src, t_stack *a_dst)
{
	if (!b_src || !a_dst || b_src->first == NULL)
		return ;
	push(b_src, a_dst);
	write(1, "pa\n", 3);
}

void	pb(t_stack *a_src, t_stack *b_dst)
{
	if (!a_src || !b_dst || a_src->first == NULL)
		return ;
	push(a_src, b_dst);
	write(1, "pb\n", 3);
}
