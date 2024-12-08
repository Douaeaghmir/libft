/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaghmir <doaghmir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:25:01 by doaghmir          #+#    #+#             */
/*   Updated: 2024/11/15 11:07:30 by doaghmir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	l_src;
	size_t	l_dest;
	size_t	i;

	l_src = ft_strlen(src);
	if (size == 0)
		return (l_src);
	l_dest = ft_strlen(dest);
	if (!src || !dest)
		return (0);
	if (size <= l_dest)
		return (size + l_src);
	i = 0;
	while (src[i] && (l_dest + i) < size - 1)
	{
		dest[l_dest + i] = src[i];
		i++;
	}
	dest[l_dest + i] = '\0';
	return (l_src + l_dest);
}
