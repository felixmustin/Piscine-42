#include "main.h"

int	ft_search_j2(char nb, char **dict, char x, char y)
{
	int	i;

	i = 0;
	if (nb != '0')
	{
		while (dict[i][0] != '\0')
		{
			if (dict[i][0] == nb)
			{
				ft_read_me(dict[i], x, y);
				i = ft_count_nbr(dict, 3);
				ft_read_me(dict[i], x, y);
				return (0);
			}
			i++;
		}
	}
	return (0);
}

int	ft_search_j1(char nb, char **dict, char x, char y)
{
	int	i;

	i = 0;
	if (nb == 49)
		return (49);
	else if (nb > 1)
	{
		while (dict[i][0] != '\0')
		{
			if (dict[i][0] == nb)
			{
				if (dict[i][1] == '0')
				{
					ft_read_me(dict[i], x, y);
					return (0);
				}
			}
			i++;
		}
	}
	return (0);
}

int	ft_search_j0(char nb, char number, char **dict, char x, char y)
{
	int	i;

	i = 0;
	if (nb != '0')
		ft_search_j0_2(nb, number, dict, x, y, i);
	else
	{
		if (number == 49)
		{
			ft_read_me(dict[10], x, y);
			ft_check_length(dict, x, y);
		}
	}
	return (0);
}

int	ft_search_j0_2(char nb, char number, char **dict, char x, char y, int i)
{
	while (dict[i][0] != '\0')
	{
		if (number == 49)
		{
			if (dict[i][0] == 49)
			{
				if (dict[i][1] == nb)
				{
					ft_read_me(dict[i], x, y);
					ft_check_length(dict, x, y);
					return (0);
				}
			}
		}
		else
		{
			if (dict[i][0] == nb)
			{
				ft_read_me(dict[i], x, y);
				ft_check_length(dict, x, y);
				return (0);
			}
		}
		i++;
	}
	return (0);
}

void	ft_check_length(char **dict, char x, char y)
{
	int	i;

	if (x > 0)
	{
		x = x * 3 + 1;
		i = ft_count_nbr(dict, x);
		ft_read_me(dict[i], x, y);
	}
	else
		exit(0);
}
