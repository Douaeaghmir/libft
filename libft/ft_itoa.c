/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaghmir <doaghmir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 11:20:56 by doaghmir          #+#    #+#             */
/*   Updated: 2024/11/15 13:02:31 by doaghmir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_len(long n)
{
	long	len;

	len = 1;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*ft_itoawraped(long n)
{
	long	len;
	char	*result;

	len = ft_len(n);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (n == 0)
	{
		result[0] = '0';
		return (result);
	}
	else if (n < 0)
	{
		n *= -1;
		result[0] = '-';
	}
	while (n > 0)
	{
		result[--len] = n % 10 + '0';
		n /= 10;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	return (ft_itoawraped(n));
}
