/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 10:18:29 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/09/04 13:30:23 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push(t_node **src, t_node **dst)
{
	t_node	*tmp;

	if (!src || !(*src))
		return ;
	tmp = *src;
	*src = (*src)->next;
	tmp->next = *dst;
	*dst = tmp;
}

void	pa(t_node **stack_a, t_node **stack_b)
{
	if (stack_b && *stack_b)
	{
		push(stack_b, stack_a);
		write(1, "pa\n", 3);
	}
}

void	pb(t_node **stack_a, t_node **stack_b)
{
	if (stack_a && *stack_a)
	{
		push(stack_a, stack_b);
		write(1, "pb\n", 3);
	}
}
