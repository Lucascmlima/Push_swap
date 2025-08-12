/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 10:18:29 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/08/12 16:03:12 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push(t_stack **src, t_stack **dst)
{
	t_stack	*tmp;

	if (!src || !(*src))
		return (0);
	tmp = *src;
	*src = (*src)->next;
	tmp->next = *dst;
	*dst = tmp;
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_b && *stack_b)
	{
		push(stack_b, stack_a);
		write(1, "pa\n", 3);
	}
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_a && *stack_a)
	{
		push(stack_a, stack_b);
		write(1, "pb\n", 3);
	}
}

/*
inicialmente guarda o primeiro elemento no temp
depois pula a cabeca para o segundo elemento
anexa o antigo primeiro elemento que esta solto a cabeca da segunda lista
diz para lista que agora ele e o primeiro elemento.
*/