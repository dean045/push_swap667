/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:55:29 by brhajji-          #+#    #+#             */
/*   Updated: 2022/01/27 14:29:14 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_free(t_list **pile_a, t_data data)
{
	t_list	*tmp;

	while ((*pile_a))
	{
		tmp = (*pile_a);
		(*pile_a) = (*pile_a)->next;
		free(tmp);
	}
	free(data.tab);
	return (0);
}

int	freetab(char **tab, int size, int ac)
{
	if (ac == 2)
	{
		while (--size >= 0)
			free(tab[size]);
		free(tab);
	}
	return (0);
}
