/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 10:06:08 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/08/12 16:12:44 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;

	if (!stack || !*stack || !(*stack)->next)
		return (0);
	first = *stack;
	second = (*stack)->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
}

void	sa(t_stack **stack_a)
{
	if (stack_a && *stack_a && (*stack_a)->next)
	{
		swap(stack_a);
		write(1, "sa\n", 3);
	}
}

void	sb(t_stack **stack_b)
{
	if (stack_b && *stack_b && (*stack_b)->next)
	{
		swap(stack_b);
		write(1, "sb\n", 3);
	}
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	int	swapped;

	swapped = 0;
	if (stack_a && *stack_a && (*stack_a)->next)
	{
		swap(stack_a);
		swapped = 1;
	}
	if (stack_b && *stack_b && (*stack_b)->next)
	{
		swap(stack_b);
		swapped = 1;
	}
	if (swapped)
		write(1, "ss\n", 3);
}

/*
first recebe o header da lista
o second recebe o segundo elmento da lista
faz o header apontar para o que o segundo apontava -
(no caso para o 3 fazendo ele virar o segundo)
o segundo aponta para o primeiro (fazendo ele virar o primeiro)
atualiza a stack quem e o header.
*/