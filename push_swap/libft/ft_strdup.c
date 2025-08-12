/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 09:51:34 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/04/14 11:00:36 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	lens1;
	char	*s1cpy;

	lens1 = ft_strlen(s1) + 1;
	s1cpy = (char *)malloc(lens1 * sizeof(char));
	if (s1cpy == NULL)
		return (NULL);
	ft_strlcpy(s1cpy, s1, lens1);
	return (s1cpy);
}
