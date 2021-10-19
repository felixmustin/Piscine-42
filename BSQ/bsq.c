/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 11:13:00 by fmustin           #+#    #+#             */
/*   Updated: 2021/08/25 17:24:11 by fmustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_skip_first_line(char *str_map)
{
	int	a;

	a = 0;
	while (str_map[a] != '\n')
		a++;
	a++;
	return (a);
}

char	**ft_put_in_tab(char *str_map, int dim[2], char **map)
{
	int	index[3];

	index[1] = 0;
	index[0] = ft_skip_first_line(str_map);
	while (str_map[index[0] + 1] != '\0')
	{
		index[2] = 0;
		while (str_map[index[0]] != '\n' && str_map[index[0]] != '\0')
			map[index[1]][index[2]++] = str_map[index[0]++];
		if (index[1] < dim[0])
		{
			map[index[1]][index[2]] = '\0';
			if (index[2] == dim[1])
			{
				if (++index[1] != dim[0])
					index[0]++;
			}
			else
				return (0);
		}
		else
			return (0);
	}
	return (map);
}

int	ft_process_main(char *str_map)
{
	char	clues[3];
	int		dim[2];
	char	**map;

	ft_clues(str_map, clues);
	if (!(ft_dimension(str_map, dim, clues)))
		return (0);
	map = ft_create_map(dim);
	if ((ft_put_in_tab(str_map, dim, map)) != 0)
	{
		if (ft_verif_input(map, dim, clues))
			ft_show_map(ft_solve_map(ft_create_map(dim), map, clues, dim),
				   	map, dim, clues);
		else
			return (0);
	}
	else
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	char	*str_map;
	int		i;

	i = 1;
	if (argc < 2)
	{
		str_map = ft_read_stdin();
		if (!(ft_process_main(str_map)))
			ft_putstr("map error\n");
	}
	else
	{
		while (i < argc)
		{
			str_map = ft_read_input(argv[i]);
			if (!(ft_process_main(str_map)))
				ft_putstr("map error\n");
			i++;
			if (i != argc)
				ft_putstr("\n");
		}
	}
}
