/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <brhajji-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 11:40:35 by brhajji-          #+#    #+#             */
/*   Updated: 2022/01/26 16:54:16 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	nb_mot(char const *str, char c, size_t t)
{
	size_t	i;
	int		nb;

	i = 0;
	nb = 0;
	while (i < t && str[i])
	{
		if (str[i] != c && (i == 0 || str[i - 1] == c))
			nb++;
		i++;
	}
	return (nb);
}

static char	*put_in_tab(char const *str, char c)
{
	int		x;
	int		i;
	char	*tab;

	x = 0;
	i = 0;
	tab = NULL;
	while (str[x] != c && str[x])
		x++;
	tab = malloc (sizeof (char) * (x + 1));
	if (!tab)
		return (NULL);
	while (i < x && str[i] != c && str[i])
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

char	**ft_split(char const *str, char c)
{
	size_t	i;
	int		taille;
	int		x;
	char	**tab;

	if (!str)
		return (NULL);
	taille = 0;
	i = -1;
	x = nb_mot(str, c, ft_strlen(str));
	tab = malloc (sizeof (char *) * (x + 1));
	if (!tab)
		return (NULL);
	while (++i < ft_strlen(str) && str[i])
	{
		while (str[i] == c)
			i++;
		if (taille < x && str[i] != c && (i == 0 || str[i - 1] == c))
		{
			tab[taille] = put_in_tab(&str[i], c);
			taille++;
		}
	}
	tab[taille] = NULL;
	return (tab);
}
