#include "main.h"

int	ft_58_exist(char **strs, int size)
{
	int	i;
	int	i2;

	i = 0;
	while (i < size)
	{
		i2 = 0;
		while (strs[i][i2])
		{
			if (strs[i][i2] == ':')
				return (1);
			i2++;
		}
		i++;
	}
	return (0);
}

int	ft_atoi_check(char **strs, int	size)
{
	int	i;
	int	i2;

	i = 0;
	while (i < size)
	{
		i2 = 0;
		if (strs[i][i2] == '-' || strs[i][i2] == '+')
			i2++;
		while (strs[i][i2] != ':' && strs[i][i2])
		{
			if (!(strs[i][i2] > '0' && strs[i][i2] < '9'))
				return (0);
			i2++;
		}
		i++;
	}
	return (1);
}

int	ft_check_dict(char **strs, int size)
{
	if (!(ft_58_exist(strs, size)))
		return (0);
	if (!(ft_atoi_check(strs, size)))
		return (0);
	else
		return (1);
}
