/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 10:05:28 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/09/26 10:47:34 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int  get_max_bits(t_node *a)
{
	t_node *temp;
    int max;
    int bits;

	temp = a;
    max = 0;
    while (temp)
    {
		if (temp->index > max)
			max = temp->index;
        temp = temp->next;
    }
    bits = 0;
    while ((max >> bits) != 0)
        bits++;
    return (bits);
}

void    radix_sort(t_node **a, t_node **b)
{
    int i;
    int j;
    int size;
    int bits;

    bits = get_max_bits(*a);
    i = 0;
    while (i < bits)
    {
        j = 0;
		size = stack_size(*a);
        while (j < size)
        {
            if (!(((*a)->index >> i) & 1))
            {
                pb(a, b);
            }
            else
                ra(a);
			j++;
        }
        while (*b)
            pa(a, b);
        i++;
    }
}

void    assign_index(t_node *stack)
{
    int     i;
    int     size;
    t_node  *min;

    size = stack_size(stack);
    i = 0;
    while (i < size)
    {
        min = get_min_node(stack);  
        if (min)
            min->index = i;
        i++;
    }
}
t_node *get_min_node(t_node *stack)
{
    t_node *min;
	
	min = NULL;
    while (stack)
    {
        if (stack->index == -1)
        {
            if (!min || stack->index < min->index)
                min = stack;
        }
        stack = stack->next;
    }
    return (min);
}
