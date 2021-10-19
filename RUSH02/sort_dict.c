#include "main.h"

void	ft_swap(char **s1, char **s2)
{
	char	*c;

	c = *s1;
	*s1 = *s2;
	*s2 = c;
}

int	ft_value(char *str)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (str[i] && str[i] != ':')
	{
		x += str[i];
		i++;
	}
	return (x);
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (s1[i] != ':' || s2[i] != ':'))
	{
		if (ft_value(s1) != ft_value(s2))
			return (ft_value(s1) - ft_value(s2));
		i++;
	}
	return (0);
}

void	ft_sort_dict(char **str, int size)
{
	int	i;

	i = 0;
	while (size - 1 - i)
	{
		if (ft_strcmp(str[i], str[i + 1]) > 0)
		{
			ft_swap(&str[i], &str[i + 1]);
			i = 0;
		}
		else
			i++;
	}
}
