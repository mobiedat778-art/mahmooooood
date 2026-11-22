/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobaidat <mobaidat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 14:11:23 by mobaidat          #+#    #+#             */
/*   Updated: 2026/11/02 16:22:58 by mobaidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_stack *stack)
{
	if (!stack || stack->first == NULL || stack->first->prev == stack->first)
		return ;
	stack->first = stack->first->next;
	stack->last = stack->last->next;
}

void	ra(t_stack *stack_a)
{
	if (!stack_a || stack_a->first == NULL
		|| stack_a->first->prev == stack_a->first)
		return ;
	rotate(stack_a);
	write(1, "ra\n", 3);
}

void	rb(t_stack *stack_b)
{
	if (!stack_b || stack_b->first == NULL
		|| stack_b->first->prev == stack_b->first)
		return ;
	rotate(stack_b);
	write(1, "rb\n", 3);
}

static void	helper_rr(t_stack *stack_a, t_stack *stack_b, bool *a, bool *b)
{
	if (!stack_a || stack_a->first == NULL
		|| stack_a->first->prev == stack_a->first)
		*a = false;
	if (!stack_b || stack_b->first == NULL
		|| stack_b->first->prev == stack_b->first)
		*b = false;
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	bool	a;
	bool	b;

	a = true;
	b = true;
	helper_rr(stack_a, stack_b, &a, &b);
	if (a || b)
	{
		if (a && !b)
			rotate(stack_a);
		else if (b && !a)
			rotate(stack_b);
		else
		{
			rotate(stack_a);
			rotate(stack_b);
		}
	}
	else
		return ;
	write(1, "rr\n", 3);
}
