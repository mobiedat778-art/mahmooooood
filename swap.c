/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobaidat <mobaidat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 09:05:52 by mobaidat          #+#    #+#             */
/*   Updated: 2026/11/02 16:21:49 by mobaidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack *stack)
{
	int	temp;

	if ((!stack) || !(stack->first) || ((stack->first->next) == (stack->first)))
		return ;
	temp = stack->first->data;
	stack->first->data = stack->first->next->data;
	stack->first->next->data = temp;
}

void	sa(t_stack *stack_a)
{
	if (!stack_a || !(stack_a->first)
		|| (stack_a->first == stack_a->first->next))
		return ;
	swap(stack_a);
	write(1, "sa\n", 3);
}

void	sb(t_stack *stack_b)
{
	if (!stack_b || !(stack_b->first)
		|| (stack_b->first == stack_b->first->next))
		return ;
	swap(stack_b);
	write(1, "sb\n", 3);
}

static void	helper_ss(t_stack *stack_a, t_stack *stack_b, bool *a, bool *b)
{
	if (!stack_b || !(stack_b->first)
		|| (stack_b->first == stack_b->first->next))
		*b = false;
	if (!stack_a || !(stack_a->first)
		|| (stack_a->first == stack_a->first->next))
		*a = false;
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	bool	a;
	bool	b;

	a = true;
	b = true;
	helper_ss(stack_a, stack_b, &a, &b);
	if (a || b)
	{
		if (a && !b)
			swap(stack_a);
		else if (b && !a)
			swap(stack_b);
		else
		{
			swap(stack_a);
			swap(stack_b);
		}
	}
	else
		return ;
	write(1, "ss\n", 3);
}
