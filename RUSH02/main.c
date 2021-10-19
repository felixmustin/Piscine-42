/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 09:54:13 by fmustin           #+#    #+#             */
/*   Updated: 2021/08/22 17:28:31 by fmustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_to_text(char **tab, int size, char **dict)
{
	int		i;
	int		j;
	char	nb;
	int		number;

	number = 0;
	i = 0;
	while (i < size)
	{
		j = 2;
		while (j > -1)
		{
			nb = tab[size - i - 1][j];
			if (j == 2)
				ft_search_j2(nb, dict, size - i - 1, j);
			else if (j == 1)
				number = ft_search_j1(nb, dict, size - i - 1, j);
			else if (j == 0)
				ft_search_j0(nb, number, dict, size - i - 1, j);
			j--;
		}
		i++;
	}
}

int	ft_count_nbr(char **dict, char nb)
{
	int	i;
	int	j;

	i = 0;
	while (dict[i][0] != '\0')
	{
		j = 0;
		while (dict[i][j] != ':')
			j++;
		if (j == nb)
			return (i);
		else
			i++;
	}
	return (0);
}

void	ft_read_me(char *str, char x, char y)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i - 1] == ':')
		{
			ft_putstr(&str[i]);
			if (x == 0 && y == 0)
				return ;
			else
				ft_putchar (' ');
			return ;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	**tab;
	char	**dict;

	if (argc == 2)
	{
		if (ft_strlen(argv[1]) != 0)
		{
			tab = ft_create_tab(argv[1]);
			dict = ft_dict_to_tab(ft_create_dict());
			ft_to_text(tab, ft_size(argv[1]), dict);
			free(tab);
			free(dict);
		}
		else
			ft_putstr("Error\n");
	}
	else if (argc == 3)
	{
		tab = ft_create_tab(argv[2]);
		dict = ft_dict_to_tab(ft_init_dict(argv[1]));
		ft_to_text(tab, ft_size(argv[2]), dict);
		free(tab);
		free(dict);
	}
}
