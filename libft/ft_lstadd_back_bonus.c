/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doaghmir <doaghmir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 11:20:59 by doaghmir          #+#    #+#             */
/*   Updated: 2024/12/08 17:27:37 by doaghmir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (lst == NULL)
		return ;
	node = *lst;
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = new;
		return ;
	}
	*lst = new;
}
