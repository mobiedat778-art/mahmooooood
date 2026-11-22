/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobaidat <mobaidat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 16:54:59 by mobaidat          #+#    #+#             */
/*   Updated: 2026/11/22 18:59:31 by mobaidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack *stack)
{
	t_node	*first;
	t_node	*second;

	first = stack->first;
	second = stack->first->next;
	if (first->data > second->data && first->data < stack->last->data)
		sa(stack);
	else if (first->data < second->data && second->data > stack->last->data
		&& first->data < stack->last->data)
	{
		rra(stack);
		sa(stack);
	}
	else if (first->data < second->data && stack->last->data < second->data
		&& first->data > stack->last->data)
		rra(stack);
	else if (first->data > second->data && stack->last->data > second->data
		&& first->data > stack->last->data)
		ra(stack);
	else if (first->data > second->data && second->data > stack->last->data)
	{
		sa(stack);
		rra(stack);
	}
}
