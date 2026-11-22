/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobaidat <mobaidat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 14:33:14 by mobaidat          #+#    #+#             */
/*   Updated: 2026/11/22 14:46:31 by mobaidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stack(t_stack *stack)
{
	stack->first = NULL;
	stack->last = NULL;
}

t_node	*create_node(int data)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->data = data;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

void	add_node(t_stack *stack, t_node *node)
{
	if (stack->first == NULL)
	{
		stack->first = node;
		stack->last = node;
		node->next = node;
		node->prev = node;
	}
	else
	{
		stack->first->prev = node;
		stack->last->next = node;
		node->next = stack->first;
		node->prev = stack->last;
		stack->last = node;
	}
}

void	free_stack(t_stack *stack)
{
	t_node	*current;
	t_node	*temp;

	current = stack->first;
	if (stack->first == NULL)
		return ;
	while (current != stack->last)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
	free(current);
	current = NULL;
	temp = NULL;
	stack->first = NULL;
	stack->last = NULL;
}
