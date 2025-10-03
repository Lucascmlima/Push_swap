/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:00:47 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/10/01 14:12:16 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char *ft_strdup(char *av)
{
	int i;
	char *dup;
	int j;
	
	j = -1;
	i = -1;
	while (av[++j]);
	dup =malloc(j + 1);
	if (!dup)
		return (NULL);
	while (av[++i])
		dup[i] = av[i];
	dup[i] = '\0';
	return (dup);
}