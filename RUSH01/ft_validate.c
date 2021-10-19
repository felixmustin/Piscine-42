/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 13:49:07 by fmustin           #+#    #+#             */
/*   Updated: 2021/08/15 14:12:44 by fmustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_validate_l_inverse(int x_y, int map[4][4], int clues[4][4]);
int	ft_validate_c_inverse(int x_y, int map[4][4], int clues[4][4]);

int	ft_validate_l(int x_y, int map[4][4], int clues[4][4])
{
	int	visible;
	int	max;
	int	i;

	i = 0;
	visible = 0;
	max = 0;
	while (i < 4)
	{
		if (map[x_y][i] > max)
		{
			max = map[x_y][i];
			visible += 1;
		}
		i++;
	}
	if (visible != clues[2][x_y])
		return (0);
	else
		return (ft_validate_l_inverse(x_y, map, clues));
}

int	ft_validate_l_inverse(int x_y, int map[4][4], int clues[4][4])
{
	int	visible;
	int	max;
	int	i;

	i = 3;
	visible = 0;
	max = 0;
	while (i >= 0)
	{
		if (map[x_y][i] > max)
		{
			max = map[x_y][i];
			visible += 1;
		}
		i--;
	}
	if (visible != clues[3][x_y])
		return (0);
	else
		return (1);
}

int	ft_validate_c(int x_y, int map[4][4], int clues[4][4])
{
	int	visible;
	int	max;
	int	i;

	i = 0;
	visible = 0;
	max = 0;
	while (i < 4)
	{
		if (map[i][x_y] > max)
		{
			max = map[i][x_y];
			visible += 1;
		}
		i++;
	}
	if (visible != clues[0][x_y])
		return (0);
	else
		return (ft_validate_c_inverse(x_y, map, clues));
}

int	ft_validate_c_inverse(int x_y, int map[4][4], int clues[4][4])
{
	int	visible;
	int	max;
	int	i;

	i = 3;
	visible = 0;
	max = 0;
	while (i >= 0)
	{
		if (map[i][x_y] > max)
		{
			max = map[i][x_y];
			visible += 1;
		}
		i--;
	}
	if (visible != clues[1][x_y])
		return (0);
	else
		return (1);
}

int	ft_no_double(int y, int x, int map[4][4])
{
	int	x1;
	int	y1;

	x1 = 0;
	y1 = 0;
	if (y > 0)
	{
		while (y1 < y)
		{
			if (map[y][x] == map[y1][x])
				return (0);
			y1++;
		}
	}
	if (x > 0)
	{
		while (x1 < x)
		{
			if (map[y][x] == map[y][x1])
				return (0);
			x1++;
		}
	}
	return (1);
}
