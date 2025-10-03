/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 10:03:25 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/09/26 10:45:05 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;

	stack_a = NULL;
	stack_b = NULL;

	if (argc < 2)
		return (0);
	parse_arguments(&stack_a, argv);
	assign_index (stack_a);
	if (is_sorted(stack_a))
		return (0);
	radix_cases(stack_a, stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}

void	radix_cases(t_node *stack_a, t_node *stack_b)
{
	int	size;

	size = stack_size(stack_a);
	if (size == 2)
		sort_2(&stack_a);
	else if (size == 3)
		sort_3(&stack_a);
	else if (size <= 5)
		sort_5(&stack_a, &stack_b);
	else
		radix_sort(&stack_a, &stack_b);
}


/*int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;
	int		size;

	a = NULL;
	b = NULL;
	if (argc < 2)
		return (0);
	a = parse_args(argc, argv);
	if (!a)
		return (1);
	size = stack_size(a);
	if (is_sorted(a))
	{
		free_stack(&a);
		return (0);
	}
	if (size == 2)
		sort_2(&a);
	else if (size == 3)
		sort_3(&a);
	else if (size <= 5)
		sort_5(&a, &b);
	else
		radix_sort(&a, &b);
	free_stack(&a);
	free_stack(&b);
	return (0);
}*/



