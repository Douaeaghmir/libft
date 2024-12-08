/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaghmir <doaghmir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 11:20:42 by doaghmir          #+#    #+#             */
/*   Updated: 2024/11/14 16:21:01 by doaghmir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*s;

	if (size && (count * size / size) != count)
		return (NULL);
	s = malloc(size * count);
	if (!s)
		return (NULL);
	ft_bzero(s, count * size);
	return (s);
}
