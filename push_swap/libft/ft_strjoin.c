/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarvalh <lcarvalh@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:20:17 by lcarvalh          #+#    #+#             */
/*   Updated: 2025/04/14 13:36:32 by lcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_s2;
	char	*ns1s2;

	if (!s1 || !s2)
		return (NULL);
	s1_s2 = ft_strlen(s1) + ft_strlen(s2);
	ns1s2 = (char *)malloc(sizeof(char) * (s1_s2 + 1));
	if (!ns1s2)
		return (NULL);
	ft_strlcpy(ns1s2, s1, s1_s2 + 1);
	ft_strlcat(ns1s2, s2, s1_s2 + 1);
	return (ns1s2);
}
