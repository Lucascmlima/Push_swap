#include "../includes/push_swap.h"

void	sort_2(t_node **a)
{
	if ((*a)->value > (*a)->next->value)
		sa(a);
}

void	sort_3(t_node **a)
{
	int x = (*a)->value;
	int y = (*a)->next->value;
	int z = (*a)->next->next->value;

	if (x > y && y < z && x < z)
		sa(a);
	else if (x > y && y > z && x > z)
	{
		sa(a);
		rra(a);
	}
	else if (x > y && y < z && x > z)
		ra(a);
	else if (x < y && y > z && x < z)
	{
		sa(a);
		ra(a);
	}
	else if (x < y && y > z && x > z)
		rra(a);
}

static int	get_min_index(t_node *a)
{
	int		min;
	int		index;
	int		pos;
	t_node	*tmp;

	min = a->value;
	index = 0;
	pos = 0;
	tmp = a;
	while (tmp)
	{
		if (tmp->value < min)
		{
			min = tmp->value;
			pos = index;
		}
		index++;
		tmp = tmp->next;
	}
	return (pos);
}

void	sort_5(t_node **a, t_node **b)
{
	int	size;
	int	pos;

	size = stack_size(*a);
	while (size > 3)
	{
		pos = get_min_index(*a);
		if (pos == 1)
			ra(a);
		else if (pos == 2)
		{
			ra(a);
			ra(a);
		}
		else if (pos == 3 && size == 5)
		{
			rra(a);
			rra(a);
		}
		else if (pos == 3 && size == 4)
			rra(a);
		else if (pos == 4)
			rra(a);
		pb(a, b);
		size--;
	}
	sort_3(a);
	while (*b)
		pa(a, b);
}
