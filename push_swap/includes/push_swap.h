/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 16:24:37 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/09/26 10:46:17 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>  
# include <stdlib.h>
# include <limits.h>
# include "../libft/libft.h"

typedef struct s_node
{
	int             value;
	int             index;
	struct s_node   *next;
}   t_node;

void    print_stack(t_node *stack);
void	parse_arguments(t_node **stack, char **argv);
int		has_duplicates(t_node **a);
void	error_and_exit(t_node **a, char **split);
long	ft_atol(const char *str);
void	free_split(char **split);
void    assign_index(t_node *stack);
t_node 	*get_min_node(t_node *stack);


void	radix_cases(t_node *stack_a, t_node *stack_b);

int     ft_atoi(const char *str);
int		stack_size(t_node *a);
int     is_sorted(t_node *a);
void    free_stack(t_node **stack);

void	sort_2(t_node **a);
void	sort_3(t_node **a);
void	sort_5(t_node **a, t_node **b);

void    add_back(t_node **stack, t_node *new);
t_node  *new_node(int value);
void    index_stack(t_node *a, int *arr, int size);

void    sa(t_node **a);
void    sb(t_node **b);
void    ss(t_node **a, t_node **b);
void    pa(t_node **a, t_node **b);
void    pb(t_node **a, t_node **b);
void    ra(t_node **a);
void    rb(t_node **b);
void    rr(t_node **a, t_node **b);
void    rra(t_node **a);
void    rrb(t_node **b);
void    rrr(t_node **a, t_node **b);

void    radix_sort(t_node **a, t_node **b);

#endif

