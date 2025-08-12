/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 17:17:06 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/04/14 11:01:50 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptrs;
	unsigned char		cc;

	cc = (unsigned char)c;
	ptrs = (const unsigned char *)s;
	while (n--)
	{
		if (*ptrs == cc)
			return ((void *)ptrs);
		ptrs++;
	}
	return (NULL);
}
