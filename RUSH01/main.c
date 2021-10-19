/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaelens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 11:42:27 by asaelens          #+#    #+#             */
/*   Updated: 2021/08/16 13:48:11 by fmustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_recursive(int x, int y, int map[4][4], int clues[4][4]);
void	ft_create_clues(int clues[4][4], char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int	ft_check_input(char *str)
{
	int	i;

	i = 0;
	while (1)
	{
		if (str[i] > '0' && str[i] < '5')
			if (str[i + 1] == ' ')
				 	i += 2;
		else if (str[i + 1] == '\0')
			if (i == 30)
				return (1);
		else
			return (0);
		else
			return (0);
		else
			return (0);
	}
}

void	ft_show_map(int map[4][4])
{
	int	x;
	int	y;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			ft_putchar(map[y][x] + 48);
			if (x != 3)
				ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}

int	main(int argc, char **argv)
{
	int	map[4][4];
	int	clues[4][4];

	if (argc == 2)
	{
		if (ft_check_input(argv[1]))
		{
			ft_create_clues(clues, argv[1]);
			if (!(ft_recursive(0, 0, map, clues)))
				ft_putstr("Error\n");
		}
		else
			ft_putstr("Error\n");
	}
	else
		ft_putstr("Error\n");
}
