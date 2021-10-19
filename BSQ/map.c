/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 12:07:56 by fmustin           #+#    #+#             */
/*   Updated: 2021/08/24 16:19:09 by fmustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	**ft_create_map(int *dim)
{
	char	**map;
	int		i;

	i = 0;
	map = NULL;
	map = malloc(sizeof(char *) * dim[0]);
	if (!map)
	{
		free(map);
		return (0);
	}
	while (i < dim[0])
	{
		map[i] = malloc(sizeof(char) * dim[1]);
		if (!map[i])
			return (0);
		map[i][dim[1]] = '\0';
		i++;
	}
	return (map);
}

char	**ft_solve_map(char **nbr_map, char **map, char clues[3], int dim[2])
{
	int	i;
	int	j;

	i = dim[0] - 1;
	while (i >= 0)
	{
		j = dim[1] - 1;
		while (j >= 0)
		{
			if (map[i][j] == clues[1])
				nbr_map[i][j] = '0';
			else if (map[i][j] == clues[0])
			{
				if (i == dim[0] - 1)
					nbr_map[i][j] = '1';
				else if (j == dim[1] - 1)
					nbr_map[i][j] = '1';
				else
					nbr_map[i][j] = (ft_check_neighbours(nbr_map, i, j) + 1);
			}
			j--;
		}
		i--;
	}
	return (nbr_map);
}

char	ft_check_neighbours(char **map, int i, int j)
{
	char	a;
	char	b;
	char	c;

	a = map[i + 1][j];
	b = map[i][j + 1];
	c = map[i + 1][j + 1];
	if (a <= b && a <= c)
		return (a);
	else if (b <= a && b <= c)
		return (b);
	else if (c <= a && c <= b)
		return (c);
	else
		return (0);
}
