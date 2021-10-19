/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 11:46:51 by fmustin           #+#    #+#             */
/*   Updated: 2021/08/24 12:25:36 by fmustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_verif_long(char **map, int *dim)
{
	int	i;

	i = 0;
	while (i < dim[0])
	{
		if (i != 0)
		{
			if (ft_strlen(map[i]) != ft_strlen(map[i - 1]))
				return (0);
		}
		i++;
	}
	return (1);
}

int	ft_verif_clues(char **map, char *clues, int *dim)
{
	int	a;
	int	b;

	a = 0;
	while (a < dim[0])
	{
		b = 0;
		while (b < dim[1])
		{
			if (map[a][b] != clues[0] && map[a][b] != clues[1])
				return (0);
			b++;
		}
		a++;
	}
	return (1);
}

int	ft_verif_inclues(char *clues)
{
	int	a;

	a = 1;
	while (a < 3)
	{
		if (clues[a] == clues[a - 1])
			return (0);
		a++;
	}
	if (clues[a - 1] == clues[a - 3])
		return (0);
	if (a == 3)
		return (1);
	else
		return (0);
}

int	ft_printable(char *clues)
{
	int	a;

	a = 0;
	while (a < 3)
	{
		if (!(((clues[a] >= 0) && (clues[a] < 32)) || (clues[a] != 127)))
		{
			return (0);
		}
		else
		{
			a++;
		}
	}
	return (1);
}

int	ft_verif_input(char **map, int *dim, char *clues)
{
	if (!ft_verif_long(map, dim))
		return (0);
	if (!ft_verif_clues(map, clues, dim))
		return (0);
	if (!ft_verif_inclues(clues))
		return (0);
	if (!ft_printable(clues))
		return (0);
	return (1);
}
