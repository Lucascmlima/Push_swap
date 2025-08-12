/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 13:51:48 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/08/12 16:23:05 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	char	**args;
	int		i;

	stack_a->next = NULL;
	if (argc < 2)
		return (0);
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
		args = &argv[1];
	i = 0;
	while (args[i])
	{
		if (!is_valid_int(args[i]))
		{
			write(2, "Error\n", 6);
			return (1);
		}
		add_to_stack(&stack_a, ft_atoi(args[i]));
		i++;
	}
	if (argc == 2)
		free_split(args);
	if (is_sorted(stack_a))
		write(1, "Stack is already sorted.\n", 25);
	else
		write(1, "Stack is NOT sorted.\n", 21);
	return (0);
}
