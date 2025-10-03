/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:19:46 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/09/29 15:54:33 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *str);
int ft_is_prime(int i);
void ft_itoa(int i);

int main(int ac, char *av[])
{
	int i;
	int res;
	int done;
	
	res = 0;
	i = 1;
	done = 0;
	if (ac == 2)
	{
		res = ft_atoi(av[1]);
		while (++i <= res)
		{
			if (ft_is_prime(i))
				done += i;
		}
		
	}
	ft_itoa(done);
	write(1, "\n", 1);
	return (0);
}
	void ft_itoa(int i)
{
	char res;

	if (i > 9)
		ft_itoa(i / 10);
	res = (i % 10) + '0';
	write(1, &res, 1);
}

int ft_atoi(char *str)
{
	int i;
	int	res;

	i = 0;
	res = 0;
	while (str[i])
	{
		if(str[i] >= '0' && str[i] <= '9')
			res = res * 10 + (str[i] - '0');
		else
			break;
		i++;
	}
	return (res);	
}
int ft_is_prime(int i)
{
	int j;
	
	if (i <= 1)
		return (0);
	else if (i == 2)
		return (1);
	j = 2;
	while (j * j <= i)
	{
		if(i % j == 0)
			return (0);
		j++;
	}
	return (1);	
}