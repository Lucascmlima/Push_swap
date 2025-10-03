/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 10:16:54 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/09/23 19:56:19 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_sorted(t_node *a)
{
	t_node	*t;
	
	t = a;
	while (t && t->next)
	{
		if (t->value > t->next->value)
			return (0);
		t = t->next;

	}
	return (1);
}

