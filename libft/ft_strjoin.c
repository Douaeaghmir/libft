/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaghmir <doaghmir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 11:21:38 by doaghmir          #+#    #+#             */
/*   Updated: 2024/11/13 19:02:24 by doaghmir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	char	*join;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	join = malloc(s1len + s2len + 1);
	if (!join)
		return (NULL);
	ft_memcpy(join, s1, s1len);
	ft_memcpy(join + s1len, s2, s2len);
	join[s1len + s2len] = '\0';
	return (join);
}
