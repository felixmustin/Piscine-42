#include "main.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_size(char *nbr)
{
	int	len;
	int	size;

	len = ft_strlen(nbr);
	size = len / 3;
	if (len % 3 != 0)
		size++;
	return (size);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] <= '9' && str[i] >= '0'))
			return (0);
		i++;
	}
	return (i);
}

int	ft_strlen_ws(char *str)
{
	int	i;
	int	i2;

	i = 0;
	i2 = 0;
	while (str[i + i2])
	{
		if (str[i + i2] == ' '
			|| (str[i + i2] == '\n' && str[i + i2 + 1] == '\n'))
			i2++;
		else
			i++;
	}
	return (i);
}
