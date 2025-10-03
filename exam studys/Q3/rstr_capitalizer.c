/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 17:35:48 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/10/03 18:22:54 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char *av[])
{
	int i;
	int	j;
	
	j = 0;
	if (ac >= 2)
	{
		while (av[++j])
		{
			i = -1;
			while (av[j][++i])
		{
			if (av[j][i] >= 'A' && av[j][i] <= 'Z')
				av[j][i] += 32; 
			if ((av[j][i] >= 'a' && av[j][i] <= 'z')
    		&& (av[j][i + 1] == ' ' || av[j][i + 1] == '\t' || av[j][i + 1] == '\0'))
				av[j][i] -= 32;
			write(1, &av[j][i], 1);
		}
		write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}