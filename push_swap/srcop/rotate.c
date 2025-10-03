/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 10:40:00 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/09/04 13:30:58 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate(t_node **stack)
{
	t_node	*first;
	t_node	*last;

	if (!stack || !(*stack) || !(*stack)->next)
		return ;
	first = *stack;
	*stack = first->next;
	first->next = NULL;
	last = *stack;
	while (last->next)
		last = last->next;
	last->next = first;
}

void	ra(t_node **stack_a)
{
	if (stack_a && *stack_a && (*stack_a)->next)
	{
		rotate(stack_a);
		write(1, "ra\n", 3);
	}
}

void	rb(t_node **stack_b)
{
	if (stack_b && *stack_b && (*stack_b)->next)
	{
		rotate(stack_b);
		write(1, "rb\n", 3);
	}
}

void	rr(t_node **stack_a, t_node **stack_b)
{
	int	rotated;

	rotated = 0;
	if (stack_a && *stack_a && (*stack_a)->next)
	{
		rotate(stack_a);
		rotated = 1;
	}
	if (stack_b && *stack_b && (*stack_b)->next)
	{
		rotate(stack_b);
		rotated = 1;
	}
	if (rotated)
		write(1, "rr\n", 3);
}
