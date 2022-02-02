/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 12:24:32 by brhajji-          #+#    #+#             */
/*   Updated: 2022/01/25 21:31:44 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_sort(t_list *pile_x)
{
	if (!pile_x)
		return (0);
	while (pile_x && pile_x->next)
	{
		if (pile_x->content > pile_x->next->content)
			return (0);
		else
			pile_x = pile_x->next;
	}
	return (1);
}
