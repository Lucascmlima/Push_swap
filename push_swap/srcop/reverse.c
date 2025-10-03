/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 10:41:18 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/09/04 13:30:51 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	reverse_rotate(t_node **stack)
{
	t_node	*prev;
	t_node	*last;

	if (!stack || !(*stack) || !(*stack)->next)
		return ;
	prev = NULL;
	last = *stack;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *stack;
	*stack = last;
}

void	rra(t_node **stack_a)
{
	if (stack_a && *stack_a && (*stack_a)->next)
	{
		reverse_rotate(stack_a);
		write(1, "rra\n", 4);
	}
}

void	rrb(t_node **stack_b)
{
	if (stack_b && *stack_b && (*stack_b)->next)
	{
		reverse_rotate(stack_b);
		write(1, "rrb\n", 4);
	}
}

void	rrr(t_node **stack_a, t_node **stack_b)
{
	int	rotated;

	rotated = 0;
	if (stack_a && *stack_a && (*stack_a)->next)
	{
		reverse_rotate(stack_a);
		rotated = 1;
	}
	if (stack_b && *stack_b && (*stack_b)->next)
	{
		reverse_rotate(stack_b);
		rotated = 1;
	}
	if (rotated)
		write(1, "rrr\n", 4);
}
