/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 13:53:03 by fmustin           #+#    #+#             */
/*   Updated: 2021/08/15 14:10:52 by fmustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_no_double(int x, int y, int map[4][4]);
int		ft_validate_l(int x_y, int map[4][4], int clues[4][4]);
int		ft_validate_c(int x_y, int map[4][4], int clues[4][4]);
void	ft_show_map(int map[4][4]);

int	ft_recursive(int x, int y, int map[4][4], int clues[4][4])
{
	int	sol;

	sol = 0;
	map[x][y] = 1;
	while (map[x][y] <= 4 && sol == 0)
	{
		if (ft_no_double(x, y, map))
		{
			if (x < 3 && y < 3)
				sol = ft_recursive(x, y + 1, map, clues);
			if (y == 3 && x < 3 && ft_validate_l(x, map, clues) == 1)
				sol = ft_recursive(x + 1, 0, map, clues);
			if (y < 3 && x == 3 && ft_validate_c(y, map, clues) == 1)
				sol = ft_recursive(x, y + 1, map, clues);
			if (x == 3 && y == 3 && ft_validate_l(x, map, clues)
				&& ft_validate_c(y, map, clues))
			{
				ft_show_map(map);
				sol = 1;
			}
		}
		map[x][y] += 1;
	}
	return (sol);
}
