/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 19:45:01 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/10/03 20:08:49 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
	int len;
	int *res;
	int i;
	
	i = 0;
	if (start >= end)
		return (NULL);
	len = end - start;
	
	res = (int *) malloc (sizeof(int) * len);
	if (!res)
		return (NULL);
	while(i < len)
	{
		res[i] = start + i;
		i++;		
	}
	return (res);
}