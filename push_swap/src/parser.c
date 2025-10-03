/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 10:15:40 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/09/23 18:44:20 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	is_valid_number(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int		has_duplicates(t_node **a)
{
	t_node	*tmp;
	t_node	*cmp;

	tmp = *a;
	while (tmp)
	{
		cmp = tmp->next;
		while (cmp)
		{
			if (tmp->value == cmp->value)
				return (1);
			cmp = cmp->next;
		}
		tmp = tmp->next;
	}
	return (0);
}
static int	is_int_range(char *str)
{
	long	c;

	c = ft_atol(str);
	return (c >= INT_MIN && c <= INT_MAX);
}

void	error_and_exit(t_node **a, char **split)
{
	if (split)
		free_split(split);
	if (a)
		free_stack(a);
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}

void	parse_arguments(t_node **stack, char **argv)
{
	char	**split;
	int		i;
	int		j;
	long	num;
	t_node	*node;

	if (!stack)
		return ;
	*stack = NULL;
	i = 1;
	while (argv[i])
	{
		split = ft_split(argv[i], ' ');
		if (!split || !split[0])
			error_and_exit(stack, split);
		j = -1;
		while (split[++j])
		{
			if (!is_valid_number(split[j]) || !is_int_range(split[j]))
				error_and_exit(stack, split);
			num = ft_atol(split[j]);
			node = new_node((int)num);
			if (!node)
				error_and_exit(stack, split);
			add_back(stack, node);
		}
		free_split(split);
		i++;
	}
	if (has_duplicates(stack))
		error_and_exit(stack, NULL);
	
}

