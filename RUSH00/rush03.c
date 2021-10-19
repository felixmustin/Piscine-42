void	ft_putchar(char c);

void	ifandelse(int i1, int i2, int x, int y)
{
	if ((i2 == 1 && i1 == 1 ) || (i2 == x && i1 == 1 && x != 1 && y != 1 ))
	{
		ft_putchar('A');
	}
	else if ((i2 == x && i1 == y) || (i2 == 1 && i1 == y))
	{
		ft_putchar('C');
	}
	else if (!(i1 > 1 && i1 < y))
	{
		ft_putchar('B');
	}
	else if (!(i2 > 1 && i2 < x))
	{
		ft_putchar('B');
	}
	else if ((i2 > 1 && i2 < x))
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	i1;
	int	i2;

	i1 = 1;
	while (i1 <= y)
	{
		i2 = 1;
		while (i2 <= x)
		{
			ifandelse(i1, i2, x, y);
			i2++;
		}
		ft_putchar('\n');
		i1++;
	}
}
