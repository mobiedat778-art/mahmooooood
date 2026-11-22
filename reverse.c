/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobaidat <mobaidat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 09:36:59 by mobaidat          #+#    #+#             */
/*   Updated: 2026/11/02 16:23:48 by mobaidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse(t_stack *stack)
{
	if (!stack || stack->first == NULL || stack->first->next == stack->first)
		return ;
	stack->first = stack->last;
	stack->last = stack->last->prev;
}

void	rra(t_stack *stack_a)
{
	if (!stack_a || stack_a->first == NULL
		|| stack_a->first->next == stack_a->first)
		return ;
	reverse(stack_a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack *stack_b)
{
	if (!stack_b || stack_b->first == NULL
		|| stack_b->first->next == stack_b->first)
		return ;
	reverse(stack_b);
	write(1, "rrb\n", 4);
}

static void	helper_rrr(t_stack *stack_a, t_stack *stack_b, bool *a, bool *b)
{
	if (!stack_a || stack_a->first == NULL
		|| stack_a->first->next == stack_a->first)
		*a = false;
	if (!stack_b || stack_b->first == NULL
		|| stack_b->first->next == stack_b->first)
		*b = false;
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	bool	a;
	bool	b;

	a = true;
	b = true;
	helper_rrr(stack_a, stack_b, &a, &b);
	if (a || b)
	{
		if (a && !b)
			reverse(stack_a);
		else if (b && !a)
			reverse(stack_b);
		else
		{
			reverse(stack_a);
			reverse(stack_b);
		}
	}
	else
		return ;
	write(1, "rrr\n", 4);
}
