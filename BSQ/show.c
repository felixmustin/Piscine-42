/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmillet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 10:36:57 by cmillet           #+#    #+#             */
/*   Updated: 2021/08/25 16:48:06 by fmustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_show_map(char **nbr_map, char **map, int *dim, char *clues)
{
	int	max[3];
	int	i;
	int	j;
	int	g;

	g = 0;
	i = 0;
	ft_find_max(nbr_map, max, dim);
	while (i + max[1] < max[1] + max[0])
	{
		j = 0;
		while (j + max[2] < max[2] + max[0])
		{
			map[max[1] + i][max[2] + j] = clues[2];
			j++;
		}
		i++;
	}
	ft_print(map, dim);
	ft_free(map, dim);
}

int	*ft_find_max(char **nbr_map, int max[3], int *dim)
{
	int	j;
	int	i;

	i = 0;
	max[0] = 0;
	while (i < dim[0])
	{
		j = 0;
		while (j < dim[1])
		{
			if (nbr_map[i][j] - 48 > max[0])
			{
				max[0] = nbr_map[i][j] - 48;
				max[1] = i;
				max[2] = j;
			}
			j++;
		}
		i++;
	}
	ft_free(nbr_map, dim);
	return (max);
}

void	ft_print(char **map, int *dim)
{
	int	j;
	int	i;

	i = 0;
	while (i < dim[0])
	{
		j = 0;
		while (j < dim[1])
		{
			ft_putchar(map[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	ft_free(char **map, int *dim)
{
	int	i;

	i = 0;
	while (i < dim[0])
	{
		free(map[i]);
		i++;
	}
	free(map);
}
